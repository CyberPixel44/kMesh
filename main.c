#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "fbink.h"
#include <unistd.h>
#include <fcntl.h>
#include <linux/input.h>
#include <sys/ioctl.h>
#include <errno.h>
#include "key_mapping.h"

int main() {
    const char *device = "/dev/input/event0"; // Adjust as needed
    struct input_event ev;

    // Initialize the FBInkConfig with all fields zeroed out
    FBInkConfig config = {
        .is_centered = false,
        .is_halfway = false,
        .fontmult = 0,
        .is_cleared = true,
        .fg_color = FG_WHITE,
        .bg_color = BG_BLACK,
        .is_flashing = true
    };

    int init_result = fbink_init(FBFD_AUTO, &config);
    if (init_result < 0) {
        fprintf(stderr, "fbink_init failed: %d\n", init_result);
        return EXIT_FAILURE;
    }

    int fd = open(device, O_RDONLY);
    if (fd < 0) {
        perror("Failed to open input device");
        return EXIT_FAILURE;
    }

    if (ioctl(fd, EVIOCGRAB, 1) == -1) {
        perror("EVIOCGRAB failed");
        close(fd);
        return EXIT_FAILURE;
    }

    printf("Listening for key events (exclusive)...\n");

    fbink_cls(FBFD_AUTO, &config, NULL, false);

    char buffer[256] = {0};
    size_t buffer_index = 0;

    while (read(fd, &ev, sizeof(ev)) > 0) {
        if (ev.type == EV_KEY && ev.value == 1) { // 1 = key press
            if (ev.code == MXCKPD_KEY_HOME) {
                printf("Home key pressed, exiting...\n");
                break; // Exit on ESC key
            }
            printf("Key code %d pressed\n", ev.code);

            char c = map_key_to_char(ev.code, buffer, &buffer_index);
            if (c != '\0') {
                buffer[buffer_index++] = c;
                buffer[buffer_index] = '\0'; // Null-terminate the string

                fbink_cls(FBFD_AUTO, &config, NULL, false);
                fbink_print(FBFD_AUTO, buffer, &config);
            }
        }
    }

    ioctl(fd, EVIOCGRAB, 0);
    close(fd);
    fbink_close(FBFD_AUTO);

    return EXIT_SUCCESS;
}
