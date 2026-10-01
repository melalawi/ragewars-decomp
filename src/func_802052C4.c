typedef void (*FuncPtr)(void);

typedef struct func_802052C4_S1 func_802052C4_S1;
typedef struct func_802052C4_S2 func_802052C4_S2;
struct func_802052C4_S1 {
    char pad0[0x30];
    void* unk30;
};
struct func_802052C4_S2 {
    char pad0[0x8];
    FuncPtr unk8;
};

void func_802052C4(void *arg0, void *arg1) {
    void *obj = ((func_802052C4_S1 *)(arg1))->unk30;
    if (obj != 0) {
        FuncPtr fn = ((func_802052C4_S2 *)(obj))->unk8;
        if (fn != 0) {
            fn();
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20C8_4 = 0.899999976f;
const float unbake_rodata_800C20CC_4 = 1.0f;
const float unbake_rodata_800C20D0_4 = (-1.0f);
const float unbake_rodata_800C20D4_4 = 1.0f;
const float unbake_rodata_800C20D8_4 = (-1.0f);
const float unbake_rodata_800C20DC_4 = 1.0f;
const float unbake_rodata_800C20E0_4 = (-1.0f);
const float unbake_rodata_800C20E4_4 = 1.22173059f;
const float unbake_rodata_800C20E8_4 = 1.91986239f;
const float unbake_rodata_800C20EC_4 = 1.0f;
const float unbake_rodata_800C20F0_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7258_4 = 3.40282347e+38f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2380_4 = 102.399994f;
const float unbake_rodata_800C2384_4 = 51.1999969f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23C0_4 = 102.399994f;
const float unbake_rodata_800C23C4_4 = 51.1999969f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C215C_4 = 51.1999969f;
const float unbake_rodata_800C2160_4 = 51.1999969f;
const float unbake_rodata_800C2164_4 = 3.14159274f;
#endif
