#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802106E0.h"









/** Reset the inner record via func_80209988_de, then override two of its fields. */
void func_8021290C_de(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    ((func_8021290C_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);
    ((func_8021290C_S3 *)(inner))->unk2FC = 0;
    ((func_8021290C_S3 *)(inner))->unkC = -1;
}
