/* Handles Controller Pak menu confirmations and returns focus to an enabled widget for the active channel. */
#include "types.h"
typedef struct Node { char pad[0x2C]; struct Node *next; } Node;
s32 func_80299B4C_de();                                /* extern */
s32 func_8040EBD0_de(void *);                          /* extern */
Node *func_8041B7FC_de(s32, s32);                      /* extern */
void func_8041B8DC_de(s32, s32, void *);                  /* extern */
void func_80433BCC_de(s32);                               /* extern */
void func_80433D38_de(s32);                               /* extern */
void func_80434250_de(s32, s32);                            /* extern */
void func_80434E34_de(s32);                               /* extern */
extern char *D_800E54A4;                    

typedef struct {char pad[0x58]; s32 state,mode; char tail[0xBA0-0x60]; s32 status, counter;} Channel;
typedef struct {char pad[0x2C]; s32 selected[4];} Root;
typedef struct { char bytes[0xB68]; } ChannelRecord;
static inline Channel *channel(s32 i) { return (Channel *)&((ChannelRecord *)D_800E54A4)[i]; }
typedef struct func_804305D8_S1 func_804305D8_S1;
typedef struct func_804305D8_S2 func_804305D8_S2;
struct func_804305D8_S1 {
    char pad0[0xBA0];
    s32 unkBA0;
    char padBA0[0xBA4 - 0xBA0 - sizeof(s32)];
    s32 unkBA4;
};
struct func_804305D8_S2 {
    char pad0[0x4];
    s32 unk4;
};

s32 func_804303F8_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_v1;
    Node *var_s0;
    Node *var_s0_2;
    Node *var_s0_3;

    temp_s1 = arg2 & 0xFFFF;
    temp_v0 = channel(temp_s1)->state;
    switch (temp_v0) {
    case 12:
        temp_s0 = func_8029DB58_de(arg4);
        if (temp_s0 < func_80299B4C_de()) {
            temp_v1 = D_800E54A4 + (temp_s1 * 0xB68);
            (((func_804305D8_S1 *)(temp_v1))->unkBA4) = 0;
            (((func_804305D8_S1 *)(temp_v1))->unkBA0) = 2;
        }
        if (arg3 == 1) {
            func_8029973C_de();
            channel(temp_s1)->status = arg3;
            func_80434E34_de(temp_s1);
            func_8025DF34_de(0xE81);
            return 0;
        }
        return 0;
    case 4:
        if (arg3 == 1) {
            func_8029973C_de();
            func_80434250_de(temp_s1, 0);
            ((Root *)D_800E54A4)->selected[temp_s1] = 0;
            func_8025DF34_de(0xE74);
            return 0;
        }
        return 0;
    case 13:
        if ((channel(temp_s1)->mode == 6) && (arg3 == 1)) {
            func_8029973C_de();
            var_s0 = func_8041B7FC_de(((func_804305D8_S2 *)(D_800E54A4))->unk4, temp_s1)->next;
loop_11:
            if (func_8040EBD0_de(var_s0) != 0) {
                var_s0 = var_s0->next;
                goto loop_11;
            }
            func_8041B8DC_de((((func_804305D8_S2 *)(D_800E54A4))->unk4), temp_s1, var_s0);
            func_8025DF34_de(0xE74);
            return 0;
        }
        return 0;
    case 22:
        if (arg3 == 1) {
            var_s0_2 = func_8041B7FC_de(((func_804305D8_S2 *)(D_800E54A4))->unk4, temp_s1)->next;
loop_16:
            if (func_8040EBD0_de(var_s0_2) != 0) {
                var_s0_2 = var_s0_2->next;
                goto loop_16;
            }
            func_8041B8DC_de((((func_804305D8_S2 *)(D_800E54A4))->unk4), temp_s1, var_s0_2);
            func_80433BCC_de(temp_s1);
        }
        goto block_24;
    case 27:
        if (arg3 == 1) {
            var_s0_3 = func_8041B7FC_de(((func_804305D8_S2 *)(D_800E54A4))->unk4, temp_s1)->next;
loop_21:
            if (func_8040EBD0_de(var_s0_3) != 0) {
                var_s0_3 = var_s0_3->next;
                goto loop_21;
            }
            func_8041B8DC_de((((func_804305D8_S2 *)(D_800E54A4))->unk4), temp_s1, var_s0_3);
            func_80433D38_de(temp_s1);
        }
block_24:
        func_8029973C_de();
        break;
    }
    return 0;
}
