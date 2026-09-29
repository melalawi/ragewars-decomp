#include "basetypes.h"

/* Clears the words at offsets 0x90 to 0x9C of an object, calls func_8044ED1C and func_802ABD04,
   and loads the two 0x75-entry tables D_800D3080 and D_800D2F94 into offsets 0xC8 and 0x1C8
   through func_802AC34C. */
extern char D_800D3080[];
extern char D_800D2F94[];
extern void func_8044ED1C();
extern void func_802ABD04();
extern void func_802AC34C(void *, void *, s32, void *);

typedef struct func_8044ECB0_S1 func_8044ECB0_S1;
struct func_8044ECB0_S1 {
    char pad0[0x90];
    s32 unk90;
    char pad90[0x94 - 0x90 - sizeof(s32)];
    s32 unk94;
    char pad94[0x98 - 0x94 - sizeof(s32)];
    s32 unk98;
    char pad98[0x9C - 0x98 - sizeof(s32)];
    s32 unk9C;
};

void func_8044ECB0(char *object) {
    ((func_8044ECB0_S1 *)(object))->unk90 = 0;
    ((func_8044ECB0_S1 *)(object))->unk94 = 0;
    ((func_8044ECB0_S1 *)(object))->unk98 = 0;
    ((func_8044ECB0_S1 *)(object))->unk9C = 0;
    func_8044ED1C();
    func_802ABD04();
    func_802AC34C(object, D_800D3080, 0x75, (char *)object + 0xC8);
    func_802AC34C(object, D_800D2F94, 0x75, (char *)object + 0x1C8);
}
