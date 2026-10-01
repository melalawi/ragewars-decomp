
extern float D_800C8630;
typedef struct func_802393C8_S1 func_802393C8_S1;
struct func_802393C8_S1 {
    char pad0[0xFC];
    int unkFC;
    char padFC[0x100 - 0xFC - sizeof(int)];
    int unk100;
    char pad100[0x104 - 0x100 - sizeof(int)];
    int unk104;
    char pad104[0x108 - 0x104 - sizeof(int)];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    float unk110;
    char pad110[0x114 - 0x110 - sizeof(float)];
    float unk114;
    char pad114[0x118 - 0x114 - sizeof(float)];
    int unk118;
};

/** Reset the object fields from 0xFC through 0x118. */
void func_802393C8(void *arg0) {
    float value = D_800C8630;
    ((func_802393C8_S1 *)(arg0))->unkFC = 0;
    ((func_802393C8_S1 *)(arg0))->unk100 = 0;
    ((func_802393C8_S1 *)(arg0))->unk104 = 0;
    ((func_802393C8_S1 *)(arg0))->unk108 = 0;
    ((func_802393C8_S1 *)(arg0))->unk10C = 0;
    ((func_802393C8_S1 *)(arg0))->unk118 = 0;
    ((func_802393C8_S1 *)(arg0))->unk110 = value;
    ((func_802393C8_S1 *)(arg0))->unk114 = value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3470_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8630_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C37F0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3830_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3540_4 = 1.0f;
#endif
