/** Update the object's state code from identity, mode, and height bounds. */
extern int D_800CE47C;
extern float D_800C7F78;
extern float D_800C7F7C;

typedef struct func_8022EC2C_S1 func_8022EC2C_S1;
struct func_8022EC2C_S1 {
    char pad0[0xE4];
    unsigned short unkE4;
    char padE4[0x10E - 0xE4 - sizeof(unsigned short)];
    signed char unk10E;
    char pad10E[0x6C0 - 0x10E - sizeof(signed char)];
    float unk6C0;
    char pad6C0[0x86C - 0x6C0 - sizeof(float)];
    int unk86C;
};

void func_8022EC2C(void *object) {
    int suppress = 0;
    float value;

    if (((func_8022EC2C_S1 *)(object))->unk86C == 0x1144) {
        suppress = ((func_8022EC2C_S1 *)(object))->unk10E == 0;
    }
    if (((func_8022EC2C_S1 *)(object))->unkE4 == D_800CE47C) {
        ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A2;
        return;
    }
    if (!suppress) {
        value = ((func_8022EC2C_S1 *)(object))->unk6C0;
        if (D_800C7F78 <= value) {
            ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A2;
            return;
        }
        if (value <= D_800C7F7C) {
            ((func_8022EC2C_S1 *)(object))->unk86C = 0x8A7;
            return;
        }
        ((func_8022EC2C_S1 *)(object))->unk86C = 0x14;
    }
}

/** Empty adjacent entry point included in func_8022EC2C's Splat span. */
void func_8022ECB4(void) {
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2DB8_4 = 1.02400005f;
const float unbake_rodata_800C2DBC_4 = (-1.02400005f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F78_4 = 1.02400005f;
const float unbake_rodata_800C7F7C_4 = (-1.02400005f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C3130_4 = 1.02400005f;
const float unbake_rodata_800C3134_4 = (-1.02400005f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3170_4 = 1.02400005f;
const float unbake_rodata_800C3174_4 = (-1.02400005f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E88_4 = 1.02400005f;
const float unbake_rodata_800C2E8C_4 = (-1.02400005f);
#endif
