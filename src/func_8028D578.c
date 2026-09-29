#include "basetypes.h"

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);
extern void func_802537D8(s32 arg0, s32 arg1);

typedef struct func_8028D578_S1 func_8028D578_S1;
struct func_8028D578_S1 {
    char pad0[0x88];
    void* unk88;
    char pad88[0xF8 - 0x88 - sizeof(void*)];
    s32 unkF8;
};

void func_8028D578(void *arg0) {
    s32 *list;
    s32 val;

    if (((func_8028D578_S1 *)(arg0))->unkF8 != 0) {
        list = (s32 *) func_8028FD94(((func_8028D578_S1 *)(arg0))->unk88, 0);
        if (*list != 0) {
            do {
                val = *list;
                list += 1;
                func_802536F4(0, val);
            } while (*list != 0);
        }
        func_802537D8(0, ((func_8028D578_S1 *)(arg0))->unkF8);
        ((func_8028D578_S1 *)(arg0))->unkF8 = 0;
        ((func_8028D578_S1 *)(arg0))->unk88 = 0;
    }
}
