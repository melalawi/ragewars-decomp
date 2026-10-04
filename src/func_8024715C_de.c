#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;







extern CollisionInfo D_801003D8;
extern func_80237E70_G1 D_801001F0;
extern s32 func_80243A90_de(void *arg0, Vec3 arg1, CollisionInfo *arg2);
extern void func_80278E04_de(s32 arg0, s32 arg1, void *arg2);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);









void func_8024715C_de(char *arg0, Vec3 *arg1) {
    CollisionInfo *collision;
    u16 *old_contact;
    s32 collided;
    f32 saved;
    void (*callback)(void *, void *, CollisionInfo *);

    if ((((ObjectLinks23C *)(arg0))->unk_100 & 0x10000) && ((ObjectLinks23C *)(arg0))->unk_1A0 != 0) {
        collision = ((ObjectLinks10 *)(((ObjectLinks23C *)(arg0))->unk_1A0))->unk_C;
        if (collision == 0) {
            collision = &D_801003D8;
        }
        saved = ((ObjectStateC *)(collision))->unk_8.v0;
        if ((u32)(((ObjectLinks23C *)(arg0))->unk_238 - 0x2B0C) < 8) {
            ((ObjectStateC *)(collision))->unk_8.v1 = 0;
        }
        old_contact = ((ObjectLinks23C *)(arg0))->unk_14;
        collided = func_80243A90_de(arg0, *arg1, collision);
        if (old_contact != ((ObjectLinks23C *)(arg0))->unk_14) {
            ((ObjectLinks23C *)(arg0))->unk_1F4 = old_contact;
        }
        ((ObjectStateC *)(collision))->unk_8.v0 = saved;
        if (old_contact != 0 && ((ObjectLinks23C *)(arg0))->unk_14 != 0 &&
                *old_contact != *((ObjectLinks23C *)(arg0))->unk_14 &&
                *((ObjectLinks23C *)(arg0))->unk_18 == 1) {
            func_80278E04_de((s32)old_contact, 0x80, arg0);
            func_80278E04_de((s32)((ObjectLinks23C *)(arg0))->unk_14, 0x40, arg0);
        }
        if (collided != 0 && !(((ObjectLinks23C *)(arg0))->unk_100 & 0x300000) &&
                *((ObjectLinks23C *)(arg0))->unk_18 == 1 && D_801001F0.unk0 != 0 &&
                *D_801001F0.unk0 == 1) {
            func_80278D78_de(D_801001F0.unk0, 0x20, arg0);
        }
        callback = ((struct CallbackState288 *) ((char *) arg0))->callback;
        if (callback != 0) {
            callback(arg0, arg0 + 0x170, collision);
        }
    } else {
        ((ObjectLinks23C *)(arg0))->unk_8 = *arg1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF308_4[] = {0x00, 0x00, 0x00, 0x02};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E42D4_2[] = {0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDEC8_E4[] = {0x00425CF8U, 0x00425D18U, 0x004261A8U, 0x00425D70U, 0x00425D90U, 0x00425DB0U, 0x00425DD0U, 0x00425DF0U, 0x00425E10U, 0x00425E30U, 0x00425E50U, 0x00425E70U, 0x00425E90U, 0x00425EB0U, 0x00425ED0U, 0x00425EF0U, 0x00425F10U, 0x00425F30U, 0x00425F50U, 0x00425F70U, 0x00425F90U, 0x00425FB0U, 0x00425FD0U, 0x00425FF0U, 0x00426010U, 0x00426030U, 0x00426050U, 0x00426070U, 0x00426090U, 0x004260B0U, 0x004260D0U, 0x004261A8U, 0x004260F0U, 0x00426110U, 0x004261A8U, 0x004261A8U, 0x00426130U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x00426170U, 0x00426190U, 0x004261A8U, 0x004261A8U, 0x004261A8U, 0x00426150U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8D88_1C[] = {0x0041FBD0U, 0x0041FC58U, 0x0041FCC0U, 0x0041FCD0U, 0x0041FD64U, 0x0041FDACU, 0x0041FDFCU};
const float unbake_rodata_800E8DA4_4 = 2.14748365e+09f;
const float unbake_rodata_800E8DA8_4 = 0.00333333341f;
const float unbake_rodata_800E8DAC_4 = 70.0f;
const float unbake_rodata_800E8DB0_4 = 170.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DE300_20[] = {0x0043DCCCU, 0x0043DCFCU, 0x0043DD2CU, 0x0043DD5CU, 0x0043DD8CU, 0x0043DDBCU, 0x0043DDECU, 0x0043DE1CU};
#endif
