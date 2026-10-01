/* Initialises an object: clears the words at 0x8, 0x9C, 0xA4, 0xA8, 0xB4 and 0xB8, sets the words at
   0x0 and 0x4 to -1, writes the two constants at D_800C7E38 into the floats at 0xAC and 0xB0, the two
   at D_800C7E40 into the floats at 0x90, 0x94 and 0x98 (the first of them twice) and D_800C7E48 into
   the float at 0xA0. */
extern float D_800C7E38;
extern float D_800C7E40;
extern float D_800C7E48;
void func_8022C66C(void *arg0) {
    float f1 = D_800C7E38;
    float f2 = *(float *)((char *)&D_800C7E38 + 4);
    float f0 = D_800C7E40;
    float f3 = *(float *)((char *)&D_800C7E40 + 4);
    float f4 = D_800C7E48;

    *(int *)((char *)arg0 + 0xB4) = 0;
    *(int *)((char *)arg0 + 0x8) = 0;
    *(int *)((char *)arg0 + 0xB8) = 0;
    *(int *)((char *)arg0 + 0x4) = -1;
    *(int *)((char *)arg0 + 0x0) = -1;
    *(int *)((char *)arg0 + 0xA8) = 0;
    *(int *)((char *)arg0 + 0x9C) = 0;
    *(int *)((char *)arg0 + 0xA4) = 0;
    *(float *)((char *)arg0 + 0xAC) = f1;
    *(float *)((char *)arg0 + 0xB0) = f2;
    *(float *)((char *)arg0 + 0x90) = f0;
    *(float *)((char *)arg0 + 0x94) = f3;
    *(float *)((char *)arg0 + 0x98) = f0;
    *(float *)((char *)arg0 + 0xA0) = f4;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C78_4 = 437.5f;
const float unbake_rodata_800C2C7C_4 = (-675.0f);
const float unbake_rodata_800C2C80_4 = 0.25f;
const float unbake_rodata_800C2C84_4 = 0.1875f;
const float unbake_rodata_800C2C88_4 = 1.57079649f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E38_4 = 437.5f;
const float unbake_rodata_800C7E3C_4 = (-675.0f);
const float unbake_rodata_800C7E40_4 = 0.25f;
const float unbake_rodata_800C7E44_4 = 0.1875f;
const float unbake_rodata_800C7E48_4 = 1.57079649f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FEC_4 = 437.5f;
const float unbake_rodata_800C2FF0_4 = (-675.0f);
const float unbake_rodata_800C2FF4_4 = 0.25f;
const float unbake_rodata_800C2FF8_4 = 0.1875f;
const float unbake_rodata_800C2FFC_4 = 1.57079649f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C302C_4 = 437.5f;
const float unbake_rodata_800C3030_4 = (-675.0f);
const float unbake_rodata_800C3034_4 = 0.25f;
const float unbake_rodata_800C3038_4 = 0.1875f;
const float unbake_rodata_800C303C_4 = 1.57079649f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D48_4 = 437.5f;
const float unbake_rodata_800C2D4C_4 = (-675.0f);
const float unbake_rodata_800C2D50_4 = 0.25f;
const float unbake_rodata_800C2D54_4 = 0.1875f;
const float unbake_rodata_800C2D58_4 = 1.57079649f;
#endif
