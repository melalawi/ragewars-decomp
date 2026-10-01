#include "basetypes.h"
typedef void (*Handler8029382C)(void *);

extern void func_80264CD8(void);
extern void func_80292910(void *arg0);
extern s32 D_800D2974;
extern s32 D_800D2984;
extern char D_800D29DC[];
extern s32 D_80146D68;

typedef struct func_8029382C_S1 func_8029382C_S1;
struct func_8029382C_S1 {
    char pad0[0x26DB8];
    s32 unk26DB8;
};

void func_8029382C(void *arg0) {
    s32 field;
    Handler8029382C fn;

    if (D_800D2974 != 0) {
        D_800D2974 = 0;
    }
    func_80264CD8();
    field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    fn = *(Handler8029382C *)(D_800D29DC + field * 0xC);
    if (fn != 0) {
        fn(arg0);
        field = ((func_8029382C_S1 *)(arg0))->unk26DB8;
    }
    if (field != 0x14 && D_80146D68 != 0) {
        D_80146D68 -= 1;
        func_80292910(arg0);
    }
    D_800D2984 += 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD69C_4[] = {0x00, 0x29, 0x3D, 0x58};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D29DC_4[] = {0x00, 0x29, 0x3E, 0x60};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE36C_4[] = {0x00, 0x29, 0x3F, 0x80};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CED3C_4[] = {0x00, 0x29, 0x3F, 0xB0};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD78C_4[] = {0x00, 0x29, 0x3E, 0x6C};
#endif
