/** Stores the float argument scaled by D_800C8658 at 0x4 of the object and the int argument at 0x0. */
extern float D_800C8658;
typedef struct func_80239CF0_S1 func_80239CF0_S1;
struct func_80239CF0_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    float unk4;
};

void func_80239CF0(void *arg0, float arg1, int arg2) {
    ((func_80239CF0_S1 *)(arg0))->unk4 = arg1 * (D_800C8658);
    ((func_80239CF0_S1 *)(arg0))->unk0 = arg2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3498_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8658_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3818_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3858_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3568_4 = 0.100000001f;
#endif
