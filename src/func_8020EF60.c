/* Chooses a computer player's next pickup goal when it has none at 0x68: fills a list with the pickup
   kinds its need at 0xBC wants (0xBC4 to 0xBC9 and 0x6BA/0x6BB), resets the node list D_8013B364 and
   selects the matching nodes through func_8020F150, then records the chosen node's goal, id and history
   or clears the need when nothing is selected. */
#include "basetypes.h"

typedef struct Obj8020EF60 {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    u32 unkC;
    u8 pad10[4];
    s32 history[4];
    u8 pad24[0x44];
    s32 unk68;
    u8 pad6C[0x50];
    u32 unkBC;
} Obj8020EF60;

extern s32 D_8013B364;

extern void func_8020D014(void *arg0);
extern void func_8020D1FC(void *arg0);
extern s32 func_8020F150(s32 *ids);
extern void func_8020D0CC(void *arg0, s32 key);
extern void *func_8020CFE0(void *arg0, u32 key);
extern void func_8020D114(void *arg0, s32 *output, s32 count);

s32 func_8020EF60(Obj8020EF60 *arg0) {
    s32 buffer[30];
    s32 count;
    void *p;
    void *record;
    void *base;
    u32 sel;
    s32 *key; /* FAKEMATCH: pointer-to-field local places the key load after the -1 store */

    if (arg0->unk68 == 0) {
        base = &D_8013B364;
        count = 0x1D;
        p = &buffer[29];
        do {
            *(s32 *) p = 0;
            count -= 1;
            p = (u8 *) p - 4;
        } while (count >= 0);

        switch (arg0->unkBC) {
        case 0:
            buffer[0] = 0xBC6;
            buffer[1] = 0xBC7;
            buffer[2] = 0xBC4;
            buffer[3] = 0xBC5;
            buffer[4] = 0xBC8;
            buffer[5] = 0xBC9;
            buffer[6] = 0x6BA;
            buffer[7] = 0x6BB;
            break;
        case 1:
            buffer[0] = 0x6BA;
            buffer[1] = 0x6BB;
            break;
        case 2:
            buffer[0] = 0x6BA;
            break;
        case 3:
            buffer[0] = 0x6BB;
            break;
        case 4:
            buffer[0] = 0xBC6;
            buffer[1] = 0xBC7;
            buffer[2] = 0xBC4;
            buffer[3] = 0xBC5;
            buffer[4] = 0xBC8;
            buffer[5] = 0xBC9;
            break;
        case 5:
            buffer[0] = 0xBC6;
            buffer[1] = 0xBC7;
            break;
        case 6:
            buffer[0] = 0xBC4;
            buffer[1] = 0xBC5;
            break;
        case 7:
            buffer[0] = 0xBC8;
            buffer[1] = 0xBC9;
            break;
        }

        if (buffer[0] != 0) {
            func_8020D014(base);
            func_8020D1FC(base);

            key = &arg0->unk4;
            if (func_8020F150(buffer) == 0) {
                arg0->unk68 = 0;
                arg0->unkBC = -1U;
                return 1;
            }

            *(u32 *) ((u8 *) base + 0x18) = -1U;
            func_8020D0CC(base, *key);

            sel = *(u32 *) ((u8 *) base + 0x18);
            if (sel != -1U) {
                record = func_8020CFE0(base, sel);
                arg0->unkC = *(u32 *) ((u8 *) base + 0x18);
                arg0->unk68 = *(s32 *) ((u8 *) record + 0x34);
                func_8020D114(base, arg0->history, 4);
                return 1;
            }
            arg0->unk68 = 0;
            arg0->unkBC = sel;
        } else {
            arg0->unk68 = 0;
            arg0->unkBC = -1U;
        }
    }

    return 1;
}
