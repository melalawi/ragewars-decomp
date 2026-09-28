#include "basetypes.h"

typedef struct {
    u8 bytes[0x28];
} Block40;

typedef struct {
    s32 field0;
    s32 field4;
    s32 index;
} Arg;

extern void *D_800D8380[];
extern u8 D_8014D4B0;
extern u8 D_8014D4C0[];
extern u8 D_8014D5C0;
extern u8 D_80154110[];

extern void func_802BED04(void);
extern s32 func_802BEDA0(s32, s32);
extern void func_802C0390(s32, s32, s32);
extern u32 func_802BDD58(void *arg0);
extern void func_802BED70(void);

u32 func_802BCEE4(Arg *arg0) {
    Block40 saved;
    u8 *source;
    s32 i;

    source = D_80154110;
    if (D_800D8380[arg0->index] == 0) {
        return 5;
    } else {
        u32 result;
        s32 count;

        func_802BED04();
        D_8014D4B0 = 3;
        func_802BEDA0(1, &D_8014D4C0[arg0->index << 6]);
        func_802C0390(arg0->field4, 0, 1);
        func_802BEDA0(0, D_80154110);
        func_802C0390(arg0->field4, 0, 1);
        count = arg0->index;
        if (count != 0) {
            i = 0;
            if (count > 0) {
                do {
                    i++;
                    source++;
                } while (i < count);
            }
        }
        saved = *(Block40 *)source;
        result = (saved.bytes[2] & 0xC0) >> 4;
        if ((result == 0) && ((func_802BDD58(&D_8014D5C0) & 0xFF) != saved.bytes[0x26])) {
            result = 4;
        }
        func_802BED70();
        return result;
    }
}
