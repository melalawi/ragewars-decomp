#include "span_1000/code_802301E4.h"
#include "span_C76B0/data.h"
#include "types.h"
#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))



extern s32 func_8022AB20_de(void *arg0, s16 arg1);
extern s32 func_80214178_de(void *, void *, s32);

void func_80230B04_de(void *arg0, void *arg1) {
    s16 temp_a1;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x1D8);
    if (!(M2C_FIELD(temp_a0, s32 *, 0x6AC) & 0x2000)) {
        temp_a1 = M2C_FIELD(temp_a0, s16 *, 0x62E);
        if (temp_a1 != 0) {
            if (temp_a1 == 2) {
                temp_v1 = M2C_FIELD(arg1, s32 *, 0x13C);
                if (temp_v1 == 1) {
                    func_80214178_de(arg0, arg1, 5);
                } else if (temp_v1 == temp_a1) {
                    func_80214178_de(arg0, arg1, 9);
                } else {
                    goto check_height;
                }
            } else {
                goto check_state;
            }
        } else {
check_height:
            if (!(M2C_FIELD(arg1, f32 *, 0x40) > D_800C2F14_de)) {
                func_80214178_de(arg0, arg1, 9);
            } else {
                func_80214178_de(arg0, arg1, 5);
            }
        }
        goto done;
check_state:
        if (func_8022AB20_de(temp_a0, temp_a1) == 1) {
            func_80214178_de(arg0, arg1, 7);
        } else {
            func_80214178_de(arg0, arg1, 5);
        }
done:
        ;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E44_4 = 30.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8004_4 = 30.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C31C4_4 = 30.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3204_4 = 30.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F14_4 = 30.0f;
#endif
