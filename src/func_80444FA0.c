/* Edits a byte, integer, or float option and propagates it to the active resource records. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct State {char p[20];s32 *unk14;char q[4];struct State *unk1C;s32 unk20;char r[52];s32 unk58;char a[1408];struct State *unk5DC;} State; typedef struct {s32 unk0,unk4;} Header;
s32 func_8026437C(s32);                             /* extern */
s32 func_8028B2D4(char *, s32);                        /* extern */
void *func_8028FD94(s32, s32);                        /* extern */
void func_802C2410(s32, char *, s32);                     /* extern */
s32 func_80442158(void *);                          /* extern */
s32 func_804424F4(void *, void *, s32);               /* extern */
s32 func_8044252C(void *, s32, s32, s32, s32, s32);     /* extern */
extern char D_800E27D0;
extern s32 D_800E63AC;
extern char D_8011FE88;
extern s32 D_8011FEF4;

typedef struct func_80444FA0_S1 func_80444FA0_S1;
struct func_80444FA0_S1 {
    char pad0[0x8];
    Header unk8;
};

s32 func_80444FA0(State *arg0, State *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7) {
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0_2;
    s32 var_v1;
    s32 length;
    u8 *temp_s0;
    s32 var_s1;
    State *temp_a1;
    State *temp_v0;
    Header *temp_v0_2;
    char *var_a0;

    var_s1 = 0;
    if (func_8026437C(arg1->unk20) != 0) {
        return func_804424F4(arg0, arg1, arg2);
    }
    temp_v0 = arg1->unk1C;
    if (temp_v0 != NULL) {
        temp_a1 = temp_v0->unk5DC;
        if (temp_a1 != NULL) {
            temp_a1_2 = temp_a1->unk58;
            if (temp_a1_2 != 0) {
                temp_s0 = func_8028B2D4(&D_8011FE88, temp_a1_2) + arg4;
                switch (arg3) {                     /* irregular */
                case 0:
                    var_s1 = *temp_s0;
                    var_s1 = func_8044252C(arg1, var_s1, arg5, 0, arg6, 1);
                    *temp_s0 = var_s1;
                    break;
                case 1:
                    var_s1 = *(s32 *)temp_s0;
                    var_s1 = func_8044252C(arg1, var_s1, arg5, 0, arg6, arg3);
                    *(s32 *)temp_s0 = var_s1;
                    break;
                case 2:
                    var_s1 = (s32)*(f32 *)temp_s0;
                    var_v1 = arg6;
                    var_s1 = func_8044252C(arg1, var_s1, arg5, 0, var_v1, 1);
                    *(f32 *)temp_s0 = var_s1;
                    break;
                }
                temp_s0_2 = *arg0->unk14;
                length=func_80442158(arg0);
                length-=6;
                func_802C2410(temp_s0_2 + length, &D_800E27D0, (s32) ((f32) var_s1 / arg7));
                if (D_800E63AC != 0) {
                    temp_v0_2 = func_8028FD94(D_8011FEF4, 0);
                    var_v1 = 0;
                    temp_a1_3 = temp_v0_2->unk4;
                    temp_v0_2=&((func_80444FA0_S1 *)(temp_v0_2))->unk8;
                    if (temp_a1_3 > 0) {
                        do {
                            var_a0 = (char *)temp_v0_2 + var_v1 * 100;
                            temp_s0 = var_a0 + arg4;
                            switch(arg3) {
                            case 0: *temp_s0=var_s1;break;
                            case 1: *(s32 *)temp_s0=var_s1;break;
                            case 2: *(f32 *)temp_s0=var_s1;break;
                            }
                            var_v1 += 1;
                        } while (var_v1 < temp_a1_3);
                    }
                }
            }
        }
    }
    return 0;
}
