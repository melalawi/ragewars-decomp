#include "basetypes.h"

extern void func_8021CBAC(void *arg0, void *arg1);
extern s32 D_800CE47C;

#if defined(VERSION_US_REV1)
extern s32 D_800D0EBC;
#endif

typedef struct func_8022A2FC_S1 func_8022A2FC_S1;
typedef struct func_8022A2FC_S2 func_8022A2FC_S2;
typedef struct func_8022A2FC_S3 func_8022A2FC_S3;
struct func_8022A2FC_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A2FC_S2 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x5DC - 0xE4 - sizeof(u16)];
    void* unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(void*)];
    void* unk16E0;
};
struct func_8022A2FC_S3 {
    char pad0[0x24];
    s32 unk24;
};

/* Removes entity from list if owned by specific owner, with version-specific check. */
void func_8022A2FC(void *arg0, void *arg1) {
    void *var_s0;

#if defined(VERSION_US_REV1)
    if (D_800D0EBC != 0) {
        var_s0 = ((func_8022A2FC_S1 *)(arg0))->unk20;
        if (var_s0 != 0) {
            do {
                if (((func_8022A2FC_S2 *)(var_s0))->unk5DC == arg1 &&
                    ((func_8022A2FC_S3 *)(arg1))->unk24 == 0 &&
                    ((func_8022A2FC_S2 *)(var_s0))->unkE4 != D_800CE47C) {
                    func_8021CBAC(var_s0, arg1);
                }
                var_s0 = ((func_8022A2FC_S2 *)(var_s0))->unk16E0;
            } while (var_s0 != 0);
        }
    }
#else
    var_s0 = ((func_8022A2FC_S1 *)(arg0))->unk20;
    if (var_s0 != 0) {
        do {
            if (((func_8022A2FC_S2 *)(var_s0))->unk5DC == arg1 &&
                ((func_8022A2FC_S3 *)(arg1))->unk24 == 0 &&
                ((func_8022A2FC_S2 *)(var_s0))->unkE4 != D_800CE47C) {
                func_8021CBAC(var_s0, arg1);
            }
            var_s0 = ((func_8022A2FC_S2 *)(var_s0))->unk16E0;
        } while (var_s0 != 0);
    }
#endif
}
