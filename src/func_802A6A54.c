#include "basetypes.h"

extern char D_800D15E0[];
extern char D_800D15F0[];

void func_802A6A54(void *arg0) {
    if (*(f32 *)((char *)arg0 + 0x24) != 0.0f) {
        *(f32 *)(D_800D15E0 + 4) = *(f32 *)((char *)arg0 + 0x34);
        *(f32 *)(D_800D15E0 + 8) = *(f32 *)((char *)arg0 + 0x38);
        *(f32 *)(D_800D15E0 + 0xC) = *(f32 *)((char *)arg0 + 0x3C);
    } else {
        *(f32 *)(D_800D15E0 + 4) = 0.0f;
        *(f32 *)(D_800D15E0 + 8) = 0.0f;
        *(f32 *)(D_800D15E0 + 0xC) = 0.0f;
    }
    *(f32 *)(D_800D15F0 + 0) = *(f32 *)((char *)arg0 + 0x24);
    *(f32 *)(D_800D15F0 + 4) = *(f32 *)((char *)arg0 + 0x14);
}
