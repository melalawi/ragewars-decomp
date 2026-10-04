#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "types.h"








void func_802174E4_de(void *arg0, void *unused1, Output80216D3C *arg2) {
    Triple local1;
    Triple local2;

    local1 = ((func_80204EA8_S1 *)(arg0))->unk8;
    local2.x = 0;
    local2.y = 0;
    local2.z = 0;
    arg2->type = 3;
    arg2->unk4 = 0;
    arg2->unk8 = 0;
    arg2->first = local1;
    arg2->second = local2;
    arg2->unk24 = 0;
    local2.y = 0;
    local1.y = 0;
    arg2->third = local1;
    arg2->fourth = local2;
    arg2->unk40 = 0;
}
