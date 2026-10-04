#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
#ifndef FUNC_8021A78C_DE
#define FUNC_8021A78C_DE
#include "types.h"
#ifndef UNBAKE_FUNC_8021A78C_DE_H
#define UNBAKE_FUNC_8021A78C_DE_H
#include "types.h"





































#endif

#include "types.h"



#endif


#include "types.h"





extern char D_8010AEB8[];
extern char D_8010B328[];


extern void func_8026367C_de(void *arg0, void *arg1);
extern f32 func_8022ADBC_de(void *arg0);
extern void func_802227F4_de(void *, void *, s32);







void func_8021A78C_de(void *arg0) {
    char *object = arg0;
    void *attributes;
    void *state = object + 0x688;
    f32 zero;
    f32 default_value;
    f32 tail_value;
    Vec3 *tail_vector;
    s32 type;

    if (((ObjectLinks16D8 *)(object))->unk_1450 != 0) {
        attributes = D_8010AEB8;
    } else {
        s32 index = ((ObjectLinks16D8 *)(object))->unk_5D4;
        attributes = (void *)(index << 4);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 3);
        attributes = (char *)attributes + index;
        attributes = (void *)((s32)attributes << 2);
        attributes = D_8010B328 + (s32)attributes;
    }
    func_8026367C_de(state, attributes);

    ((ObjectLinks16D8 *)(object))->unk_6C0 = 0;
    ((ObjectLinks16D8 *)(object))->unk_6C4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_6C8 = 0;
    ((ObjectLinks16D8 *)(object))->unk_6CC = 0;
    ((ObjectLinks16D8 *)(object))->unk_6D0 = 1;
    ((ObjectLinks16D8 *)(object))->unk_6D4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_6D8 = 0;
    ((ObjectLinks16D8 *)(object))->unk_6DC = 0;
    ((ObjectLinks16D8 *)(object))->unk_6E4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_758 = 0;
    ((ObjectLinks16D8 *)(object))->unk_75C = 0;
    ((ObjectLinks16D8 *)(object))->unk_11B4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_11B8 = 0;
    ((ObjectLinks16D8 *)(object))->unk_708 = 0;
    ((ObjectLinks16D8 *)(object))->unk_70C = 0;
    ((ObjectLinks16D8 *)(object))->unk_710 = 0;
    ((ObjectLinks16D8 *)(object))->unk_714 = 0;
    ((ObjectLinks16D8 *)(object))->unk_724 = 0;
    ((ObjectLinks16D8 *)(object))->unk_728 = 0;
    ((ObjectLinks16D8 *)(object))->unk_72C = 0;
    ((ObjectLinks16D8 *)(object))->unk_730 = 0;
    ((ObjectLinks16D8 *)(object))->unk_734 = 0;
    ((ObjectLinks16D8 *)(object))->unk_738 = 0;
    ((ObjectLinks16D8 *)(object))->unk_73C = 0;
    ((ObjectLinks16D8 *)(object))->unk_740 = func_8022ADBC_de(object);
    default_value = D_800C22F8_de;
    ((ObjectLinks16D8 *)(object))->unk_744 = 0;
    (&((ObjectLinks16D8 *)(object))->unk_748)->x = (&((ObjectLinks16D8 *)(object))->unk_748)->y = (&((ObjectLinks16D8 *)(object))->unk_748)->z = 0;
    ((ObjectLinks16D8 *)(object))->unk_754 = default_value;
    ((ObjectLinks16D8 *)(object))->unk_780 = 0;
    ((ObjectLinks16D8 *)(object))->unk_784 = default_value;
    ((ObjectLinks16D8 *)(object))->unk_6E8 = ((ObjectLinks16D8 *)(object))->unk_8;
    ((ObjectLinks16D8 *)(object))->unk_6F8 = ((ObjectLinks16D8 *)(object))->unk_8;
    ((ObjectLinks16D8 *)(object))->unk_658 = 0;
    ((ObjectLinks16D8 *)(object))->unk_668 = 0;
    ((ObjectLinks16D8 *)(object))->unk_66C = 0;
    if (((ObjectLinks16D8 *)(object))->unk_18.v0 != 0) {
        ((ObjectLinks16D8 *)(object))->unk_6F4.v0 = ((struct Model_func_80223E34_de *) ((ObjectLinks16D8 *) object)->unk_18.v1)->height;
    } else {
        ((ObjectLinks16D8 *)(object))->unk_6F4.v1 = 0;
    }
    tail_vector = &((ObjectLinks16D8 *)(object))->unk_7D8;
    ((ObjectLinks16D8 *)(object))->unk_7B0.v0 = 0;
    zero = ((ObjectLinks16D8 *)(object))->unk_7B0.v1;
    tail_value = D_800C22FC_de;
    type = 2;
    ((ObjectLinks16D8 *)(object))->unk_718 = 0;
    ((ObjectLinks16D8 *)(object))->unk_71C = 0;
    ((ObjectLinks16D8 *)(object))->unk_720 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7EC = 0;
    ((ObjectLinks16D8 *)(object))->unk_7F0 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7E8 = 0;
    ((ObjectLinks16D8 *)(object))->unk_788 = 0;
    ((ObjectLinks16D8 *)(object))->unk_78C = 0;
    ((ObjectLinks16D8 *)(object))->unk_790 = 0;
    ((ObjectLinks16D8 *)(object))->unk_794 = 0;
    ((ObjectLinks16D8 *)(object))->unk_798 = -1;
    ((ObjectLinks16D8 *)(object))->unk_79C = 0;
    ((ObjectLinks16D8 *)(object))->unk_7A0 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7A4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7A8 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7AC = 0;
    tail_vector->x = tail_vector->y = tail_vector->z = zero;
    ((ObjectLinks16D8 *)(object))->unk_7E4 = tail_value;
    ((ObjectLinks16D8 *)(object))->unk_7B4 = 0;
    ((ObjectLinks16D8 *)(object))->unk_7B8 = -1;
    ((ObjectLinks16D8 *)(object))->unk_7C0 = zero;
    ((ObjectLinks16D8 *)(object))->unk_7C4 = zero;
    ((ObjectLinks16D8 *)(object))->unk_7C8 = zero;
    ((ObjectLinks16D8 *)(object))->unk_7CC = zero;
    ((ObjectLinks16D8 *)(object))->unk_7D0 = zero;
    ((ObjectLinks16D8 *)(object))->unk_7D4 = zero;
    func_802227F4_de(object, object, type);
    ((ObjectLinks16D8 *)(object))->unk_80C = 0;
    ((ObjectLinks16D8 *)(object))->unk_838 = zero;
    ((ObjectLinks16D8 *)(object))->unk_83C = zero;
    ((ObjectLinks16D8 *)(object))->unk_840 = zero;
    ((ObjectLinks16D8 *)(object))->unk_848 = 0;
    ((struct ObjectState8E *) ((ObjectLinks16D8 *) object)->unk_5D8)->state = 0;
    ((ObjectLinks16D8 *)(object))->unk_704 = zero;
    ((ObjectLinks16D8 *)(object))->unk_16D4 = 0;
}
