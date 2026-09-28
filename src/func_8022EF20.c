#include "basetypes.h"

extern void func_802A101C(s32, s32, s32);
extern void func_8022F304(void *, u8);
extern void func_8022F328(void *, u8);
extern void func_8022F34C(void *, u8);
extern void func_8022F370(void *, s32);
extern void func_8022F394(void *, s32, s32);
extern void func_8022F594(s32, s32);
extern void func_8022F4AC(s32, s32);

void func_8022EF20(void *arg0) {
    u8 *object = (u8 *)arg0;
    s32 i;
    u8 *cursor;

    func_802A101C((s32)object, 0, 8);
    object[0xE] = 0;
    func_8022F304(object, 0);
    func_8022F328(object, 0);
    func_8022F34C(object, 0);
    func_8022F370(object, 0);
    func_8022F394(object, 0, 2);
    func_8022F394(object, 1, 2);
    func_8022F394(object, 2, 2);
    func_8022F394(object, 3, 2);
    func_8022F394(object, 4, 2);
    func_8022F394(object, 5, 2);
    func_8022F394(object, 6, 2);
    func_8022F394(object, 7, 2);
    func_8022F394(object, 8, 2);
    func_8022F394(object, 9, 2);
    func_8022F394(object, 0xA, 2);
    func_8022F394(object, 0x11, 2);
    func_8022F394(object, 0x12, 2);
    object[0x17] = 0;
    object[0xF] = 0;
    *(s32 *)(object + 0x74) = 0;
    *(s32 *)(object + 0x6C) = 0;
    *(s32 *)(object + 0x70) = 0;
    object[0x25] = 0;
    *(s32 *)(object + 8) = 0;
    object[0xC] = 0;
    *(s8 *)(object + 0xD) = -1;
    func_802A101C((s32)(object + 0x26), 0, 0x24);
    func_802A101C((s32)(object + 0x7D), 0, 1);
    func_802A101C((s32)(object + 0x51), 0, 3);
    func_802A101C((s32)(object + 0x125), 0, 0x64);
    func_8022F594((s32)object, 0);
    func_8022F594((s32)object, 5);
    func_8022F594((s32)object, 7);
    func_802A101C((s32)(object + 0x57), 0, 0x14);
    func_802A101C((s32)(object + 0x54), 0, 3);
    func_802A101C((s32)(object + 0x4A), 0, 7);
    func_802A101C((s32)(object + 0x78), 0, 1);
    func_802A101C((s32)(object + 0x79), 0, 2);
    func_8022F4AC((s32)object, 0);
    func_8022F4AC((s32)object, 2);
    func_8022F4AC((s32)object, 3);
    func_8022F4AC((s32)object, 4);
    func_802A101C((s32)(object + 0x7B), 0, 2);
    func_802A101C((s32)(object + 0x7E), 0, 5);
    func_802A101C((s32)(object + 0x88), 0, 5);
    func_802A101C((s32)(object + 0x8D), 0, 5);
    func_802A101C((s32)(object + 0x83), 0, 5);
    i = 0x23;
    cursor = object + 0x8C;
    do {
        *(s32 *)(cursor + 0x94) = 0;
        i--;
        cursor -= 4;
    } while (i >= 0);
    func_802A101C((s32)(object + 0x124), 0, 1);
    object[0x18A] = 1;
    object[0x18B] = 0x86;
    object[0x189] = 0;
    object[0x18C] = 0x84;
    object[0x18D] = 0;
}
