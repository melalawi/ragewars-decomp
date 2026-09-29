#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern char D_8010510C;

typedef struct func_80254E28_S1 func_80254E28_S1;
struct func_80254E28_S1 {
    char pad0[0x10];
    s32 unk10;
};

void func_80254E28(s32 arg0, void *arg1) {
    func_80255E78(&D_8010510C, arg1);
    ((func_80254E28_S1 *)(arg1))->unk10 = 0;
    func_80255C58((char *)&D_8010510C - 0x14, (s32) arg1);
}
