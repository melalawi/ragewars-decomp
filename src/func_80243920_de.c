#include "span_1000/code_80242BE0.h"
#include "span_1000/types.h"
#include "types.h"









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
