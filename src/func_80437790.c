/* Handles menu selection and updates the active menu state. */
#include "basetypes.h"

#if defined(VERSION_DE)
#define VALUE_13A 0x138
#elif defined(VERSION_EU_X)
#define VALUE_13A 0x13E
#else
#define VALUE_13A 0x13A
#endif

typedef struct {s32 unk0; char pad[12]; s32 unk10;} Menu;
extern Menu *D_800E5780; extern u8 D_80102B0F, D_80102B7E, D_80146418; void func_8029A73C(void); s32 func_8029AA08(void); s32 func_80265670(void *,s32); void func_8041A4B0(s32,s32);
s32 func_80437790(void) {
    s32 temp_v0;
    s32 var_v0;

    func_8029A73C();
    temp_v0 = func_8029AA08();
    switch (temp_v0) {                              /* irregular */
    case VALUE_13A + 2:
        D_800E5780->unk10 = -1;
        break;
    case VALUE_13A + 1:
        if (func_80265670(&D_80102B7E, 0) == 0) {
            D_800E5780->unk10 = 7;
        } else {
            D_800E5780->unk10 = 0x1E;
        }
        break;
    case VALUE_13A:
        D_80146418 = D_80102B0F;
        D_800E5780->unk10 = 0xA;
        break;
    }
    func_8041A4B0(D_800E5780->unk0, 2);
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB0F_1[] = {0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB0F_1[] = {0xEB};
#endif
