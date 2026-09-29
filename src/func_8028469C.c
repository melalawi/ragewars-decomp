#include "basetypes.h"

typedef struct func_8028469C_S1 func_8028469C_S1;
typedef struct func_8028469C_S2 func_8028469C_S2;
typedef struct func_8028469C_S3 func_8028469C_S3;
typedef struct func_8028469C_S4 func_8028469C_S4;
struct func_8028469C_S1 {
    char pad0[0xFC28];
    char unkFC28;
};
struct func_8028469C_S2 {
    char pad0[0x38];
    void* unk38;
};
struct func_8028469C_S3 {
    char pad0[0x8];
    s8 unk8;
};
struct func_8028469C_S4 {
    char pad0[0x118];
    void* unk118;
    char pad118[0x124 - 0x118 - sizeof(void*)];
    s32 unk124;
    char pad124[0x1EC - 0x124 - sizeof(s32)];
    void* unk1EC;
};

void *func_8028469C(void *arg0, s32 arg1, void *arg2) {
    void *record;

    record = *(void **)(&((func_8028469C_S1 *)(arg0))->unkFC28 +
                        (((func_8028469C_S3 *)(((func_8028469C_S2 *)(arg2))->unk38))->unk8 * 20));
    if (arg2 != 0) {
        if (record != 0) {
            do {
                if (((func_8028469C_S4 *)(record))->unk124 == arg1) {
                    if (((func_8028469C_S4 *)(record))->unk118 == arg2) {
                        return record;
                    }
                }
                record = ((func_8028469C_S4 *)(record))->unk1EC;
            } while (record != 0);
        }
    } else if (record != 0) {
        do {
            if (((func_8028469C_S4 *)(record))->unk124 == arg1) {
                return record;
            }
            record = ((func_8028469C_S4 *)(record))->unk1EC;
        } while (record != 0);
    }
    return 0;
}
