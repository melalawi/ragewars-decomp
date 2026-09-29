#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"
typedef int M2C_UNK;

typedef struct func_802599A8_S1 func_802599A8_S1;
struct func_802599A8_S1 {
    char pad0[0x4];
    M2C_UNK unk4;
    char pad4[0xD8 - 0x4 - sizeof(M2C_UNK)];
    M2C_UNK unkD8;
};

/** Move matching nodes from the active list to the list rooted at offset 0xD8. */
void func_802599A8(void *arg0, s32 arg1) {
    M2C_UNK *temp_a3;
    M2C_UNK *temp_t0;
    M2C_UNK *temp_t1;
    M2C_UNK *var_a2;
    M2C_UNK *temp_v0;

    var_a2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_v0 = &((func_802599A8_S1 *)(arg0))->unk4;
    temp_t1 = &((func_802599A8_S1 *)(arg0))->unkD8;
    if (var_a2 != temp_v0) {
        temp_t0 = temp_v0;
        do {
            temp_a3 = M2C_FIELD(var_a2, M2C_UNK **, 4);
            if (M2C_FIELD(var_a2, s32 *, 0xB0) == arg1) {
                M2C_FIELD(M2C_FIELD(var_a2, M2C_UNK **, 0), M2C_UNK **, 4) = temp_a3;
                *M2C_FIELD(var_a2, M2C_UNK **, 4) = M2C_FIELD(var_a2, M2C_UNK **, 0);
                temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0xD8);
                M2C_FIELD(var_a2, M2C_UNK **, 4) = temp_t1;
                M2C_FIELD(var_a2, M2C_UNK **, 0) = temp_v0;
                M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0xD8), M2C_UNK **, 4) = var_a2;
                M2C_FIELD(arg0, M2C_UNK **, 0xD8) = var_a2;
            }
            var_a2 = temp_a3;
        } while (var_a2 != temp_t0);
    }
}
