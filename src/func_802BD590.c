#include "basetypes.h"

typedef struct {
    u8 bytes[0x28];
} Block40;

extern u8 D_8014D4B0;
extern u8 D_80154110[];

extern void func_802BED04(void);
extern void func_802BD7C0(s32 arg0, s32 arg1);
extern s32 func_802BEDA0(s32, s32);
extern void func_802C0390(s32, s32, s32);
extern u32 func_802BDD58(void *arg0);
extern u32 func_804479D0(s32 arg0, s32 arg1);
extern void func_802BED70(void);

u32 func_802BD590(s32 arg0, s32 arg1, u16 arg2, u8 *arg3) {
    Block40 saved;
    u8 *source;
    s32 i;
    s32 retries;
    u32 result;

    source = D_80154110;
    retries = 2;
    func_802BED04();
    D_8014D4B0 = 2;
    func_802BD7C0(arg1, arg2 & 0xFFFF);
    func_802BEDA0(1, D_80154110);
    func_802C0390(arg0, 0, 1);
    do {
        func_802BEDA0(0, D_80154110);
        func_802C0390(arg0, 0, 1);
        source = D_80154110;
        if (arg1 != 0) {
            i = 0;
            if (arg1 > 0) {
                do {
                    i++;
                    source++;
                } while (i < arg1);
            }
        }
        saved = *(Block40 *)source;
        result = (saved.bytes[2] & 0xC0) >> 4;
        if (result == 0) {
            if ((func_802BDD58(&saved.bytes[6]) & 0xFF) != saved.bytes[0x26]) {
                result = func_804479D0(arg0, arg1);
                if (result != 0) {
                    break;
                }
                result = 4;
            } else {
                i = 0;
                do {
                    *arg3++ = ((Block40 *)((u8 *)&saved + i))->bytes[6];
                    i++;
                } while (i < 0x20);
            }
        } else {
            result = 1;
        }
        if (result != 4) {
            break;
        }
    } while (retries-- >= 0);
    func_802BED70();
    return result;
}
