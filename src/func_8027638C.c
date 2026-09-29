#include "basetypes.h"

typedef struct func_8027638C_S1 func_8027638C_S1;
typedef union func_8027638C_S1_U10 { void* v0; u16* v1; } func_8027638C_S1_U10;
typedef union func_8027638C_S1_U14 { void* v0; u16* v1; } func_8027638C_S1_U14;
typedef union func_8027638C_S1_U18 { void* v0; u16* v1; } func_8027638C_S1_U18;
struct func_8027638C_S1 {
    char pad0[0x4];
    char* unk4;
    char pad4[0x8 - 0x4 - sizeof(char*)];
    char* unk8;
    char pad8[0xC - 0x8 - sizeof(char*)];
    char* unkC;
    char padC[0x10 - 0xC - sizeof(char*)];
    func_8027638C_S1_U10 unk10;
    char pad10[0x14 - 0x10 - sizeof(func_8027638C_S1_U10)];
    func_8027638C_S1_U14 unk14;
    char pad14[0x18 - 0x14 - sizeof(func_8027638C_S1_U14)];
    func_8027638C_S1_U18 unk18;
};

f32 func_8027638C(u16 *arg0, f32 arg1, u16 arg2) {
    u16 *node = arg0;
    u16 id = arg2;

    if (*node == id) {
        if (*(f32 *)(((func_8027638C_S1 *)(node))->unk4 + 4) != arg1 ||
            *(f32 *)(((func_8027638C_S1 *)(node))->unk8 + 4) != arg1 ||
            *(f32 *)(((func_8027638C_S1 *)(node))->unkC + 4) != arg1) {
            *(f32 *)(((func_8027638C_S1 *)(node))->unk4 + 4) = arg1;
            *(f32 *)(((func_8027638C_S1 *)(node))->unk8 + 4) = arg1;
            *(f32 *)(((func_8027638C_S1 *)(node))->unkC + 4) = arg1;

            if (((func_8027638C_S1 *)(node))->unk10.v0 != 0) {
                func_8027638C(((func_8027638C_S1 *)(node))->unk10.v1, arg1, id);
            }
            if (((func_8027638C_S1 *)(node))->unk14.v0 != 0) {
                func_8027638C(((func_8027638C_S1 *)(node))->unk14.v1, arg1, id);
            }
            if (((func_8027638C_S1 *)(node))->unk18.v0 != 0) {
                func_8027638C(((func_8027638C_S1 *)(node))->unk18.v1, arg1, id);
            }
        }
    }
}
