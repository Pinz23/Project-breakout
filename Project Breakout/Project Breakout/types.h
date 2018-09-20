#pragma once

using u8 = unsigned char;
using u16 = unsigned short;
using u32 = unsigned int;
using u64 = unsigned long long int;

using i8 = char;
using i16 = short;
using i32 = int;
using i64 = long long int;

static_assert(sizeof(u8) == 1 && sizeof(i8) == 1, "Type u8/i8 size not 1 byte");
static_assert(sizeof(u16) == 2 && sizeof(i16) == 2, "Type u16/i16 size not 2 bytes");
static_assert(sizeof(u32) == 4 && sizeof(i32) == 4, "Type u32/i32 size not 4 bytes");
static_assert(sizeof(u64) == 8 && sizeof(i64) == 8, "Type u64/i64 size not 8 bytes");
static_assert(sizeof(float) == 4, "Type float size not 4 bytes");
static_assert(sizeof(double) == 8, "Type double size not 8 bytes");
