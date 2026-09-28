/* Hands out the next queued node for each requested channel, retrying while a channel is still unfilled. */
#include "basetypes.h"
#define NULL 0
typedef struct Node { struct Node *unk0; s32 unk4, unk8, unkC; } Node;
typedef struct { char p0[0x2E4]; Node *unk2E4; Node *unk2E8; s32 unk2EC, unk2F0; char p1[0xC]; s32 unk300; } Ctx;
extern s32 func_802BF400(void);
extern s32 D_80146CF0;
extern s32 D_80146CF8;

s32 func_8028F524(Ctx *arg0, Node **arg1, Node **arg2, s32 arg3) {
    Node *temp_s0;
    Node *temp_v1_0;
    Node *temp_v0;
    Node *var_v1;
    s32 temp_s5;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s1;

    var_s1 = arg3;
    temp_s0 = arg0->unk2E8;
    temp_v1_0 = arg0->unk2E4;
    temp_s5 = var_s1;
    if ((arg0->unk300 != 0) && (var_s1 & 2)) {
        if ((temp_s0 == NULL) || !(temp_s0->unk8 & 0x10)) {
            *arg1 = temp_v1_0;
            arg0->unk300 = 0;
            temp_v0 = arg0->unk2E4->unk0;
            var_s1 &= ~2;
            arg0->unk2E4 = temp_v0;
            if (temp_v0 == NULL) {
                arg0->unk2EC = 0;
            }
        } else {
            *arg1 = temp_s0;
            var_s1 &= ~2;
        }
    } else {
        if (temp_s0 == NULL) {
            var_v1 = NULL;
        } else if (temp_s0->unkC == D_80146CF8) {
            var_v1 = NULL;
        } else if (temp_s0->unkC == func_802BF400()) {
            var_v1 = NULL;
        } else if (temp_s0->unkC == D_80146CF0) {
            var_v1 = NULL;
        } else {
            var_v1 = temp_s0;
        }
        if (var_v1 != NULL) {
            temp_v0_2 = temp_s0->unk8 & 7;
            switch (temp_v0_2) {
            case 1:
            case 4:
            case 5:
                break;
            case 3:
                if (temp_s0->unk4 & 0x20) {
                    if (var_s1 & 2) {
                        *arg1 = temp_s0;
                        var_s1 &= ~2;
                        if (temp_s0->unk4 & 1) {
                            *arg2 = temp_s0;
                            var_s1 &= ~1;
                        }
                        arg0->unk2E8 = arg0->unk2E8->unk0;
                        if (arg0->unk2E8 == NULL) {
                            arg0->unk2F0 = 0;
                        }
                    }
                } else if (var_s1 == 3) {
                    *arg2 = temp_s0;
                    *arg1 = temp_s0;
                    arg0->unk2E8 = arg0->unk2E8->unk0;
                    var_s1 = 0;
                    if (arg0->unk2E8 == NULL) {
                        arg0->unk2F0 = 0;
                    }
                }
                break;
            case 2:
            case 6:
            case 7:
                temp_v1 = temp_s0->unk4;
                if (temp_v1 & 2) {
                    if (var_s1 & 2) {
                        *arg1 = temp_s0;
                        var_s1 &= ~2;
                    }
                } else if ((temp_v1 & 1) && (var_s1 & 1)) {
                    *arg2 = temp_s0;
                    arg0->unk2E8 = arg0->unk2E8->unk0;
                    var_s1 &= ~1;
                    if (arg0->unk2E8 == NULL) {
                        arg0->unk2F0 = 0;
                    }
                }
                break;
            }
        }
    }
    if (var_s1 != temp_s5) {
        var_s1 = func_8028F524(arg0, arg1, arg2, var_s1);
    }
    return var_s1;
}
