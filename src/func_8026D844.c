extern void func_8026D8F8(void);
extern void func_80272D20(void *, float, float, float);
extern void func_8026FD0C(void *, void *);
extern float D_800C979C;
extern char D_801105E0;

void func_8026D844(void) {
    char local[64];

    func_8026D8F8();
    func_80272D20(local, D_800C979C, D_800C979C, D_800C979C);
    func_8026FD0C(local, &D_801105E0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C45DC_4 = 2.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C979C_4 = 2.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C495C_4 = 2.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C499C_4 = 2.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46AC_4 = 2.0f;
#endif
