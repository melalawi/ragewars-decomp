#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern u32 D_80103B5C;
extern Node D_80103F88;
typedef struct func_8023C6AC_S1 func_8023C6AC_S1;
typedef struct func_8023C6AC_S2 func_8023C6AC_S2;
typedef struct func_8023C6AC_S3 func_8023C6AC_S3;
struct func_8023C6AC_S1 {
    char pad0[0x6];
    u16 unk6;
};
struct func_8023C6AC_S2 {
    s32 unk0;
};
struct func_8023C6AC_S3 {
    char pad0[0xC];
    s32 unkC;
};

typedef struct { func_8023C6AC_S3 * unk0; } func_8023C6AC_G1;
extern func_8023C6AC_S3 *D_80103E20;
extern s32 D_8010324C[];

void func_8023C6AC(void) {
    u32 var_a2;
    u32 var_a3;
    s32 var_a1;
    char *var_a0;
    u32 temp_v1;
    Node *var_v1;
    s32 var_a0_2;
    u16 temp_v0;
    s32 *out;
    volatile s32 *ordered;

    var_a2 = 0;
    var_a3 = 0x80000000;
    var_a1 = 0;
    var_a0 = (char *)&D_80103B5C;
    do {
        temp_v1 = *(u32 *)var_a0;
        if (var_a2 < temp_v1) {
            var_a2 = temp_v1;
        }
        if (temp_v1 < var_a3) {
            var_a3 = temp_v1;
        }
        *(u32 *)var_a0 = temp_v1 + 1;
        var_a1 += 1;
        var_a0 += 0x10;
    } while (var_a1 < 0x18);

    var_v1 = &D_80103F88;
    var_a0_2 = 0;
    if (&D_80103F88 != 0) {
        do {
            temp_v0 = ((func_8023C6AC_S1 *)(var_v1))->unk6;
            var_v1 = var_v1->next;
            var_a0_2 += temp_v0 << 0xC;
        } while (var_v1 != 0);
    }

    out = D_8010324C;
    ordered = out;
    ordered[0] = var_a0_2;
    ordered[-3] = var_a2;
    ordered[-2] = var_a3;
    out[-1] = D_80103E20->unkC;
}
