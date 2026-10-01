typedef struct {
    int x;
    int y;
    int z;
} Vec3i;

typedef struct {
    Vec3i first;           /* offset 0x0 */
    char pad[0xD0 - 0xC];  /* offset 0xC..0xD0 */
    Vec3i second;          /* offset 0xD0 */
} D801041F8_Layout;

extern D801041F8_Layout D_801041F8;

typedef struct func_80283BA0_S1 func_80283BA0_S1;
struct func_80283BA0_S1 {
    char pad0[0x8];
    Vec3i unk8;
    char pad8[0x1C - 0x8 - sizeof(Vec3i)];
    Vec3i unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vec3i)];
    int unk5C;
};

void func_80283BA0(void *arg0) {
    ((func_80283BA0_S1 *)(arg0))->unk5C |= 0x20000;
    ((func_80283BA0_S1 *)(arg0))->unk8 = D_801041F8.first;
    ((func_80283BA0_S1 *)(arg0))->unk1C = D_801041F8.second;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE1F8_4[] = {0xAF, 0xC3, 0x00, 0x48};
const unsigned char unbake_rodata_800FE1FC_4[] = {0x08, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800FE200_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801001F8_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_801001FC_4[] = {0x00, 0x22, 0xBF, 0xC0};
const unsigned char unbake_rodata_80100200_4[] = {0xDE, 0x03, 0x1D, 0x33};
#endif
