#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern u32 D_80103B5C;
extern Node D_80103F88;
extern void *D_80103E20;
extern char D_8010324C;

void func_8023C6AC(void) {
    u32 var_a2;
    u32 var_a3;
    s32 var_a1;
    char *var_a0;
    u32 temp_v1;
    Node *var_v1;
    s32 var_a0_2;
    u16 temp_v0;

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
            temp_v0 = *(u16 *)((char *)var_v1 + 6);
            var_v1 = var_v1->next;
            var_a0_2 += temp_v0 << 0xC;
        } while (var_v1 != 0);
    }

    *(s32 *)((char *)&D_8010324C + 0) = var_a0_2;
    *(u32 *)((char *)&D_8010324C - 0xC) = var_a2;
    *(u32 *)((char *)&D_8010324C - 0x8) = var_a3;
    *(s32 *)((char *)&D_8010324C - 0x4) = *(s32 *)((char *)D_80103E20 + 0xC);
}
