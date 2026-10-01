/** For each of the object's child slots, attach the child to the record and spawn its effect. */
extern int D_800D297C;
extern void *func_8024BFC4(void *, int);
extern void func_8024AA08(void *, void *, void *);
extern void func_8026DA4C(void *, int, int, void *, int, int);

typedef struct Slot {
    char data[24];
} Slot;

typedef struct Rec {
    char pad0[0xC];
    void *a;
    void *b;
} Rec;

typedef struct func_8020694C_S1 func_8020694C_S1;
struct func_8020694C_S1 {
    char pad0[0xB4];
    int unkB4;
    char padB4[0x140 - 0xB4 - sizeof(int)];
    Slot unk140;
};

void func_8020694C(char *arg0, void *arg1, Rec *arg2) {
    int i;
    int n;
    void *child;

    n = arg0[0xE7];
    for (i = 0; i < n; i++) {
        child = func_8024BFC4(arg0, i);
        if (child != 0) {
            arg2->a = child;
            arg2->b = child;
            func_8024AA08(arg0, arg1, arg2);
            func_8026DA4C(child, ((func_8020694C_S1 *)(arg0))->unkB4, 1, &(&((func_8020694C_S1 *)(arg0))->unk140)[D_800D297C], 0, arg0[3]);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2A64_4 = 100.0f;
const float unbake_rodata_800C2A68_4 = 80.0f;
const float unbake_rodata_800C2A6C_4 = 7.5f;
const float unbake_rodata_800C2A70_4 = 2.14748365e+09f;
const float unbake_rodata_800C2A74_4 = 512.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7B20_4 = 0.069813177f;
const float unbake_rodata_800C7B24_4 = 0.0174532942f;
const float unbake_rodata_800C7B28_4 = 0.087266475f;
const float unbake_rodata_800C7B2C_4 = 0.104719765f;
const float unbake_rodata_800C7B30_4 = 2.0f;
const float unbake_rodata_800C7B34_4 = 1.02400005f;
const float unbake_rodata_800C7B38_4 = (-1.02400005f);
const float unbake_rodata_800C7B3C_4 = 5.11999989f;
const float unbake_rodata_800C7B40_4 = 45.0f;
const float unbake_rodata_800C7B44_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2C40_4 = 5.11999989f;
const float unbake_rodata_800C2C44_4 = 11.25f;
const float unbake_rodata_800C2C48_4 = 12.0f;
const float unbake_rodata_800C2C4C_4 = 21.0f;
const float unbake_rodata_800C2C50_4 = 0.0174532942f;
const float unbake_rodata_800C2C54_4 = (-0.0174532942f);
const float unbake_rodata_800C2C58_4 = 0.0174532942f;
const float unbake_rodata_800C2C5C_4 = (-0.0174532942f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2BF4_4 = 0.087266475f;
const float unbake_rodata_800C2BF8_4 = 21.0f;
const float unbake_rodata_800C2BFC_4 = 0.100000001f;
const float unbake_rodata_800C2C00_4 = 0.116666667f;
const float unbake_rodata_800C2C04_4 = 0.000555555569f;
const float unbake_rodata_800C2C08_4 = 0.0599999987f;
const float unbake_rodata_800C2C0C_4 = 0.0174532942f;
const float unbake_rodata_800C2C10_4 = 0.899999976f;
const float unbake_rodata_800C2C14_4 = 82.9439926f;
const float unbake_rodata_800C2C18_4 = 10.2399998f;
const float unbake_rodata_800C2C1C_4 = 0.5f;
const float unbake_rodata_800C2C20_4 = 8.19200039f;
const float unbake_rodata_800C2C24_4 = 3.14159274f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2A30_4 = 0.069813177f;
const float unbake_rodata_800C2A34_4 = 0.0174532942f;
const float unbake_rodata_800C2A38_4 = 0.087266475f;
const float unbake_rodata_800C2A3C_4 = 0.104719765f;
const float unbake_rodata_800C2A40_4 = 2.0f;
const float unbake_rodata_800C2A44_4 = 1.02400005f;
const float unbake_rodata_800C2A48_4 = (-1.02400005f);
const float unbake_rodata_800C2A4C_4 = 5.11999989f;
const float unbake_rodata_800C2A50_4 = 45.0f;
const float unbake_rodata_800C2A54_4 = 15.0f;
#endif
