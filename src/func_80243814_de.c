#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802412C0.h"
#include "common/types_06e4f7ef1f9e.h"
#include "types.h"

/** Swap two pairs of words. */
void func_80243814_de(struct Shape_func_802764D4_de_2 *arg0, struct Shape_func_802764D4_de_2 *arg1) {
    struct Shape_func_802764D4_de_2 temporary = *arg0;
    *arg0 = *arg1;
    *arg1 = temporary;
}

s32 func_80243850_de(void *arg0, void *arg1) {
    s32 var_v0;
    var_v0 = 1;
    if ((((struct func_802077F4_S2 *) ((s8 *) arg0))->unk4) < (((struct func_802077F4_S2 *) ((s8 *) arg1))->unk4)) {
        var_v0 = -1;
    }
    return var_v0;
}

extern void func_8026F620_de(void *, void *, void *);
extern char *func_8028FDB4_de(s32 *, s32);
extern void func_80242FE8_de(void *arg0, void *arg1);






void func_80243874_de(void *arg0) {
    void *temp_a1;
    void **temp_s0;
    void *temp_s0_2;
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_s0;

    temp_a1 = ((func_80243864_S1 *)(arg0))->unk58;
    temp_s0 = ((func_80243864_S2 *)(temp_a1))->unkB4;
    if (temp_s0 != 0) {
        func_8026F620_de(&((func_80243864_S1 *)(arg0))->unk64, &((func_80243864_S2 *)(temp_a1))->unk68, (char *) arg0 + 0xC);
        temp_s0_2 = *temp_s0;
        ((func_80243864_S1 *)(arg0))->unkA4 = func_8028FDB4_de(temp_s0_2, 0);
        temp_v0 = func_8028FDB4_de(temp_s0_2, 2);
        temp_s1 = *temp_v0;
        var_s0 = 0;
        if (temp_s1 > 0) {
            do {
                func_80242FE8_de(arg0, func_8028FDB4_de((void *) temp_v0, var_s0));
                var_s0 += 1;
            } while (var_s0 < temp_s1);
        }
    }
}

extern s32 D_8011BDC8;
extern void *func_8028B2F8_de(void *, u16 *);
extern void func_80240CAC_de(QueryE0 *arg0);
extern s32 func_8023E8D4_de(ActorB0 *, QueryE0 *, s32);








void func_80243920_de(ActorB0 *actor) {
    QueryE0 query;
    u8 *data;
    s32 *flags;
    void *resource;
    s32 i;
    f32 height;

    data = actor->data;
    flags = actor->flags;
    if (data != 0) {
        resource = func_8028B2F8_de(&D_8011BDC8, (u16 *)data);
        if (resource != 0) {
          if ((*flags & 8) != 0) {
           if ((*flags & 0x100000) == 0) {
            query.word14 = 3;
            for (i = 0; i < 3; i++) {
                query.vectors[2 - i].x = ((func_80275120_S1 **)data)[i + 1]->unk0;
                query.vectors[2 - i].y = ((func_80275120_S1 **)data)[i + 1]->unkC +
                                         ((FloatState20 *)(actor))->unk_1C;
                query.vectors[2 - i].z = ((func_80275120_S1 **)data)[i + 1]->unk8;
            }
            func_80240CAC_de(&query);
            height = query.result.y;
            if ((0.10000000149011612f) < height) {
                query.word0 = 5;
                query.word4 = ((struct func_80232C78_S4 *) flags)->unk18;
                query.word8 = ((ObjectState7 *)(flags))->unk_6;
                query.input = 0;
                query.index = -1;
                query.word10 = 0;
                if ((((func_8023ECAC_S2 *)(resource))->unk44 & 0x400000) != 0) {
                    query.wordC = 7;
                } else if ((((func_8023ECAC_S2 *)(resource))->unk52 & 0x80) != 0) {
                    query.wordC = 8;
                } else {
                    query.wordC = 1;
                }
                func_8023E8D4_de(actor, &query, 1);
            }
           }
          }
        }
    }
}
