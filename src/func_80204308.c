#include "basetypes.h"

extern void func_802398F8(void *arg0, void *arg1, s32 arg2, void *arg3,
                          f32 arg4);
extern void func_8025E13C(s32 arg0);
extern f32 D_800C6B5C;
extern s32 *D_800D7F84[];
extern s32 D_800D7F88;
extern char D_80145088;
extern char D_801450C8;

s32 func_80204308(void *arg0, void *arg1, void *arg2) {
    char *rec;
    void *table;
    void *value;
    void *fallback;
    s16 index;
    s32 callback;

    rec = (char *)*(void **)((char *)arg0 + 0x18) + 0x14;
    if (*(s16 *)(rec + 0x16) == 0) {
        return 1;
    }
    if (*(s8 *)((char *)arg1 + 0x34) != 0) {
        return 1;
    }
    if (*(u8 *)arg2 != 1) {
        return 1;
    }
    if ((*(s32 *)((char *)arg2 + 0x100) & 0x300000) == 0) {
        return 1;
    }

    index = *(s16 *)(rec + 0x18);
    table = *(void **)((char *)arg2 + 0x1D8);
    if (index == 0) {
        return 0;
    }

    value = *(void **)((char *)table + 0x5DC);
    fallback = &D_801450C8;
    if (value != 0) {
        fallback = value;
    }
    func_802398F8(&D_80145088, fallback,
                  **(s32 **)((char *)D_800D7F84 + index * 8), arg0,
                  D_800C6B5C);

    index = *(s16 *)(rec + 0x18);
    callback = *(s32 *)((char *)&D_800D7F88 + index * 8);
    if (callback != 0) {
        func_8025E13C(callback);
    }
    return 0;
}
