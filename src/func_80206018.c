#include "basetypes.h"

typedef struct CallbackHolder CallbackHolder;
typedef struct Event Event;

struct CallbackHolder {
    char pad0[8];
    void (*callback)(void *arg0, Event *arg1);
};

struct Event {
    char pad0[0x30];
    CallbackHolder *holder;
};

extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

void func_80206018(void *arg0, Event *arg1) {
    CallbackHolder *holder;
    s32 different;

    different = func_80285F28(&D_8011FE88, arg0) != 1;
    if (different == 0) {
        holder = arg1->holder;
        if ((holder != 0) && (holder->callback != 0)) {
            holder->callback(arg0, arg1);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C22B8_4 = 1.0f;
const float unbake_rodata_800C22BC_4 = 0.5f;
const float unbake_rodata_800C22C0_4 = 1.0f;
const float unbake_rodata_800C22C4_4 = 0.75f;
const float unbake_rodata_800C22C8_4 = 0.75f;
const float unbake_rodata_800C22CC_4 = 0.5f;
const float unbake_rodata_800C22D0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C73F8_4 = 0.25f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2550_4 = 0.400000006f;
const float unbake_rodata_800C2554_4 = 1.29999995f;
const float unbake_rodata_800C2558_4 = 0.100000001f;
const float unbake_rodata_800C255C_4 = (-0.600000024f);
const float unbake_rodata_800C2560_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2578_4 = 2.0f;
const float unbake_rodata_800C257C_4 = 0.25f;
const float unbake_rodata_800C2580_4 = 1.0f;
const float unbake_rodata_800C2584_4 = 0.25f;
const float unbake_rodata_800C2588_4 = 0.52359885f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2300_4 = 437.5f;
const float unbake_rodata_800C2304_4 = (-675.0f);
const float unbake_rodata_800C2308_4 = 0.25f;
const float unbake_rodata_800C230C_4 = 0.1875f;
const float unbake_rodata_800C2310_4 = 1.57079649f;
const float unbake_rodata_800C2314_4 = 255.0f;
#endif
