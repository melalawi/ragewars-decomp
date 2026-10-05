#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8029F3A8.h"
#include "types.h"



extern void func_8029C6A8_de(void *arg0, void *arg2);




void func_8029F368_de(void *arg0, Vec3 *arg1, void *arg2, Vec3 *arg3) {
    char *m = (char *) arg0;

    func_8029C6A8_de(arg0, arg2);

    ((func_80272908_S2 *)(m))->unk0 = ((func_80272908_S2 *)(m))->unk0 * arg1->x;
    ((func_80272908_S2 *)(m))->unk4 = ((func_80272908_S2 *)(m))->unk4 * arg1->x;
    ((func_80272908_S2 *)(m))->unk8 = ((func_80272908_S2 *)(m))->unk8 * arg1->x;
    ((func_80272908_S2 *)(m))->unk10 = ((func_80272908_S2 *)(m))->unk10 * arg1->y;
    ((func_80272908_S2 *)(m))->unk14 = ((func_80272908_S2 *)(m))->unk14 * arg1->y;
    ((func_80272908_S2 *)(m))->unk18 = ((func_80272908_S2 *)(m))->unk18 * arg1->y;
    ((func_80272908_S2 *)(m))->unk20 = ((func_80272908_S2 *)(m))->unk20 * arg1->z;
    ((func_80272908_S2 *)(m))->unk24 = ((func_80272908_S2 *)(m))->unk24 * arg1->z;
    ((func_80272908_S2 *)(m))->unk28 = ((func_80272908_S2 *)(m))->unk28 * arg1->z;
    ((func_80272908_S2 *)(m))->unk30 = ((func_80272908_S2 *)(m))->unk30 + arg3->x;
    ((func_80272908_S2 *)(m))->unk34 = ((func_80272908_S2 *)(m))->unk34 + arg3->y;
    ((func_80272908_S2 *)(m))->unk38 = ((func_80272908_S2 *)(m))->unk38 + arg3->z;
}
