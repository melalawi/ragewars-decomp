#include "basetypes.h"

typedef void (*PrimaryCallback)(s32, s32, void *);
typedef void (*SecondaryCallback)(void *);

typedef struct CallbackPair {
    PrimaryCallback primary;
    SecondaryCallback secondary;
} CallbackPair;

extern void func_802398F8(void *, void *, s32, void *, f32);
extern void func_8025E13C(s32);
extern s32 func_804030E0(s32);

extern s32 D_800D28B8;
extern s32 *D_800D7F84[];
extern s32 D_800D7F88;
extern s32 D_800D2980;
extern f32 D_800C9C20;
extern char D_80145088;
extern u8 D_801462E5;
extern s32 D_8011FE88;
extern s32 D_8013B294;
extern s32 D_8011FFC0;

void func_80278C80(void *arg0) {
    CallbackPair *table;
    void *fallback;
    u8 *fallbackBase;
    u8 index;
    s32 callback;

    table = (CallbackPair *)(&D_800D28B8)[*(u8 *)((char *)arg0 + 0x11)];
    if (table != 0) {
        fallbackBase = &D_801462E5;
        fallback = fallbackBase - 0x121D;
        if (*fallbackBase == 0) {
            fallback = *(void **)(fallbackBase - 0x123D);
            if (fallback == 0) {
                fallback = fallbackBase - 0x121D;
            }
        }
        if (D_8011FE88 == 4) {
            index = *(u8 *)((char *)arg0 + 0x10);
            if (index != 0) {
                func_802398F8(&D_80145088, fallback,
                              **(s32 **)((char *)D_800D7F84 + index * 8),
                              D_800D2980, D_800C9C20);
                callback = *(s32 *)((char *)&D_800D7F88 +
                                    *(u8 *)((char *)arg0 + 0x10) * 8);
                if (callback != 0) {
                    func_8025E13C(callback);
                }
            }
            if (*(u16 *)((char *)arg0 + 8) >= 2) {
                func_804030E0(*(u16 *)((char *)arg0 + 8));
            }
        }
        table += *(u8 *)((char *)arg0 + 0x12);
        if (*(u16 *)((char *)arg0 + 0xA) == D_8013B294) {
            PrimaryCallback fn;
            s32 base;

            fn = table->primary;
            base = D_8011FFC0 + *(u16 *)((char *)arg0 + 4) * 0x2E8;
            if (fn != 0) {
                fn(base, base + 0x170, arg0);
            }
        } else {
            SecondaryCallback fn;

            fn = table->secondary;
            if (fn != 0) {
                fn(arg0);
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4A60_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9C20_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4B30_4 = 4.0f;
#endif
