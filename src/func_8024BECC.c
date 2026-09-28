#include "basetypes.h"

extern float D_800C8C48;
extern f32 func_802BC380(f32);

void func_8024BECC(void *arg0) {
    float temp_f12 = *(float *)((char *)arg0 + 0x50);
    float temp_f1 = *(float *)((char *)arg0 + 0x54);
    float temp_f0 = *(float *)((char *)arg0 + 0x58);
    func_802BC380(((temp_f12 * temp_f12) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0)) * D_800C8C48);
}
