#include "basetypes.h"

extern s32 D_8011FE88;
extern s32 D_801462C8;
extern s32 func_8028B238(void *arg0, s32 arg1);

typedef struct func_8024F848_S1 func_8024F848_S1;
typedef struct func_8024F848_S2 func_8024F848_S2;
struct func_8024F848_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x18 - 0x4 - sizeof(u16)];
    void* unk18;
};
struct func_8024F848_S2 {
    char pad0[0xE];
    s8 unkE;
};

s32 func_8024F848(void *arg0) {
    void *obj;
    s32 value;
    s32 index;

    obj = ((func_8024F848_S1 *)(arg0))->unk18;
    if (*(s32 *)obj == 0xC) {
        return 0;
    }

    value = ((func_8024F848_S2 *)(obj))->unkE;
    index = func_8028B238(&D_8011FE88, ((func_8024F848_S1 *)(arg0))->unk4);
    if (index < 0x6AB) {
        if (index < 0x6A9) {
            return value;
        }
        if (D_801462C8 & 0x800) {
            value = 1;
        }
        if (D_801462C8 & 0x1000) {
            value = 2;
        }
    }
    return value;
}
