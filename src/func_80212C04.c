#include "basetypes.h"

extern void *func_8022A82C(char *);
extern s32 func_80209874(void *, s32);
extern void func_80211020(void *);
extern void func_80209948(s32 *, s32);
extern void func_80208410(void *);
extern void func_80208EB0(s32 *);
extern char D_80145040;

typedef struct func_80212C04_S1 func_80212C04_S1;
typedef struct func_80212C04_S2 func_80212C04_S2;
struct func_80212C04_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212C04_S2 {
    char pad0[0x1454];
    s32* unk1454;
};

void func_80212C04(void *arg0) {
    s32 *rec;
    void *v0;

    rec = ((func_80212C04_S2 *)(((func_80212C04_S1 *)(arg0))->unk1D8))->unk1454;
    v0 = func_8022A82C(&D_80145040);
    if (v0 == (void *) *rec) {
        func_80209874(rec, 10);
        return;
    }
    if (v0 != 0) {
        func_80209874(rec, 2);
        return;
    }
    func_80211020(rec);
    func_80209948(rec, rec[3]);
    func_80208410(rec);
    func_80208EB0(rec);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C40A8_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9258_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C421C_4 = 1.26999998f;
const float unbake_rodata_800C4220_4 = 2.14748365e+09f;
const float unbake_rodata_800C4224_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4210_4 = 1.0f;
const float unbake_rodata_800C4214_4 = 0.800000012f;
const float unbake_rodata_800C4218_4 = 0.00999999978f;
const float unbake_rodata_800C421C_4 = 1.0f;
const float unbake_rodata_800C4220_4 = 1.0f;
const float unbake_rodata_800C4224_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4160_8 = 4294967296.0;
#endif
