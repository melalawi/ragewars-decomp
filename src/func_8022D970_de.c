#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "types.h"



extern s32 func_8024E7DC_de(void *);
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_80271AA8_de(Vec3 *arg0);









void func_8022D970_de(void *arg0, void *arg1) {
    char *o = (char *)arg0;
    char *a1 = (char *)arg1;
    s32 temp_v0;
    Vec3 sp10;
    Vec3 sp20;

    temp_v0 = func_8024E7DC_de(arg1);
    ((func_8022D960_S1 *)(o))->unk7FC = temp_v0;
    if (temp_v0 != 0) {
        ((func_8022D960_S1 *)(o))->unk7F4 = 0;
        ((func_8022D960_S1 *)(o))->unk800.v0 = ((func_8022D960_S2 *)(a1))->unk8;
        ((func_8022D960_S1 *)(o))->unk800.v1.y = ((func_8022D960_S2 *)(a1))->unkC;
        ((func_8022D960_S1 *)(o))->unk800.v1.z = ((func_8022D960_S2 *)(a1))->unk10;
        sp10.x = ((func_8022D960_S3 *)(temp_v0))->unk34;
        sp10.y = ((func_8022D960_S3 *)(temp_v0))->unk38;
        sp10.z = ((func_8022D960_S3 *)(temp_v0))->unk3C;
        func_80271F68_de(&sp20, &sp10, &((func_8022D960_S1 *)(o))->unk800.v1);
        sp20.y = 0.0f;
        ((func_8022D960_S1 *)(o))->unk7F8 = func_80271AA8_de(&sp20);
    }
}
