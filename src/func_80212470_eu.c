#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"
extern s32 func_802744D4_de(void);
extern void func_80209988_de(void *object);








void func_80212470_eu(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    s32 r1, r2, r3;

    ((func_80212450_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);

    r1 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk2DC = r2 % 2;

    r3 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk320 = -1;
    ((func_80212450_S3 *)(inner))->unk318 = 0;
    ((func_80212450_S3 *)(inner))->unk31C = 0;
    ((func_80212450_S3 *)(inner))->unk2E0 = r3 % 250000 + 360000;
}
