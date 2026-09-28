/* Refreshes every instance owned by the holder and clears their pending flag. */
#include "basetypes.h"
typedef struct Flags { s32 a, unk4; } Flags;
typedef struct Node {
    char p0[8];
    s32 unk8;
    char p1[8];
    s32 unk14;
    Flags *unk18;
    char p2[4];
    struct Node *unk20;
    char p3[0x2D8];
    s32 unk2FC;
    char p4[0x2DC];
    s32 unk5DC;
    char p5[0x1100];
    struct Node *unk16E0;
} Node;
extern s32 D_8011FE88;
void func_80220A5C(Node *, Node *);                 /* extern */
void func_80245854(s32);                            /* extern */
s32 func_80264B8C(void);                            /* extern */
void func_80264B9C(void);                           /* extern */
void func_80264BAC(void);                           /* extern */
s32 func_802866F8(s32 *, s32 *);                    /* extern */
s32 func_802934DC(void);                            /* extern */
void func_80449E38(Node *);                         /* extern */

void func_8044AA68(Node *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    Flags *temp_v1;
    Flags *temp_v1_2;
    Node *var_s0;

    if ((func_802934DC() != 0) && (func_80264B8C() != 0)) {
        func_80264BAC();
        func_80264B9C();
    }
    var_s0 = arg0->unk20;
    if (var_s0 != 0) {
        do {
            func_80449E38(var_s0);
            temp_v0 = func_802866F8(&D_8011FE88, &var_s0->unk8);
            var_s0->unk2FC = temp_v0;
            var_s0->unk14 = temp_v0;
            func_80220A5C(var_s0, var_s0);
            temp_a0 = var_s0->unk5DC;
            if (temp_a0 != 0) {
                func_80245854(temp_a0);
            }
            temp_v1 = var_s0->unk18;
            temp_v1->unk4 = temp_v1->unk4 & ~4;
            temp_v1_2 = var_s0->unk18;
            temp_v1_2->unk4 = temp_v1_2->unk4 & ~4;
            var_s0 = var_s0->unk16E0;
        } while (var_s0 != 0);
    }
}
