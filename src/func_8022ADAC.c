#include "basetypes.h"

extern f32 D_800C7DF0;
extern f32 D_800C7DF4;

typedef struct func_8022ADAC_S1 func_8022ADAC_S1;
typedef struct func_8022ADAC_S2 func_8022ADAC_S2;
struct func_8022ADAC_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8022ADAC_S2 {
    char pad0[0xF4];
    f32 unkF4;
};

f32 func_8022ADAC(void *arg0) {
    void *temp_v0;

    temp_v0 = ((func_8022ADAC_S1 *)(arg0))->unk18;
    if (temp_v0 != 0) {
        return ((func_8022ADAC_S2 *)(temp_v0))->unkF4 * D_800C7DF4;
    }
    return D_800C7DF0;
}
