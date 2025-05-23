/*
	FBInk: FrameBuffer eInker, a library to print text & images to an eInk Linux framebuffer
	Copyright (C) 2018-2022 NiLuJe <ninuje@gmail.com>
	SPDX-License-Identifier: GPL-3.0-or-later

	----

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef __FBINK_BLOCK_H
#define __FBINK_BLOCK_H

// Mainly to make IDEs happy
#include "fbink.h"
#include "fbink_internal.h"

#include "fonts/block.h"

// NOTE: Should technically be pure, but we can get away with const, according to https://lwn.net/Articles/285332/
static const uint32_t* block_get_bitmap(uint32_t) __attribute__((const));

#endif
