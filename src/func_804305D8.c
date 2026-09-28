/* Handles Controller Pak menu confirmations and returns focus to an enabled widget for the active channel. */
#include "basetypes.h"
typedef struct Node { char pad[0x2C]; struct Node *next; } Node;
void func_8025DF54(s32);                                 /* extern */
void func_8029A73C();                                  /* extern */
s32 func_8029AB4C();                                /* extern */
s32 func_8029EB58(s32);                             /* extern */
s32 func_8040EC50(void *);                          /* extern */
Node *func_8041B87C(s32, s32);                      /* extern */
void func_8041B95C(s32, s32, void *);                  /* extern */
void func_80433DA8(s32);                               /* extern */
void func_80433F14(s32);                               /* extern */
void func_8043442C(s32, s32);                            /* extern */
void func_80435010(s32);                               /* extern */
extern char *D_800E54A4;                    

typedef struct {char pad[0x58]; s32 state,mode; char tail[0xBA0-0x60]; s32 status, counter;} Channel;
typedef struct {char pad[0x2C]; s32 selected[4];} Root;
static inline Channel *channel(s32 i) { return (Channel *)((char *)D_800E54A4 + i*0xB68); }
s32 func_804305D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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
        temp_s0 = func_8029EB58(arg4);
        if (temp_s0 < func_8029AB4C()) {
            temp_v1 = D_800E54A4 + (temp_s1 * 0xB68);
            (*(s32 *)((char *)temp_v1 + 0xBA4)) = 0;
            (*(s32 *)((char *)temp_v1 + 0xBA0)) = 2;
        }
        if (arg3 == 1) {
            func_8029A73C();
            channel(temp_s1)->status = arg3;
            func_80435010(temp_s1);
            func_8025DF54(0xE81);
            return 0;
        }
        return 0;
    case 4:
        if (arg3 == 1) {
            func_8029A73C();
            func_8043442C(temp_s1, 0);
            ((Root *)D_800E54A4)->selected[temp_s1] = 0;
            func_8025DF54(0xE74);
            return 0;
        }
        return 0;
    case 13:
        if ((channel(temp_s1)->mode == 6) && (arg3 == 1)) {
            func_8029A73C();
            var_s0 = func_8041B87C(*(s32 *)(D_800E54A4+4), temp_s1)->next;
loop_11:
            if (func_8040EC50(var_s0) != 0) {
                var_s0 = var_s0->next;
                goto loop_11;
            }
            func_8041B95C((*(s32 *)((char *)D_800E54A4 + 0x4)), temp_s1, var_s0);
            func_8025DF54(0xE74);
            return 0;
        }
        return 0;
    case 22:
        if (arg3 == 1) {
            var_s0_2 = func_8041B87C(*(s32 *)(D_800E54A4+4), temp_s1)->next;
loop_16:
            if (func_8040EC50(var_s0_2) != 0) {
                var_s0_2 = var_s0_2->next;
                goto loop_16;
            }
            func_8041B95C((*(s32 *)((char *)D_800E54A4 + 0x4)), temp_s1, var_s0_2);
            func_80433DA8(temp_s1);
        }
        goto block_24;
    case 27:
        if (arg3 == 1) {
            var_s0_3 = func_8041B87C(*(s32 *)(D_800E54A4+4), temp_s1)->next;
loop_21:
            if (func_8040EC50(var_s0_3) != 0) {
                var_s0_3 = var_s0_3->next;
                goto loop_21;
            }
            func_8041B95C((*(s32 *)((char *)D_800E54A4 + 0x4)), temp_s1, var_s0_3);
            func_80433F14(temp_s1);
        }
block_24:
        func_8029A73C();
        break;
    }
    return 0;
}
