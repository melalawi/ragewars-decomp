#include "basetypes.h"

extern void *jtbl_800CA1D8[];

extern f32 D_800D2988;
extern char D_80145040;

extern void func_8024BE2C(void *arg0);
extern void func_80246E34(char *);
extern s32 func_802934DC(void);
extern void func_80226A10(void *arg0);
extern s32 func_8022A67C(void *arg0);
extern void func_8025E2F4(s32 arg0);
extern void func_8042D190(void);
extern void func_80438BA4(void);
extern void *func_8025CC8C(void);
extern void func_8025CBA8(void *arg0);

typedef struct func_80286254_S1 func_80286254_S1;
typedef struct func_80286254_S2 func_80286254_S2;
struct func_80286254_S1 {
    char pad0[0xC50];
    s32 unkC50;
    char padC54[0xE50-0xC54];
    s32 unkE50;
};
struct func_80286254_S2 {
    char pad0[0x18];
    s32* unk18;
};

typedef struct { char pad[0x100]; u32 flags; } ObjectFlags;
typedef struct { char pad[0x1295]; u8 mode; } GlobalMode;

void func_80286254(void *arg0) {
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
            if (*((func_80286254_S2 *)(next_object))->unk18 != object_type) {
                goto first_pass_done;
            }
            object = next_object;
            objectp++;
            flags = ((ObjectFlags *)object)->flags;
            saved_delta = D_800D2988;
            count++;
            if (!(flags & skip_mask)) {
                func_8024BE2C(object);
            }
            if ((((ObjectFlags *)object)->flags & remove_mask) == remove_value) {
                func_80246E34(object);
            }
            D_800D2988 = saved_delta;
        } while (count < total);
    }

first_pass_done:
    if (func_802934DC()) {
        func_80226A10(&D_80145040);
    }
    if (func_8022A67C(&D_80145040)) {
        func_8025E2F4(0x34);
        {
        static void *sw_mode_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_mode_0, &&sw_mode_2, &&sw_mode_1, &&sw_mode_3, &&sw_mode_4, &&sw_mode_default
        };
        s32 sw_mode_value = ((GlobalMode *)&D_80145040)->mode;
        if ((unsigned int)sw_mode_value > 4) {
            goto sw_mode_default;
        }
        goto *jtbl_800CA1D8[sw_mode_value];
    }
    do {
        sw_mode_0:
        sw_mode_2:
            func_8042D190();
            break;
        sw_mode_1:
        sw_mode_3:
        sw_mode_4:
            func_80438BA4();
            break;
        
    sw_mode_default:;
    } while (0);
    }

    if (count < total) {
        objectp = (s32 *)((count * 4) + (s32)objects);
        do {
            object = (void *)*objectp;
            objectp++;
            saved_delta = D_800D2988;
            func_8024BE2C(object);
            count++;
            if (((ObjectFlags *)object)->flags & 0x2000) {
                func_80246E34(object);
            }
            D_800D2988 = saved_delta;
        } while (count < total);
    }
    func_8025CBA8(func_8025CC8C());
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
