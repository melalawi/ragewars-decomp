#include "common/types.h"
#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
/** Return the index of the link joining two nodes, accepting reversed links of two-way types, or -1. */






static inline int isTwoWay(Link *link) {
    switch (link->type) {
    case 1:
    case 4:
    case 7:
        return 1;
    }
    return 0;
}




int func_8020CC0C_de(Graph *graph, int from, int to) {
    int i;
    Link *link;

    for (i = 0; i < graph->count; i++) {
        link = (Link *)(&((func_8020CC0C_S1 *)(graph->links))->unk8 + i * graph->links->stride);
        if (link->from == from && link->to == to) {
            return i;
        }
        if (link->to == from && link->from == to && isTwoWay(link)) {
            return i;
        }
        if (link->to == from && link->from == to && link->type == 6) {
            return i;
        }
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3564_4 = 10.2399998f;
const float unbake_rodata_800C3568_4 = 30.7199993f;
const float unbake_rodata_800C356C_4 = 0.204799995f;
const float unbake_rodata_800C3570_4 = 1.0f;
const float unbake_rodata_800C3574_4 = 4.09600019f;
const float unbake_rodata_800C3578_4 = 1.04857612f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C86A0_4 = 768.0f;
const float unbake_rodata_800C86A4_4 = 5120.0f;
const float unbake_rodata_800C86A8_4 = 10240.0f;
const float unbake_rodata_800C86AC_4 = 0.25f;
const float unbake_rodata_800C86B0_4 = 0.75f;
const float unbake_rodata_800C86B4_4 = 1.0f;
const float unbake_rodata_800C86B8_4 = 0.5f;
const float unbake_rodata_800C86BC_4 = 16384.0f;
const float unbake_rodata_800C86C0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C35A0_4 = 16.0f;
const float unbake_rodata_800C35A4_4 = 30.0f;
const float unbake_rodata_800C35A8_4 = 30.0f;
const float unbake_rodata_800C35AC_4 = 16.0f;
const float unbake_rodata_800C35B0_4 = 30.0f;
const float unbake_rodata_800C35B4_4 = 30.0f;
const float unbake_rodata_800C35B8_4 = 16.0f;
const float unbake_rodata_800C35BC_4 = 30.0f;
const float unbake_rodata_800C35C0_4 = 30.0f;
const float unbake_rodata_800C35C4_4 = 16.0f;
const float unbake_rodata_800C35C8_4 = 30.0f;
const float unbake_rodata_800C35CC_4 = 30.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C35DC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C35B0_4 = 768.0f;
const float unbake_rodata_800C35B4_4 = 5120.0f;
const float unbake_rodata_800C35B8_4 = 10240.0f;
const float unbake_rodata_800C35BC_4 = 0.25f;
const float unbake_rodata_800C35C0_4 = 0.75f;
const float unbake_rodata_800C35C4_4 = 1.0f;
const float unbake_rodata_800C35C8_4 = 0.5f;
const float unbake_rodata_800C35CC_4 = 16384.0f;
const float unbake_rodata_800C35D0_4 = 2.14748365e+09f;
#endif
