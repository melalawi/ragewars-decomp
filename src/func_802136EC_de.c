#include "common/types.h"
#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;


extern void func_80213340_de(void *arg0);
extern s32 func_802744D4_de(void);
extern void *func_8020C994_de(void *, s32);
extern void func_80209988_de(void *arg0);














void func_802136EC_de(void *arg0)
{
    void *actor = ((func_80212828_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;

    ((func_802136EC_S3 *)(actor))->unk220 = 0;
    {
        void *data = ((func_80209B64_S4 *)(*(void **)actor))->unk5D8;
        if (((Record_func_80208158_de *)(data))->display && ((Record_func_80208158_de *)(data))->kind == 12) {
            func_80213340_de(actor);
        } else {
            s32 global_count = D_801372A8;
            s32 *table = &D_801372A4;
            s32 tries = 0;
            s32 candidate;

            if (global_count >= 2) {
                candidate = ((func_802136EC_S3 *)(actor))->unk22C;
loop:
                if (tries < 10) {
                    candidate = func_802744D4_de() % table[1];
                    if (((func_8020CA10_S2 *)(func_8020C994_de(table, candidate)))->unkC & 0x400) {
                        candidate = ((func_802136EC_S3 *)(actor))->unk22C;
                    }
                    tries++;
                    if (candidate != ((func_802136EC_S3 *)(actor))->unk22C) {
                        goto store_both;
                    }
                    goto loop;
                } else {
                    ((func_802136EC_S3 *)(actor))->unk22C = candidate;
                    goto store_c;
                }
            } else {
                candidate = 1;
            }
store_both:
            ((func_802136EC_S3 *)(actor))->unk22C = candidate;
store_c:
            ((func_802136EC_S3 *)(actor))->unkC = candidate;
        }
    }
    func_80209988_de(actor);
    ((func_802136EC_S3 *)(actor))->unk320 = -1;
}
