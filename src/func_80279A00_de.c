#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct Owner Owner;

extern void *func_802833D0_de(void *arg0);
extern s32 func_8022B178_de(void *arg0);
extern void func_80229554_de(void *arg0, s32 arg1, s32 arg2);
extern void func_802227F4_de(void *, void *, s32);
extern s32 func_80284434_de(void *arg0);
extern void func_8025E1C4_de(s32);










void func_80279A00_de(void *arg0) {
    char *actor = arg0;
    char *state;
    char *owner;
    char *resource;

    if (((ObjectLinks1BC *)(actor))->unk_4 != 0x414) {
        if (((ObjectLinks1BC *)(actor))->unk_4 == 0x42D) {
            state = func_802833D0_de(actor);
            if (((IntegerState5AC *)(state))->unk_5A8 != 0 && func_8022B178_de(state) == 0) {
                func_80229554_de(state, ((IntegerState5AC *)(state))->unk_5A4,
                               ((IntegerState5AC *)(state))->unk_5A8);
            }
            goto reset_state;
        }
    } else {
reset_state:
        state = func_802833D0_de(actor);
        ((IntegerState5AC *)(state))->unk_5A8 = 0;
        if (func_8022B178_de(state) == 0) {
            ((IntegerState5AC *)(state))->unk_59C = 1;
        }
    }

    if (((ObjectLinks1BC *)(actor))->unk_1B9 == 8 ||
        ((ObjectLinks1BC *)(actor))->unk_1BA == 8 ||
        ((ObjectLinks1BC *)(actor))->unk_1B8 == 8) {
        resource = ((ObjectLinks1BC *)(actor))->unk_12C;
        if (resource != 0 && *(u8 *)resource == 1 &&
            (((func_80232FE8_S1 *)(resource))->unk100 & 0x300000) != 0) {
            func_802227F4_de(((func_80232FE8_S1 *)(resource))->unk1D8, resource, 2);
        }
    }

    func_80284434_de(actor);
    owner = ((ObjectLinks1BC *)(actor))->unk_118;
    if (((struct ObjectStateC4 *) ((Owner *) owner)->track)->unk_BE != 0xFFFF) {
        func_8025E1C4_de((s32)actor);
    }
    if (((struct ObjectStateC4 *) ((Owner *) owner)->track)->unk_C2 != 0xFFFF) {
        func_8025E1C4_de((s32)actor);
    }
}
