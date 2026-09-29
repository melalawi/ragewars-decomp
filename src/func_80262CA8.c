#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern s32 D_8013B124;
extern s32 D_8013B110;

typedef struct func_80262CA8_S1 func_80262CA8_S1;
struct func_80262CA8_S1 {
    char pad0[0x174];
    s32 unk174;
    char pad174[0x2F0 - 0x174 - sizeof(s32)];
    s32* unk2F0;
};

s32 func_80262CA8(void *arg0) {
    s32 *counter;

    counter = ((func_80262CA8_S1 *)(arg0))->unk2F0;
    ((func_80262CA8_S1 *)(arg0))->unk174 = 0;
    if (counter != 0) {
        *counter -= 1;
    }
    func_80255E78(&D_8013B124, arg0);
    return func_80255CB4(&D_8013B110, (s32)arg0);
}
