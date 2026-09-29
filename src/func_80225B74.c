#include "basetypes.h"

typedef void (*VoidCallback)(void);

extern s32 D_800CF228;
extern s32 D_800D2930;
extern void *D_801029F0;
extern u8 D_80102AD8[];
extern s32 D_8011FE88;
extern s32 D_8013B290;
extern s32 D_80145048;
extern char D_22ECBC;

extern void *func_8028B2D4(void *, u16 *);
extern s32 func_80245608(s32 arg0, void *arg1, VoidCallback arg2);
extern void *func_8028CF7C(void *arg0, s32 arg1, s32 arg2);

typedef struct func_80225B74_S1 func_80225B74_S1;
typedef struct func_80225B74_S2 func_80225B74_S2;
struct func_80225B74_S1 {
    char pad0[0x14];
    u16* unk14;
    char pad14[0x50 - 0x14 - sizeof(u16*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5DC - 0x58 - sizeof(f32)];
    void* unk5DC;
    char pad5DC[0x664 - 0x5DC - sizeof(void*)];
    u32 unk664;
    char pad664[0x850 - 0x664 - sizeof(u32)];
    s32 unk850;
};
struct func_80225B74_S2 {
    char pad0[0x44];
    u32 unk44;
    char pad44[0xFC - 0x44 - sizeof(u32)];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};

void func_80225B74(void *arg0, void *arg1, s32 arg2)
{
    s32 enabled;
    u32 resource_flags;
    void *resource;
    s32 i;

    enabled = 1;
    resource_flags = 0;

    if (((func_80225B74_S1 *)(arg0))->unk14 != 0) {
        resource = func_8028B2D4(&D_8011FE88, ((func_80225B74_S1 *)(arg0))->unk14);
        if (resource != 0) {
            resource_flags = ((func_80225B74_S2 *)(resource))->unk44;
        }
    }

    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (((func_80225B74_S1 *)(arg0))->unk664 & 0x8000) {
        enabled = 0;
    }
    if (D_8013B290 != 0) {
        enabled = 0;
    }
    if (D_80145048 >= 2) {
        enabled = 0;
    }
    if (arg2 == 12) {
        enabled = 0;
    }
    if (((func_80225B74_S1 *)(arg0))->unk664 & 0x8000) {
        enabled = 0;
    }
    if (resource_flags & 0x1000000) {
        enabled = 0;
    }
    if ((resource_flags & 0x80000) &&
        (arg2 != 20) && (arg2 != 40) && (arg2 != 30)) {
        enabled = 0;
    }

    ((func_80225B74_S1 *)(arg0))->unk850 = enabled;
    if (enabled != 0) {
        if (arg2 == 50) {
            void *data;

            data = ((func_80225B74_S1 *)(arg0))->unk5DC;
            D_800CF228 = 1;
            if (data != 0) {
                for (i = 0; i < 4; i++) {
                    D_80102AD8[i] = *((u8 *)((func_80225B74_S1 *)(arg0))->unk5DC + i + 0x520);
                }
            }
        }
        D_800D2930 = 0;
        D_801029F0 = arg0;
        func_80245608(arg2, 0, (VoidCallback)&D_22ECBC);
    }

    resource = func_8028CF7C(&D_8011FE88, -1, 0xC45);
    if (resource != 0) {
        ((func_80225B74_S1 *)(arg0))->unk50 = ((func_80225B74_S2 *)(resource))->unkFC;
        ((func_80225B74_S1 *)(arg0))->unk54 = ((func_80225B74_S2 *)(resource))->unk100;
        ((func_80225B74_S1 *)(arg0))->unk58 = ((func_80225B74_S2 *)(resource))->unk104;
    }
}
