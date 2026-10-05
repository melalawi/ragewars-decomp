#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80206258.h"
#include "types.h"
/* Spawns effect kind at an actor's position through func_8028FFD0_de in D_80131600's list: kind 0xBD7
   is skipped while both of D_801468A0's flags at 0x78 and 0x80 are set, and kind 0x1388 is offset by
   the variant byte at D_800E4680 when option D_801462D5 is 1 (skipped for variant 0); a spawned node
   has its word at 0x1A0 cleared, takes one charge from the owner and starts effect 0x11D at its own
   position through func_80216288_de. */







extern char D_8012D540;


extern Settings D_801427E0;
extern u8 D_80142215;
extern u8 *D_800E0630;
extern func_80204EA8_S1 *func_8028FFD0_de(char *, void *, s32, Triple, Triple, s32, s32);
extern void func_80216288_de(func_80204EA8_S1 *, s32, Triple, s32);








void func_802062E0_de(void *actor, void *owner, Params params, s32 kind) {
    func_80204EA8_S1 *node;
    Settings *settings;

    if (kind == 0xBD7) {
        settings = &D_801427E0;
        if (settings->flag78 != 0 && settings->flag80 != 0) {
            return;
        }
    }
    if (kind == 0x1388 && D_80142215 == 1) {
        kind = *D_800E0630 + 0x1388;
        if (kind == 0x1388) {
            return;
        }
    }
    node = func_8028FFD0_de(&D_8012D540, &((func_802062E0_S1 *)(owner))->unk124, kind,
                         ((func_802062E0_S2 *)(actor))->unk1C, params.v, params.w, 0);
    if (node != 0) {
        ((func_802062E0_S3 *)(node))->unk1A0 = 0;
        ((func_802062E0_S1 *)(owner))->unk128 -= 1;
        func_80216288_de(node, 0x11D, node->unk8, 0);
    }
}
