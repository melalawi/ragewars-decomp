#include "span_1000/code_8023B9A0.h"
#include "types.h"
#include "types.h"
extern u16 D_800FFFA0[];
#include "types.h"
/* Array views share measured storage: FF F2A - FF B5B = 0x3CF;
 * the two four-byte-stride index streams occupy adjacent bytes. */
extern union ObjectState1000 D_800FFB5B;
int func_8023BC74_de(void) {
    u16 previous;
    s16 index;
    previous = D_800FFFA0[0];
    D_800FFFA0[0] = previous + 1;
    if ((s16)(previous + 1) >= 24) {
        D_800FFFA0[0] = D_800FFFA0[1];
    }
    index = (s16)previous;
    if (D_800FFB5B.first.indices[index * 4] != 0xFF) {
        D_800FFB5B.marks[D_800FFB5B.first.indices[index * 4] << 4] = 0xFF;
        D_800FFB5B.first.indices[index * 4] = 0xFF;
    }
    if (D_800FFB5B.second.indices[index * 4] != 0xFF) {
        D_800FFB5B.marks[D_800FFB5B.second.indices[index * 4] << 4] = 0xFF;
        D_800FFB5B.second.indices[index * 4] = 0xFF;
    }
    return index;
}
