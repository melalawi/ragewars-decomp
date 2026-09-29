#include "basetypes.h"

typedef struct func_8029F36C_S1 func_8029F36C_S1;
typedef struct func_8029F36C_S2 func_8029F36C_S2;
struct func_8029F36C_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_8029F36C_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

/** Scale a 3-vector (arg1) by a scalar (arg2), store into arg0. */
void func_8029F36C(void *arg0, void *arg1, f32 arg2) {
    ((func_8029F36C_S1 *)(arg0))->unk0 = ((func_8029F36C_S2 *)(arg1))->unk0 * arg2;
    ((func_8029F36C_S1 *)(arg0))->unk4 = ((func_8029F36C_S2 *)(arg1))->unk4 * arg2;
    ((func_8029F36C_S1 *)(arg0))->unk8 = ((func_8029F36C_S2 *)(arg1))->unk8 * arg2;
}
