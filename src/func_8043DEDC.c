#include "../include/shared/func_8043dedc_s1.h"
#include "../include/shared/func_8043dedc_s2.h"
#include "../include/shared/func_8043dedc_s3.h"
#include "../include/shared/func_8043dedc_s4.h"
/* note: Clears eight status bytes and selects the first available profile. */
void func_8025E3A4(void);
unsigned int func_8026439C(void *);
extern s32 D_8010F328;
extern s32 D_80146302;
extern struct Shared_func_8043DEDC_S1 D_801466E2[];

typedef Shared_func_8043DEDC_S1 func_8043DEDC_S1;
typedef Shared_func_8043DEDC_S2 func_8043DEDC_S2;
typedef Shared_func_8043DEDC_S3 func_8043DEDC_S3;
typedef Shared_func_8043DEDC_S4 func_8043DEDC_S4;





void func_8043DEDC(func_8043DEDC_S4 *arg0) {
    func_8043DEDC_S3 *settings;
    s8 *status;
    s32 *profile;
    s32 on;
    s32 i;

    i = 7;
    status = (s8 *)&D_801466E2[0];
    for (; i >= 0; i--) {
        ((func_8043DEDC_S1 *)status)->unk148 = 0;
        status -= 0x96;
    }
    i = 0;
    settings = (func_8043DEDC_S3 *)&D_80146302;
    /* FAKEMATCH: constant-holding local places li across the callback. */
    on = 1;
    for (profile = &D_8010F328; i < 4; i++, profile = &((func_8043DEDC_S2 *)profile)->unk224) {
        if (func_8026439C(profile) != 0) {
            settings->unk78 = on;
            settings->unk7F = i;
            arg0->unk20 = profile;
            break;
        }
    }
    func_8025E3A4();
}
