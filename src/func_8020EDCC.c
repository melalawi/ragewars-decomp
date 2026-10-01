/** Reset the float field of each occupied player slot's table entry to the default value. */
extern char D_8013B364[];
extern float D_800C6FCC;
extern char *func_8020CFE0(char *, int);

typedef struct Actor {
    char pad0[0x1D8];
    char **info;
} Actor;

typedef struct func_8020EDCC_S1 func_8020EDCC_S1;
struct func_8020EDCC_S1 {
    char pad0[0x1454];
    char* unk1454;
};

void func_8020EDCC(char *arg0) {
    char *table = D_8013B364;
    int i;
    float value;

    if (table != 0) {
        value = D_800C6FCC;
        for (i = 0; i < 10; i++) {
            Actor *a = *(Actor **)(arg0 + 0x3C + i * 4);
            if (a != 0) {
                *(float *)(func_8020CFE0(table, *(int *)(((func_8020EDCC_S1 *)(a->info))->unk1454 + 4)) + 0x18) = value;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E0C_4 = 51200.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6FCC_4 = 51200.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C217C_4 = 51200.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C21BC_4 = 51200.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1EDC_4 = 51200.0f;
#endif
