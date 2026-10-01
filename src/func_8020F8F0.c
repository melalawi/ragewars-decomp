/* Returns 1 when one of the object's ten entries at 0x3C matches its current value at 0x28C and the
   paired flag at 0x6C is set, and 0 otherwise or when the current value is zero. */
typedef struct {
    char pad[0x3C];
    int keys[10];
    char pad64[0x6C - 0x64];
    int flags[10];
    char pad94[0x28C - 0x94];
    int current;
} Obj;

int func_8020F8F0(Obj *obj) {
    int i;

    if (obj->current == 0) {
        return 0;
    }
    for (i = 0; i < 10; i++) {
        if (obj->keys[i] == obj->current && obj->flags[i] != 0) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3DF0_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8F00_4 = 2.14748365e+09f;
const float unbake_rodata_800C8F04_4 = 5.11999989f;
const float unbake_rodata_800C8F08_4 = 1.57079649f;
const float unbake_rodata_800C8F0C_4 = 3.14159298f;
const float unbake_rodata_800C8F10_4 = 4.71238947f;
const float unbake_rodata_800C8F14_4 = 102.399994f;
const float unbake_rodata_800C8F18_4 = 10.2399998f;
const float unbake_rodata_800C8F1C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3C34_4 = 1.0f;
const float unbake_rodata_800C3C38_4 = 0.5f;
const float unbake_rodata_800C3C3C_4 = 0.5f;
const float unbake_rodata_800C3C40_4 = 0.5f;
const float unbake_rodata_800C3C44_4 = 0.5f;
const float unbake_rodata_800C3C48_4 = 0.699999988f;
const float unbake_rodata_800C3C4C_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C58_4 = 1.0f;
const float unbake_rodata_800C3C5C_4 = 0.00872664712f;
const float unbake_rodata_800C3C60_4 = 0.5f;
const float unbake_rodata_800C3C64_4 = 0.00872664712f;
const float unbake_rodata_800C3C68_4 = 1.0f;
const float unbake_rodata_800C3C6C_4 = 0.5f;
const float unbake_rodata_800C3C70_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3D9C_4 = 0.5f;
const float unbake_rodata_800C3DA0_4 = 0.100000001f;
const float unbake_rodata_800C3DA4_4 = 0.5f;
const float unbake_rodata_800C3DA8_4 = 0.100000001f;
#endif
