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

void func_80283BA0(void *arg0) {
    *(int *)((char *)arg0 + 0x5C) |= 0x20000;
    *(Vec3i *)((char *)arg0 + 8) = D_801041F8.first;
    *(Vec3i *)((char *)arg0 + 0x1C) = D_801041F8.second;
}
