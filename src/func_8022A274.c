#include "basetypes.h"

extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern s32 func_802458F8(void);
extern void func_8021C9B4(void *arg0, void *arg1);

typedef struct func_8022A274_S1 func_8022A274_S1;
typedef struct func_8022A274_S2 func_8022A274_S2;
typedef struct func_8022A274_S3 func_8022A274_S3;
struct func_8022A274_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A274_S2 {
    char pad0[0x5DC];
    void* unk5DC;
    char pad5DC[0x16E0 - 0x5DC - sizeof(void*)];
    void* unk16E0;
};
struct func_8022A274_S3 {
    char pad0[0x24];
    s32 unk24;
};

void func_8022A274(void *arg0, void *arg1) {
    void *cur;

    func_8026D980();
    cur = ((func_8022A274_S1 *)(arg0))->unk20;
    if (cur != 0) {
        do {
            if (((func_8022A274_S2 *)(cur))->unk5DC != arg1 ||
                ((func_8022A274_S3 *)(arg1))->unk24 == 1 ||
                func_802458F8() != 0) {
                func_8021C9B4(cur, arg1);
            }
            cur = ((func_8022A274_S2 *)(cur))->unk16E0;
        } while (cur != 0);
    }
    func_8026D9D0();
}
