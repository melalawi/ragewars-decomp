#include "basetypes.h"

typedef struct Record14 {
    s32 id;
    s32 value4;
    s32 value8;
    s32 unkC;
    s32 unk10;
} Record14;

extern void func_80278F70(Record14 *arg0);

typedef struct func_8028C490_S1 func_8028C490_S1;
typedef struct func_8028C490_S2 func_8028C490_S2;
typedef struct func_8028C490_S3 func_8028C490_S3;
struct func_8028C490_S1 {
    char pad0[0x11C0];
    s32 unk11C0;
    char pad11C0[0x11C4 - 0x11C0 - sizeof(s32)];
    s32 unk11C4;
    char pad11C4[0x11D0 - 0x11C4 - sizeof(s32)];
    Record14* unk11D0;
    char pad11D0[0x11D4 - 0x11D0 - sizeof(Record14*)];
    Record14* unk11D4;
};
struct func_8028C490_S2 {
    char pad0[0xF];
    u8 unkF;
};
struct func_8028C490_S3 {
    char pad0[0xF];
    u8 unkF;
};

void func_8028C490(void *arg0, s32 arg1) {
    Record14 *var_s1;
    Record14 *var_s1_2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = ((func_8028C490_S1 *)(arg0))->unk11C0;
    var_s1 = ((func_8028C490_S1 *)(arg0))->unk11D0;
    var_s0 -= 1;
    if (var_s0 != -1) {
        do {
            if (((func_8028C490_S2 *)(var_s1))->unkF == arg1) {
                func_80278F70(var_s1);
            }
            var_s0 -= 1;
            var_s1 += 1;
        } while (var_s0 != -1);
    }

    var_s0_2 = ((func_8028C490_S1 *)(arg0))->unk11C4;
    var_s1_2 = ((func_8028C490_S1 *)(arg0))->unk11D4;
    var_s0_2 -= 1;
    if (var_s0_2 != -1) {
        do {
            if (((func_8028C490_S3 *)(var_s1_2))->unkF == arg1) {
                func_80278F70(var_s1_2);
            }
            var_s0_2 -= 1;
            var_s1_2 += 1;
        } while (var_s0_2 != -1);
    }
}
