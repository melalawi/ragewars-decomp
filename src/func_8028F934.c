#include "basetypes.h"

typedef struct func_8028F934_S1 func_8028F934_S1;
typedef struct func_8028F934_S2 func_8028F934_S2;
typedef struct func_8028F934_S3 func_8028F934_S3;
struct func_8028F934_S1 {
    void* unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    s32 unk10;
};
struct func_8028F934_S2 {
    char pad0[0x2E4];
    void* unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(void*)];
    void* unk2E8;
    char pad2E8[0x2EC - 0x2E8 - sizeof(void*)];
    void* unk2EC;
    char pad2EC[0x2F0 - 0x2EC - sizeof(void*)];
    void* unk2F0;
    char pad2F0[0x300 - 0x2F0 - sizeof(void*)];
    s32 unk300;
};
struct func_8028F934_S3 {
    void* unk0;
};

void func_8028F934(void *arg0, void *arg1) {
    void *temp_v0;

    if ((((func_8028F934_S1 *)(arg1))->unk10) == 2) {
        temp_v0 = ((func_8028F934_S2 *)(arg0))->unk2EC;
        if (temp_v0 != 0) {
            ((func_8028F934_S3 *)(temp_v0))->unk0 = arg1;
        } else {
            ((func_8028F934_S2 *)(arg0))->unk2E4 = arg1;
        }
        ((func_8028F934_S2 *)(arg0))->unk2EC = arg1;
        ((func_8028F934_S2 *)(arg0))->unk300 = 1;
    } else {
        temp_v0 = ((func_8028F934_S2 *)(arg0))->unk2F0;
        if (temp_v0 != 0) {
            ((func_8028F934_S3 *)(temp_v0))->unk0 = arg1;
        } else {
            ((func_8028F934_S2 *)(arg0))->unk2E8 = arg1;
        }
        ((func_8028F934_S2 *)(arg0))->unk2F0 = arg1;
    }
    ((func_8028F934_S1 *)(arg1))->unk0 = 0;
    ((func_8028F934_S1 *)(arg1))->unk4 = (((func_8028F934_S1 *)(arg1))->unk8) & 3;
}
