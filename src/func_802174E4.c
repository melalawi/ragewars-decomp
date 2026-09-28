#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 h0;
    s32 h1;
    s32 h2;
    Triple partA;
    Triple partB;
    s32 extra1;
    Triple partC;
    Triple partD;
    s32 extra2;
} Dest;

void func_802174E4(void *arg0, void *unused1, Dest *arg2) {
    Triple local1;
    Triple local2;

    local1 = *(Triple *)((char *)arg0 + 0x8);
    local2.a = 0;
    local2.b = 0;
    local2.c = 0;
    arg2->h0 = 3;
    arg2->h1 = 0;
    arg2->h2 = 0;
    arg2->partA = local1;
    arg2->partB = local2;
    arg2->extra1 = 0;
    local2.b = 0;
    local1.b = 0;
    arg2->partC = local1;
    arg2->partD = local2;
    arg2->extra2 = 0;
}
