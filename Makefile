# Adjust these paths to match your system
CC = arm-kindle-linux-gnueabi-gcc
STRIP = arm-kindle-linux-gnueabi-strip

# Paths
FBINK_DIR = libs/FBInk-v1.25.0/
INCLUDES = -I$(FBINK_DIR)
LIBS = $(FBINK_DIR)/Release/libfbink.a -lm

# Targets
TARGET = kMesh
SRC = key_mapping.c key_mapping.h main.c

CFLAGS = -Wall -O2 -static $(INCLUDES)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
	$(STRIP) $@

clean:
	rm -f $(TARGET)

