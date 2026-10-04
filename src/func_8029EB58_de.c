#include "span_1000/code_8029F304.h"
#include "types.h"

void func_8029EB58_de(f32 *arg0) {
    s32 i;
    s32 j;
    s32 offset1;
    s32 offset2;
    f32 temp;

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            offset2 = j * 16 + i * 4;
            offset1 = i * 16 + j * 4;
            temp = *(f32 *)((u8 *)arg0 + offset2);
            *(f32 *)((u8 *)arg0 + offset2) =
                *(f32 *)((u8 *)arg0 + offset1);
            *(f32 *)((u8 *)arg0 + offset1) = temp;
        }
    }
}
