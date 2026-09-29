#include "basetypes.h"

typedef struct {
    u8 pad0[0x10];
    u8 intensity;
} Light;

typedef struct {
    Light *light;
    s32 phase;
} Pulse;

extern s32 D_800E28E0;
extern Pulse *D_800E5950;

extern void func_802A3358(void);
extern f32 func_802BB630(f32);

/* Advances a sine-driven pulse phase and writes the resulting display intensity byte. */
s32 func_80439808(s32 arg0, s32 arg1, s32 arg2) {
    if (D_800E28E0 >= 2) {
        return 0;
    }
    func_802A3358();
    D_800E5950->phase += arg2;
    D_800E5950->light->intensity = (u32)(func_802BB630(D_800E5950->phase * 0.005f) * 100.0f + 150.0f);
    return 0;
}
