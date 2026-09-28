#include "basetypes.h"

extern s32 func_80274544(void);
extern s32 func_80232AAC(void *arg0);

void func_802100E0(void *arg0) {
    s32 temp_v0;

    if ((func_80274544() % 100) < 0x15) {
        do {
            temp_v0 = func_80232AAC(*(void **)arg0);
        } while (temp_v0 >= 0x10);
        *(s16 *)((char *)*(void **)arg0 + 0x770) = temp_v0;
        if (temp_v0 != *(s16 *)((char *)*(void **)arg0 + 0x62E)) {
            *(s32 *)((char *)arg0 + 0x2E4) = 0;
        }
    }
}
