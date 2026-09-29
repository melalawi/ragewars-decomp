#include "basetypes.h"

extern s32 func_80274544(void);
extern s32 func_80232AAC(void *arg0);

typedef struct func_802100E0_S1 func_802100E0_S1;
typedef struct func_802100E0_S2 func_802100E0_S2;
struct func_802100E0_S1 {
    char pad0[0x62E];
    s16 unk62E;
    char pad62E[0x770 - 0x62E - sizeof(s16)];
    s16 unk770;
};
struct func_802100E0_S2 {
    char pad0[0x2E4];
    s32 unk2E4;
};

void func_802100E0(void *arg0) {
    s32 temp_v0;

    if ((func_80274544() % 100) < 0x15) {
        do {
            temp_v0 = func_80232AAC(*(void **)arg0);
        } while (temp_v0 >= 0x10);
        ((func_802100E0_S1 *)(*(void **)arg0))->unk770 = temp_v0;
        if (temp_v0 != ((func_802100E0_S1 *)(*(void **)arg0))->unk62E) {
            ((func_802100E0_S2 *)(arg0))->unk2E4 = 0;
        }
    }
}
