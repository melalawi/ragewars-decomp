#ifndef UNBAKE_SPAN_16E000_CODE_8043BD50_H
#define UNBAKE_SPAN_16E000_CODE_8043BD50_H
#include "span_16E000/types.h"
#include "../types.h"
struct ResultsPlayerPanel;
struct State_func_8043BF28_de;
struct State_func_8043BF28_de {
    void *screen;
    void *menu;
    struct ResultsPlayerPanel players[4];
    char pad1348[0x10];
    int phase;
    int timer;
    char pad1360[8];
    int next;
};
/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0M0JGMjhfZGUgewogICAgdm9pZCAqc2NyZWVuOwogICAgdm9pZCAqbWVudTsKICAgIHN0cnVjdCBSZXN1bHRzUGxheWVyUGFuZWwgcGxheWVyc1s0XTsKICAgIGNoYXIgcGFkMTM0OFsweDEwXTsKICAgIGludCBwaGFzZTsKICAgIGludCB0aW1lcjsKICAgIGNoYXIgcGFkMTM2MFs4XTsKICAgIGludCBuZXh0Owp9Ow== */

struct Entry_func_8043BBB0_de;
struct Entry_func_8043BBB0_de;
struct Entry_func_8043BBB0_de {
    char pad[0x4B0];
    s32 state;
    s32 selection;
    s32 values[6];
};

/* unbake evidence input: c3RydWN0IEVudHJ5X2Z1bmNfODA0M0JCQjBfZGU7CnN0cnVjdCBFbnRyeV9mdW5jXzgwNDNCQkIwX2RlIHsKICAgIGNoYXIgcGFkWzB4NEIwXTsKICAgIHMzMiBzdGF0ZTsKICAgIHMzMiBzZWxlY3Rpb247CiAgICBzMzIgdmFsdWVzWzZdOwp9Owo= */

struct Entry_func_8043BCC0_de;
struct Entry_func_8043BCC0_de;
struct Entry_func_8043BCC0_de {
    char pad[0x4B0];
    s32 state;
    char pad4B4[0x4D4 - 0x4B4];
    s32 nextActive;
};

/* unbake evidence input: c3RydWN0IEVudHJ5X2Z1bmNfODA0M0JDQzBfZGU7CnN0cnVjdCBFbnRyeV9mdW5jXzgwNDNCQ0MwX2RlIHsKICAgIGNoYXIgcGFkWzB4NEIwXTsKICAgIHMzMiBzdGF0ZTsKICAgIGNoYXIgcGFkNEI0WzB4NEQ0IC0gMHg0QjRdOwogICAgczMyIG5leHRBY3RpdmU7Cn07Cg== */

struct Entry_func_8043BBB0_de;
struct Screen_func_8043BBB0_de;
struct Entry_func_8043BBB0_de;
struct Screen_func_8043BBB0_de;
struct Screen_func_8043BBB0_de {
    struct Entry_func_8043BBB0_de entries[4];
};

/* unbake evidence input: c3RydWN0IEVudHJ5X2Z1bmNfODA0M0JCQjBfZGU7CnN0cnVjdCBTY3JlZW5fZnVuY184MDQzQkJCMF9kZTsKc3RydWN0IFNjcmVlbl9mdW5jXzgwNDNCQkIwX2RlIHsKICAgIHN0cnVjdCBFbnRyeV9mdW5jXzgwNDNCQkIwX2RlIGVudHJpZXNbNF07Cn07Cg== */

struct State_func_8043BF28_de;
typedef struct State_func_8043BF28_de State_func_8043BF28_de;
extern s32 func_8043BFF0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8043C2D4_de(s32 *record);
extern s32 func_8043C2E0_de(s32 *record);
#endif
