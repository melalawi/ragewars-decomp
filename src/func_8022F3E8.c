/* Increments the object's byte counter for a slot in the table at 0x18: indices 0 to 10 directly,
   17 and 18 as slots 11 and 12, and other indices are ignored. */
typedef struct {
    char pad[0x18];
    unsigned char slots[13];
} Obj;

void func_8022F3E8(Obj *obj, int index) {
    if (index == 17) {
        goto is17;
    }
    if (index < 18) {
        goto below18;
    }
    if (index == 18) {
        goto is18;
    }
    return;
below18:
    if (index >= 11) {
        return;
    }
    if (index < 0) {
        return;
    }
    goto store;
is18:
    index = 12;
    goto store;
is17:
    index = 11;
store:
    obj->slots[index]++;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D1D58_4[] = {0x80, 0x0C, 0xE4, 0xB4};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D70DC_4[] = {0x80, 0x0D, 0x38, 0x48};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CC718_18[] = {0x80, 0x0C, 0xC7, 0x00, 0x80, 0x0C, 0xC7, 0x10, 0x80, 0x11, 0x80, 0x60, 0x40, 0x3F, 0x00, 0x00, 0x20, 0x54, 0x55, 0x20, 0x4D, 0x45, 0x20, 0x4D};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800CC9B8_4 = 0.100000001f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD600_4[] = {0x00, 0x00, 0x00, 0x01};
#endif
