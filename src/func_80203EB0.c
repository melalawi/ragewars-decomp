/* Returns whether a player may act on a target: never on its own linked object or an inactive
   target, always when the team rule D_801468C4 is off, otherwise only across different teams. */
typedef struct {
    char pad[0x92];
    unsigned char team;
} Info;

typedef struct Actor {
    char pad[0x1D8];
    struct Actor *linked;
    char pad1DC[0x5D8 - 0x1DC];
    Info *info;
    char pad5DC[0x5E4 - 0x5DC];
    int active;
} Actor;

extern int D_801468C4;
int func_80203EB0(Actor *self, int unused, Actor *target) {
    Actor *linked = self->linked;
    if (linked == target || target->active == 0) {
        return 0;
    }
    if (D_801468C4 != 0) { if (linked->info->team == target->info->team) { return 0; } } return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1B54_4 = 3.14159298f;
const float unbake_rodata_800C1B58_4 = 6.28318596f;
const float unbake_rodata_800C1B5C_4 = (-3.14159298f);
const float unbake_rodata_800C1B60_4 = 6.28318596f;
const float unbake_rodata_800C1B64_4 = (-1.0f);
const float unbake_rodata_800C1B68_4 = 1.0f;
const float unbake_rodata_800C1B6C_4 = 0.0174532942f;
const float unbake_rodata_800C1B70_4 = 1.0471977f;
const float unbake_rodata_800C1B74_4 = 1.0471977f;
const float unbake_rodata_800C1B78_4 = 0.52359885f;
const float unbake_rodata_800C1B7C_4 = 0.52359885f;
const float unbake_rodata_800C1B80_4 = 0.5f;
const float unbake_rodata_800C1B84_4 = 0.17453295f;
const float unbake_rodata_800C1B88_4 = 0.17453295f;
const float unbake_rodata_800C1B8C_4 = 0.25f;
const float unbake_rodata_800C1B90_4 = 0.069813177f;
const float unbake_rodata_800C1B94_4 = 0.069813177f;
const float unbake_rodata_800C1B98_4 = 0.125f;
const float unbake_rodata_800C1B9C_4 = 0.100000001f;
const float unbake_rodata_800C1BA0_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6CF0_4 = 10.0f;
const float unbake_rodata_800C6CF4_4 = 0.261799425f;
const float unbake_rodata_800C6CF8_4 = 0.261799425f;
const float unbake_rodata_800C6CFC_4 = 0.5f;
const float unbake_rodata_800C6D00_4 = 1.0f;
const float unbake_rodata_800C6D04_4 = 3.14159274f;
const float unbake_rodata_800C6D08_4 = 1.0f;
const float unbake_rodata_800C6D0C_4 = (-1.0f);
const float unbake_rodata_800C6D10_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E7C_4 = 10.0f;
const float unbake_rodata_800C1E80_4 = 0.261799425f;
const float unbake_rodata_800C1E84_4 = 0.261799425f;
const float unbake_rodata_800C1E88_4 = 0.5f;
const float unbake_rodata_800C1E8C_4 = 1.0f;
const float unbake_rodata_800C1E90_4 = 3.14159274f;
const float unbake_rodata_800C1E94_4 = 1.0f;
const float unbake_rodata_800C1E98_4 = (-1.0f);
const float unbake_rodata_800C1E9C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1EBC_4 = 10.0f;
const float unbake_rodata_800C1EC0_4 = 0.261799425f;
const float unbake_rodata_800C1EC4_4 = 0.261799425f;
const float unbake_rodata_800C1EC8_4 = 0.5f;
const float unbake_rodata_800C1ECC_4 = 1.0f;
const float unbake_rodata_800C1ED0_4 = 3.14159274f;
const float unbake_rodata_800C1ED4_4 = 1.0f;
const float unbake_rodata_800C1ED8_4 = (-1.0f);
const float unbake_rodata_800C1EDC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1BDC_4 = 10.0f;
const float unbake_rodata_800C1BE0_4 = 0.261799425f;
const float unbake_rodata_800C1BE4_4 = 0.261799425f;
const float unbake_rodata_800C1BE8_4 = 0.5f;
const float unbake_rodata_800C1BEC_4 = 1.0f;
const float unbake_rodata_800C1BF0_4 = 3.14159274f;
const float unbake_rodata_800C1BF4_4 = 1.0f;
const float unbake_rodata_800C1BF8_4 = (-1.0f);
const float unbake_rodata_800C1BFC_4 = 1.0f;
#endif
