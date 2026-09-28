#include "basetypes.h"

extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);
extern void func_802537D8(s32 arg0, s32 arg1);

void func_8028D578(void *arg0) {
    s32 *list;
    s32 val;

    if (*(s32 *) ((char *) arg0 + 0xF8) != 0) {
        list = (s32 *) func_8028FD94(*(void **) ((char *) arg0 + 0x88), 0);
        if (*list != 0) {
            do {
                val = *list;
                list += 1;
                func_802536F4(0, val);
            } while (*list != 0);
        }
        func_802537D8(0, *(s32 *) ((char *) arg0 + 0xF8));
        *(s32 *) ((char *) arg0 + 0xF8) = 0;
        *(void **) ((char *) arg0 + 0x88) = 0;
    }
}
