#include "basetypes.h"

extern s32 func_80284408(void *arg0);
extern void *func_8025CC8C(void);
extern void *func_8025C97C(void *, s32, void *, void *, s32);

typedef struct func_8028438C_S1 func_8028438C_S1;
typedef struct func_8028438C_S2 func_8028438C_S2;
struct func_8028438C_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x1DC - 0x8 - sizeof(char)];
    void* unk1DC;
};
struct func_8028438C_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
};

void func_8028438C(void *arg0, s32 arg1) {
    void *node;

    node = ((func_8028438C_S1 *)(arg0))->unk1DC;
    if (node != 0) {
        if (((func_8028438C_S2 *)(node))->unkC == arg1 && ((func_8028438C_S2 *)(node))->unk8 != -1) {
            return;
        }
        func_80284408(arg0);
    }
    ((func_8028438C_S1 *)(arg0))->unk1DC =
        func_8025C97C(func_8025CC8C(), arg1, &((func_8028438C_S1 *)(arg0))->unk8, &((func_8028438C_S1 *)(arg0))->unk8, -1);
}
