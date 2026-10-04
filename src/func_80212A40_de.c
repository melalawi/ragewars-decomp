#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
extern void func_80209988_de(void *object);








/** Reset the inner record's flag fields, then clear its state via func_80209988_de. */
void func_80212A40_de(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    ((func_8021290C_S3 *)(inner))->unk220 = 0;
    ((func_8021290C_S3 *)(inner))->unkC = -1;
    func_80209988_de(inner);
    ((func_8021290C_S3 *)(inner))->unk2FC = 0;
}
