#include "basetypes.h"
#include "shared/player.h"

extern void func_8023941C(void *arg0);
extern void func_8021EED8(void *arg0, void *arg1);
extern s32 D_800D0EBC;

typedef struct func_8022A37C_S1 func_8022A37C_S1;
typedef SharedPlayer func_8022A37C_S2;
struct func_8022A37C_S1 {
    char pad0[0x20];
    void* unk20;
};


/* Notifies the entity list associated with arg0 about arg1 and calls a handler for each owner. */
void func_8022A37C(void *arg0, void *arg1) {
    void *var_s0;

#if defined(VERSION_US_REV1)
    if (D_800D0EBC != 0) {
#endif
        func_8023941C(arg1);
        var_s0 = ((func_8022A37C_S1 *)(arg0))->unk20;
        if (var_s0 != 0) {
            do {
                if (((func_8022A37C_S2 *)(var_s0))->views5DC.view5DC_0.unk5DC == arg1) {
                    func_8021EED8(var_s0, arg1);
                }
                var_s0 = ((func_8022A37C_S2 *)(var_s0))->views16E0.view16E0_0.unk16E0;
            } while (var_s0 != 0);
        }
#if defined(VERSION_US_REV1)
    }
#endif
}
