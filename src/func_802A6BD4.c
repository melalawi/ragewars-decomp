/* Reuses a pooled object and initializes its position and scaled rotation matrix once. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {f32 x,y,z;} Vec;
typedef struct {f32 v[16];} Matrix;
extern s32 D_800D2E58;
typedef struct { char pad[0x95A8]; void *free; } Pool;
void func_80255CB4(void *,void *); void func_80255E78(void *,void *);
void func_80271888(Vec *,Vec *); void func_802742B4(Vec *,Matrix *);
void func_80273860(Matrix *,f32); void func_802720EC(Vec *);
void func_8027200C(Vec *,Vec *,f32); void func_80271FA4(Vec *,Vec *,Vec *);
void func_802734B8(Matrix *,Vec); void func_802734EC(Matrix *,f32,f32,f32);
void func_802702EC(Matrix *,void *);
void *func_802A6BD4(Pool *arg0, Vec arg1, Vec arg4, s32 arg7, s32 arg8) {
    Matrix sp10;
    Vec sp50;
    void **temp_s0;
    void **var_a0;
    void *var_s1;
    void *var_v0;

    func_80271888(&sp50, &arg4);
    var_v0 = NULL;
    if (D_800D2E58 == 0) {
        D_800D2E58 = 1;
        var_s1 = arg0->free;
        temp_s0 = (void *)arg0 + ((arg7 * 0x14) + 0x94E0);
        if (var_s1 != NULL) {
            var_a0 = &arg0->free;
            func_80255E78(var_a0, var_s1);
            goto moved;
            goto block_4;
        }
        var_s1 = *temp_s0;
        var_a0 = temp_s0;
        if (var_s1 != NULL) {
block_4:
            func_80255E78(var_a0, var_s1);
            moved:
            func_80255CB4(temp_s0, var_s1);
            if (var_s1 != NULL) {
                (*(s32 *)(var_s1+0x48)) = arg8;
                func_802742B4(&sp50, &sp10);
                func_80273860(&sp10, 1.5707965f);
                func_802720EC(&arg4);
                func_8027200C(&arg4, &arg4, 2.048f);
                func_80271FA4(&arg1, &arg1, &arg4);
                func_802734B8(&sp10, arg1);
                func_802734EC(&sp10, 6.144f, 1.0f, 6.144f);
                func_802702EC(&sp10, var_s1 + 8);
            }
        }
        return var_s1;
    }
    return var_v0;
}
