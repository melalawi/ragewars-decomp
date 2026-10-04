#include "common/types.h"
#include "span_1000/code_80252714.h"
#include "span_1000/types.h"
#include "types.h"



extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_80254990_de(void *, void *);
extern s32 func_802BB420_de(Queue_func_802517B4_de *, s32, s32);

extern char D_800C3EA0_de;
extern Queue_func_802517B4_de D_80101140;


s32 func_802540F4_de(s32 arg0, void **arg1, s32 arg2, void *arg3, s32 arg4) {
    void **resource;
    s32 size;
    s32 counter;
    s32 counter2;
    u32 token;
    u32 token2;

    resource = func_8025193C_de(0, arg2, arg2, 4, 0, 0, 0, &D_800C3EA0_de, arg4);
    if (resource != 0) {
        size = **(s32 **)resource;
        token = func_802BCF30_de();
        counter = D_8010115C + 1;
        D_8010115C = counter;
        if (counter != 1) {
            func_802BCF50_de(token);
            func_802BB2A0_de((s32)&D_80101140, 0, 1);
        } else {
            func_802BCF50_de(token);
        }
        func_80254990_de(0, resource);
        token2 = func_802BCF30_de();
        counter2 = D_8010115C - 1;
        D_8010115C = counter2;
        if (counter2 != 0) {
            func_802BCF50_de(token2);
            func_802BB420_de(&D_80101140, 0, 1);
        } else {
            func_802BCF50_de(token2);
        }
        resource = func_8025193C_de(0, arg2, arg2, ((size * 4) + 0xF) & ~7,
                                 0, 0, 0, arg3, arg4);
        if (resource != 0) {
            *arg1 = *resource;
            return (s32)resource;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F200E_14[] = {0x00, 0xEA, 0x00, 0x00, 0x00, 0xEB, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0xED, 0x00, 0x00, 0x00, 0xEE, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EC6FC_64[] = {0x00, 0x42, 0x9E, 0x80, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x15, 0x00, 0x42, 0xA4, 0x00, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x15, 0x00, 0x42, 0xA4, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x42, 0xA6, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x15, 0x00, 0x42, 0xA5, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x15, 0x00, 0x42, 0xA4, 0x38, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x03, 0x72, 0x00, 0x42, 0xA6, 0x7C, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x72, 0x00, 0x42, 0xA6, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FF23C_4[] = {0x54, 0xF2, 0x08, 0xE0};
#endif
