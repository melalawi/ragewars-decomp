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
