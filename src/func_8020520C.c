extern char D_800CD670;
extern char D_2052C4;
extern char D_205628;
extern char D_2050A0;

typedef struct func_8020520C_S1 func_8020520C_S1;
typedef struct func_8020520C_S2 func_8020520C_S2;
struct func_8020520C_S1 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
    char pad108[0x10C - 0x108 - sizeof(void*)];
    void* unk10C;
    char pad10C[0x110 - 0x10C - sizeof(void*)];
    void* unk110;
    char pad110[0x124 - 0x110 - sizeof(void*)];
    int unk124;
    char pad124[0x128 - 0x124 - sizeof(int)];
    int unk128;
};
struct func_8020520C_S2 {
    char pad0[0x3];
    signed char unk3;
};

/** Initialize the dest record's vtable-like fields from source's flag byte. */
void func_8020520C(void *source, void *dest) {
    ((func_8020520C_S1 *)(dest))->unk2C = &D_800CD670;
    ((func_8020520C_S1 *)(dest))->unk108 = &D_2052C4;
    ((func_8020520C_S1 *)(dest))->unk10C = &D_205628;
    ((func_8020520C_S1 *)(dest))->unk110 = &D_2050A0;
    ((func_8020520C_S1 *)(dest))->unk124 = 0;
    ((func_8020520C_S1 *)(dest))->unk128 = ((func_8020520C_S2 *)(source))->unk3;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20AC_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7228_4 = 0.899999976f;
const float unbake_rodata_800C722C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2360_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23A0_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2128_4 = 1.0f;
#endif
