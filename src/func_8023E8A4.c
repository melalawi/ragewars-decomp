typedef struct WordTriple {
    int first;
    int second;
    int third;
} WordTriple;

typedef struct func_8023E8A4_S1 func_8023E8A4_S1;
typedef struct func_8023E8A4_S2 func_8023E8A4_S2;
struct func_8023E8A4_S1 {
    char pad0[0x18C];
    WordTriple unk18C;
};
struct func_8023E8A4_S2 {
    char pad0[0x48];
    WordTriple unk48;
};

/** Copy three words from offsets 0x48..0x50 to offsets 0x18C..0x194. */
void func_8023E8A4(void *arg0, void *arg1) {
    ((func_8023E8A4_S1 *)(arg0))->unk18C = ((func_8023E8A4_S2 *)(arg1))->unk48;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC848_14[] = {0x0042FB4CU, 0x0042FBD4U, 0x0042FC3CU, 0x0042FC4CU, 0x0042FCC8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1A60_38[] = {0x00429988U, 0x004299C8U, 0x00429974U, 0x004299C8U, 0x00429960U, 0x004299C8U, 0x0042999CU, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299C8U, 0x004299B0U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E31B4_10[] = {0x80, 0x0D, 0x10, 0x4C, 0x80, 0x0D, 0x6F, 0x08, 0x80, 0x0D, 0xB3, 0xD4, 0x80, 0x0D, 0xF1, 0x90};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE078_C[] = {0x80, 0x0D, 0x16, 0xAC, 0x80, 0x0D, 0x69, 0x9C, 0x80, 0x0D, 0xAD, 0xD4};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DCDC0_14[] = {0x00409580U, 0x00409600U, 0x00409600U, 0x00409500U, 0x00409480U};
#endif
