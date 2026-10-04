#ifndef UNBAKE_SPAN_1000_CODE_802C1358_H
#define UNBAKE_SPAN_1000_CODE_802C1358_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Ctx;
typedef struct Ctx Ctx;

struct Func802C1F10Node;
typedef struct Func802C1F10Node Func802C1F10Node;

struct Ctx;
struct Ctx {
    Queue_func_802BB420_de *cur;
    s32 f4;
};
struct Func802C1F10Node;
struct Func802C1F10Node {
    s32 field0;
    s32 field4;
    void *field8;
    struct Func802C1F10Node *next;
    u16 field10;
};
extern void func_802BCC90_de(void);
extern void func_802BCD64_de(void);
#endif
