/* Calls func_80402BA0 when the globally selected record's word at 0x38 is non-zero. */
extern void *D_800E2830;
extern void func_80402BA0(void);

typedef struct func_80245884_S1 func_80245884_S1;
struct func_80245884_S1 {
    char pad0[0x38];
    int unk38;
};

void func_80245884(void) {
    void *record = D_800E2830;
    if (((func_80245884_S1 *)(record))->unk38 != 0) {
        func_80402BA0();
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DD420_20[] = {0x00444284U, 0x004442B8U, 0x004442ECU, 0x00444320U, 0x0044434CU, 0x0044434CU, 0x0044434CU, 0x0044434CU};
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800E26F0_8 = 4294967296.0;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED6E8_14[] = {0x0040BFA8U, 0x0040BFD8U, 0x0040BFD8U, 0x0040BFB8U, 0x0040BFC8U};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E85C0_4[] = {0x25, 0x32, 0x64, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDBD0_60[] = {0x0043022CU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x00430184U, 0x00430270U, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x00430314U, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x004303DCU, 0x00430378U};
#endif
