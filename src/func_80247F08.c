#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern s32 *func_8024BFC4(char *arg0, s8 arg1);
extern s32 *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 *arg1);
extern void func_80271FD8(Vector3 *out, Vector3 *a, Vector3 *b);
extern void func_80272088(Vector3 *out, Vector3 *a, Vector3 *b);
extern void func_802720EC(Vector3 *arg0);
extern void func_8027200C(Vector3 *out, Vector3 *in, f32 scale);

void func_80247F08(char *arg0, char *arg1, char *arg2, Vector3 arg3,
                   Vector3 arg6, s32 arg9) {
    Vector3 sp10;
    Vector3 sp20;
    Vector3 sp30;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 var_a0;
    s32 var_v1;
    char *var_a1;

    if (arg1[0x34] != 0x3C) {
      if (arg1[0x12] < 0x17) {
       temp_v0 = func_8024BFC4(arg0, arg0[1]);
       if (temp_v0 != 0) {
        temp_v0_2 = func_8028FD94((void *)*temp_v0, 5);
        var_a1 = (char *)temp_v0_2 + ((arg9 * *temp_v0_2) + 8);
        var_a0 = arg9;
        if ((((u8 *)var_a1)[0x65] & 3) == 3) {
            func_802536F4(0, temp_v0);
            return;
        }
        var_v1 = 0;
        do {
            *(arg1 + var_v1 + 0x14) = var_a0;
            var_a0 = var_a1[0x64];
            var_v1++;
            if (var_a0 != -1) {
                var_a1 = (char *)temp_v0_2 + ((var_a0 * *temp_v0_2) + 8);
            }
        } while (var_v1 < 4);
        func_802536F4(0, temp_v0);
        arg1[0x12] = 0x19;
        sp20.x = *(f32 *)(arg2 + 0x30);
        sp20.y = *(f32 *)(arg2 + 0x34);
        sp20.z = *(f32 *)(arg2 + 0x38);
        func_80271FD8(&arg3, &arg3, &sp20);
        func_80272088(&sp10, &arg3, &arg6);
        func_802720EC(&sp10);
        func_802720EC(&arg3);
        func_802720EC(&arg6);
        func_80272088(&sp30, &sp10, &arg3);
        func_8027200C(&sp10, &sp10,
                      (sp30.x * arg6.x) + (sp30.y * arg6.y) +
                          (sp30.z * arg6.z));
        func_802720EC(&sp10);
        *(Vector3 *)(arg1 + 0x18) = sp10;
       }
      }
    }
}
