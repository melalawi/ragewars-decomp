extern float D_800C7EC8;

typedef struct func_8022DBD4_S1 func_8022DBD4_S1;
struct func_8022DBD4_S1 {
    char pad0[0x708];
    float unk708;
    char pad708[0x70C - 0x708 - sizeof(float)];
    float unk70C;
    char pad70C[0x710 - 0x70C - sizeof(float)];
    float unk710;
    char pad710[0x714 - 0x710 - sizeof(float)];
    int unk714;
};

void func_8022DBD4(void *arg0) {
    float temp = ((func_8022DBD4_S1 *)(arg0))->unk708;
    float k = D_800C7EC8;
    ((func_8022DBD4_S1 *)(arg0))->unk714 = 0;
    ((func_8022DBD4_S1 *)(arg0))->unk70C = temp;
    ((func_8022DBD4_S1 *)(arg0))->unk710 = k;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D08_4 = 0.401425779f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EC8_4 = 0.401425779f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C307C_4 = 0.401425779f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30BC_4 = 0.401425779f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DD8_4 = 0.401425779f;
#endif
