#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8024BA6C.h"
#include "types.h"





extern f32 func_802B7130_de(f32 angle);
extern f32 func_802B6560_de(f32 angle);
extern Vec3 *func_80275BC8_de(Vec3 *out, Node75 *node);




s32 func_8024BD08_de(void *arg0) {
    Vec3 direction;
    Node75 *node;
    f32 upper;
    f32 upperNext;
    f32 lower;
    f32 lowerNext;
    f32 sine;
    f32 cosine;

    node = ((func_8024BCF8_S1 *)(arg0))->unk14;
    if (node != 0) {
        upper = node->cur->y;
        if (node->prev->y <= upper) {
        } else {
            upper = node->prev->y;
        }
        upperNext = node->next->y;
        if (upper <= upperNext) {
        } else {
            upperNext = upper;
        }
        lower = node->cur->y;
        if (lower <= node->prev->y) {
        } else {
            lower = node->prev->y;
        }
        lowerNext = node->next->y;
        if (lowerNext <= lower) {
        } else {
            lowerNext = lower;
        }
        if (upperNext < ((func_8024BCF8_S1 *)(arg0))->unkC) {
            return 0;
        }
        if (((func_8024BCF8_S1 *)(arg0))->unkC < lowerNext) {
            return 0;
        }
        sine = func_802B7130_de(((func_8024BCF8_S1 *)(arg0))->unk6C);
        cosine = func_802B6560_de(((func_8024BCF8_S1 *)(arg0))->unk6C);
        func_80275BC8_de(&direction, node);
        if (direction.x * -sine + direction.z * -cosine < 0.0f) {
            return 1;
        }
    }
    return 0;
}
