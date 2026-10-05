#include "span_1000/code_802AE254.h"
#include "types.h"

extern s32 D_800D364C;
void func_802B155C_us_rev1(int arg0) {
    D_800D364C = arg0;
}

extern s32 func_802AE380_us_rev1(u8 *);
extern s32 D_8014D3E8;

s32 func_802B156C_us_rev1(u16 *arg0) {
    u8 sp10;
    s32 result;
    u16 high;

    func_802AE380_us_rev1(&sp10);
    result = 0;
    if (D_8014D3E8 == 0) {
        high = sp10 << 8;
        func_802AE380_us_rev1(&sp10);
        if (D_8014D3E8 == 0) {
            result = 1;
            *arg0 = high | sp10;
        }
    }
    return result;
}

extern s32 func_802AE380_us_rev1(u8 *);
extern s32 D_8014D3E8;

s32 func_802B15EC_us_rev1(s32 *arg0) {
    u8 sp10;
    s32 result;
    s32 word;

    func_802AE380_us_rev1(&sp10);
    result = 0;
    if (D_8014D3E8 == 0) {
        word = sp10 << 8;
        func_802AE380_us_rev1(&sp10);
        if (D_8014D3E8 == 0) {
            word |= sp10;
            func_802AE380_us_rev1(&sp10);
            word <<= 8;
            if (D_8014D3E8 == 0) {
                word |= sp10;
                func_802AE380_us_rev1(&sp10);
                word <<= 8;
                if (D_8014D3E8 == 0) {
                    result = 1;
                    word |= sp10;
                    *arg0 = word;
                }
            }
        }
    }
    return result;
}

extern s32 func_802AE380_us_rev1(u8 *);
extern s32 D_8014D3E8;

s32 func_802B16B4_us_rev1(u8 *arg0, s32 arg1) {
    s32 result;
    s32 i;
    u8 value;

    result = 0;
    i = 0;
    while (1) {
        func_802AE380_us_rev1(&value);
        if (D_8014D3E8 != 0) {
            break;
        }
        if (i < arg1) {
            arg0[i] = value;
        }
        i += 1;
        if (value != 0) {
            continue;
        }
        result = 1;
        break;
    }
    return result;
}

extern s32 func_802AE5AC_us_rev1(s32);
extern s32 D_8014D3E8;
s32 func_802B1734_us_rev1(u32 arg0)
{
  s32 result;
  result = 0;
  func_802AE5AC_us_rev1((arg0 >> 8) & 0xFF);
  if (D_8014D3E8 == 0)
  {
    func_802AE5AC_us_rev1(arg0 & 0xFF);
    result = D_8014D3E8 == 0;
  }
  return result;
}

extern s32 func_802AE5AC_us_rev1(s32);
extern s32 D_8014D3E8;

s32 func_802B1790_us_rev1(u32 arg0) {
    s32 result;

    result = 0;
    func_802AE5AC_us_rev1(arg0 >> 0x18);
    if (D_8014D3E8 == 0) {
        func_802AE5AC_us_rev1((arg0 >> 0x10) & 0xFF);
        if (D_8014D3E8 == 0) {
            func_802AE5AC_us_rev1((arg0 >> 8) & 0xFF);
            if (D_8014D3E8 == 0) {
                func_802AE5AC_us_rev1(arg0 & 0xFF);
                result = D_8014D3E8 == 0;
            }
        }
    }
    return result;
}
