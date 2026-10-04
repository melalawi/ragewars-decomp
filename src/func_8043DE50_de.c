#include "common/types.h"
#include "span_16E000/code_8043D904.h"
#include "types.h"














/* note: Clears eight status bytes and selects the first available profile. */
void func_8025E384_de(void);
unsigned int func_8026437C_de(void *);
extern s32 D_8010B328;
extern s32 D_80142242;
extern struct Shared_func_8043DEDC_S1 D_80142622[];










void func_8043DE50_de(func_80250BD4_S1 *arg0) {
    Shared_func_8043DEDC_S3 *settings;
    s8 *status;
    s32 *profile;
    s32 on;
    s32 i;

    i = 7;
    status = (s8 *)&D_80142622[0];
    for (; i >= 0; i--) {
        ((Shared_func_8043DEDC_S1 *)status)->unk148 = 0;
        status -= 0x96;
    }
    i = 0;
    settings = (Shared_func_8043DEDC_S3 *)&D_80142242;
    /* FAKEMATCH: constant-holding local places li across the callback. */
    on = 1;
    for (profile = &D_8010B328; i < 4; i++, profile = &((Shared_func_8043DEDC_S2 *)profile)->unk224) {
        if (func_8026437C_de(profile) != 0) {
            settings->unk78 = on;
            settings->unk7F = i;
            arg0->unk20 = profile;
            break;
        }
    }
    func_8025E384_de();
}
