#include "span_1000/code_80286050.h"
#include "span_1000/types.h"
#include "span_16E000/code_8042ACB0.h"
#include "span_16E000/code_8043847C.h"
#include "types.h"

extern void *jtbl_800C50E8[];

extern f32 D_800CD738;
extern char D_80140F80;

extern void func_8024BE3C_de(void *arg0);
extern void func_80246E44_de(char *);
extern s32 func_802934F8_de(void);
extern void func_80226A34_de(void *arg0);
extern s32 func_8022A68C_de(void *arg0);
extern void func_8025E2D4_de(s32 arg0);


extern void *func_8025CC6C_de(void);
extern void func_8025CB88_de(void *arg0);









void func_80286284_de(void *arg0) {
    s32 count;
    s32 total;
    u32 skip_mask;
    s32 *objects;
    s32 *objectp;
    void *object;
    f32 saved_delta;
    u32 flags;
    s32 object_type;
    u32 remove_mask;
    u32 remove_value;

    count = 0;
    total = ((func_80286254_S1 *)arg0)->unkE50;
    objects = &((func_80286254_S1 *)(arg0))->unkC50;
    if (total > 0) {
        object_type = 2;
        skip_mask = 0x40000000;
        remove_mask = 0x40002000;
        remove_value = 0x2000;
        objectp = objects;
        do {
            void *next_object;

            next_object = (void *)*objectp;
            if (*((func_8024C654_S1 *)(next_object))->unk18 != object_type) {
                goto first_pass_done;
            }
            object = next_object;
            objectp++;
            flags = ((func_80207F90_S1 *)object)->unk100;
            saved_delta = D_800CD738;
            count++;
            if (!(flags & skip_mask)) {
                func_8024BE3C_de(object);
            }
            if ((((func_80207F90_S1 *)object)->unk100 & remove_mask) == remove_value) {
                func_80246E44_de(object);
            }
            D_800CD738 = saved_delta;
        } while (count < total);
    }

first_pass_done:
    if (func_802934F8_de()) {
        func_80226A34_de(&D_80140F80);
    }
    if (func_8022A68C_de(&D_80140F80)) {
        func_8025E2D4_de(0x34);
        {
        static void *sw_mode_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_mode_0, &&sw_mode_2, &&sw_mode_1, &&sw_mode_3, &&sw_mode_4, &&sw_mode_default
        };
        s32 sw_mode_value = ((GlobalMode *)&D_80140F80)->mode;
        if ((unsigned int)sw_mode_value > 4) {
            goto sw_mode_default;
        }
        goto *jtbl_800C50E8[sw_mode_value];
    }
    do {
        sw_mode_0:
        sw_mode_2:
            func_8042CFB0_de();
            break;
        sw_mode_1:
        sw_mode_3:
        sw_mode_4:
            func_804389C4_de();
            break;
        
    sw_mode_default:;
    } while (0);
    }

    if (count < total) {
        objectp = (s32 *)((count * 4) + (s32)objects);
        do {
            object = (void *)*objectp;
            objectp++;
            saved_delta = D_800CD738;
            func_8024BE3C_de(object);
            count++;
            if (((func_80207F90_S1 *)object)->unk100 & 0x2000) {
                func_80246E44_de(object);
            }
            D_800CD738 = saved_delta;
        } while (count < total);
    }
    func_8025CB88_de(func_8025CC6C_de());
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5018_14[] = {0x002862F4U, 0x00286304U, 0x002862F4U, 0x00286304U, 0x00286304U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA1D8_14[] = {0x00286374U, 0x00286384U, 0x00286374U, 0x00286384U, 0x00286384U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5398_14[] = {0x00286344U, 0x00286354U, 0x00286344U, 0x00286354U, 0x00286354U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C53D8_14[] = {0x00286374U, 0x00286384U, 0x00286374U, 0x00286384U, 0x00286384U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C50E8_14[] = {0x002863A4U, 0x002863B4U, 0x002863A4U, 0x002863B4U, 0x002863B4U};
#endif
