#include "basetypes.h"

extern s32 func_8024D150(void *arg0);

typedef struct func_8022A1D0_S1 func_8022A1D0_S1;
typedef struct func_8022A1D0_S2 func_8022A1D0_S2;
typedef struct func_8022A1D0_S3 func_8022A1D0_S3;
typedef struct func_8022A1D0_S4 func_8022A1D0_S4;
struct func_8022A1D0_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A1D0_S2 {
    char pad0[0x70];
    s32 unk70;
    char pad70[0x358 - 0x70 - sizeof(s32)];
    s32 unk358;
    char pad358[0x16E0 - 0x358 - sizeof(s32)];
    void* unk16E0;
};
struct func_8022A1D0_S3 {
    char pad0[0x944];
    s32 unk944;
};
typedef struct func_8022A1D0_S5 { char pad0[0xB48]; s32 unkB48; } func_8022A1D0_S5;
struct func_8022A1D0_S4 {
    char pad0[0x144];
    void* unk144;
};

void func_8022A1D0(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = ((func_8022A1D0_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            ((func_8022A1D0_S2 *)(node))->unk70 = 0;
            ((func_8022A1D0_S2 *)(node))->unk358 = 0;
            if (func_8024D150(node) != 0) {
                if (node) {
                    count1 = ((func_8022A1D0_S3 *)(arg1))->unk944;
                } else {
                    count1 = ((func_8022A1D0_S3 *)(arg1))->unk944;
                }
                if (count1 != 0x200) {
                    scale = 4;
                    ((func_8022A1D0_S4 *)(((s32)arg1 + count1 * scale)))->unk144 = node;
                    ((func_8022A1D0_S3 *)(arg1))->unk944 = count1 + 1;
                }
                count1 = 0xB48;
                count2 = ((func_8022A1D0_S5 *)arg1)->unkB48;
                if (count2 != 0x80) {
                    *(void **)((entry = (char *)((s32)arg1 + count2 * 4)) + 0x948) = node;
                    ((func_8022A1D0_S5 *)arg1)->unkB48 = count2 + 1;
                }
            }
            node = ((func_8022A1D0_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}
