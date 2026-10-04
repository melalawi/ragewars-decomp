#ifndef UNBAKE_SPAN_16E000_CODE_804233DC_H
#define UNBAKE_SPAN_16E000_CODE_804233DC_H
#include "span_16E000/types.h"
#include "../types.h"
struct Rec_func_80424B90_de;
struct Rec_func_80424B90_de;
typedef struct Rec_func_80424B90_de Rec_func_80424B90_de;

/* unbake evidence input: c3RydWN0IFJlY19mdW5jXzgwNDI0QjkwX2RlOwp0eXBlZGVmIHN0cnVjdCBSZWNfZnVuY184MDQyNEI5MF9kZSBSZWNfZnVuY184MDQyNEI5MF9kZTsK */

struct State_func_80423328_de;
struct State_func_80423328_de {
    s32 unk0;
    char pad4[0x1C];
    s32 unk20;
};
/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MjMzMjhfZGUgewogICAgczMyIHVuazA7CiAgICBjaGFyIHBhZDRbMHgxQ107CiAgICBzMzIgdW5rMjA7Cn07 */

struct Player_func_80425014_de;
struct Player_func_80425014_de;
struct Player_func_80425014_de {
    char pad0[0xF];
    u8 slot;
    char pad10[0x17 - 0x10];
    u8 count;
    char pad18[0x125 - 0x18];
    u8 flags[4][5];
    char pad139[0x190 - 0x139];
};

/* unbake evidence input: c3RydWN0IFBsYXllcl9mdW5jXzgwNDI1MDE0X2RlOwpzdHJ1Y3QgUGxheWVyX2Z1bmNfODA0MjUwMTRfZGUgewogICAgY2hhciBwYWQwWzB4Rl07CiAgICB1OCBzbG90OwogICAgY2hhciBwYWQxMFsweDE3IC0gMHgxMF07CiAgICB1OCBjb3VudDsKICAgIGNoYXIgcGFkMThbMHgxMjUgLSAweDE4XTsKICAgIHU4IGZsYWdzWzRdWzVdOwogICAgY2hhciBwYWQxMzlbMHgxOTAgLSAweDEzOV07Cn07Cg== */

struct Rec_func_80424B90_de;
struct Rec_func_80424B90_de;
struct Rec_func_80424B90_de {
    char pad0[2];
    s16 unk2;
    s16 unk4;
    char pad6[0x96 - 6];
};

/* unbake evidence input: c3RydWN0IFJlY19mdW5jXzgwNDI0QjkwX2RlOwpzdHJ1Y3QgUmVjX2Z1bmNfODA0MjRCOTBfZGUgewogICAgY2hhciBwYWQwWzJdOwogICAgczE2IHVuazI7CiAgICBzMTYgdW5rNDsKICAgIGNoYXIgcGFkNlsweDk2IC0gNl07Cn07Cg== */

struct Screen_func_80423828_de;
struct Screen_func_80423828_de;
struct Screen_func_80423828_de {
    char pad0[0x1C];
    s32 shown;
    char pad20[0x30 - 0x20];
    s32 mode;
    s32 next_mode;
    char pad38[0x44 - 0x38];
    void *window;
    char pad48[0x4C - 0x48];
    void *second_window;
    char pad50[0x60 - 0x50];
    s32 timer;
};

/* unbake evidence input: c3RydWN0IFNjcmVlbl9mdW5jXzgwNDIzODI4X2RlOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MjM4MjhfZGUgewogICAgY2hhciBwYWQwWzB4MUNdOwogICAgczMyIHNob3duOwogICAgY2hhciBwYWQyMFsweDMwIC0gMHgyMF07CiAgICBzMzIgbW9kZTsKICAgIHMzMiBuZXh0X21vZGU7CiAgICBjaGFyIHBhZDM4WzB4NDQgLSAweDM4XTsKICAgIHZvaWQgKndpbmRvdzsKICAgIGNoYXIgcGFkNDhbMHg0QyAtIDB4NDhdOwogICAgdm9pZCAqc2Vjb25kX3dpbmRvdzsKICAgIGNoYXIgcGFkNTBbMHg2MCAtIDB4NTBdOwogICAgczMyIHRpbWVyOwp9Owo= */

struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_804241BC_de;
struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_804241BC_de;
struct State_func_804241BC_de {
    struct Menu_func_804241BC_de *menu;
    char pad4[0x8 - 0x4];
    struct Frame_func_804217D4_de *list;
    s32 opening;
    char pad10[0x14 - 0x10];
    s32 delay;
    s32 target;
};

/* unbake evidence input: c3RydWN0IEZyYW1lX2Z1bmNfODA0MjE3RDRfZGU7CnN0cnVjdCBNZW51X2Z1bmNfODA0MjQxQkNfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDI0MUJDX2RlOwpzdHJ1Y3QgU3RhdGVfZnVuY184MDQyNDFCQ19kZSB7CiAgICBzdHJ1Y3QgTWVudV9mdW5jXzgwNDI0MUJDX2RlICptZW51OwogICAgY2hhciBwYWQ0WzB4OCAtIDB4NF07CiAgICBzdHJ1Y3QgRnJhbWVfZnVuY184MDQyMTdENF9kZSAqbGlzdDsKICAgIHMzMiBvcGVuaW5nOwogICAgY2hhciBwYWQxMFsweDE0IC0gMHgxMF07CiAgICBzMzIgZGVsYXk7CiAgICBzMzIgdGFyZ2V0Owp9Owo= */

struct State_func_804242D4_de;
struct State_func_804242D4_de;
struct State_func_804242D4_de {
    void *first;
    char pad4[0x18 - 4];
    s32 value;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MjQyRDRfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDI0MkQ0X2RlIHsKICAgIHZvaWQgKmZpcnN0OwogICAgY2hhciBwYWQ0WzB4MTggLSA0XTsKICAgIHMzMiB2YWx1ZTsKfTsK */

struct State_func_80423328_de;
typedef struct State_func_80423328_de State_func_80423328_de;
extern s32 func_8042343C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80423758_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_804239B0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80424348_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80424B90_de(void);
#endif
