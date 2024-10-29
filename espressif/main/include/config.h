// This file is part of switchbota (https://github.com/kendallgoto/switchbota/).
// Copyright (c) 2022 Kendall Goto.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 3.

// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define BINARY_URL "http://www.wohand.com/esphome.bin"
#define BINARY_MD5 (unsigned char[]){ 0x79, 0x83, 0xd4, 0xcb, 0x2f, 0x0f, 0x4e, 0x58, 0x3f, 0x37, 0x77, 0x27, 0x03, 0xb9, 0xe6, 0x0c }
#define OTA_BUF 2048
#define WRITE_SIZE 0x17b800

#define FALLBACK_URL "http://www.wohand.com/app.bin"
#define FALLBACK_SSID "switchbota"
#define FALLBACK_PASS "switchbota"
