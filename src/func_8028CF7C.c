#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

typedef struct func_8028CF7C_S1 func_8028CF7C_S1;
typedef struct func_8028CF7C_S2 func_8028CF7C_S2;
struct func_8028CF7C_S1 {
    char pad0[0x78];
    void* unk78;
};
struct func_8028CF7C_S2 {
    char pad0[0xC];
    s16 unkC;
};

void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2) {
    void *descriptor;
    s32 count;
    s32 i;
    void *entry;

    descriptor = ((func_8028CF7C_S1 *)(arg0))->unk78;
    count = *(s32 *)descriptor;
    for (i = 0; i < count; i++) {
        entry = func_8028FD94(((func_8028CF7C_S1 *)(arg0))->unk78, i);
        if (arg1 != -1 && *(s32 *)entry != arg1) {
            continue;
        }
        if (arg2 == -1) {
            return entry;
        }
        if (((func_8028CF7C_S2 *)(entry))->unkC != arg2) {
            continue;
        }
        return entry;
    }
    return 0;
}
