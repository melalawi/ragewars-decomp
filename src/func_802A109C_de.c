#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802A0AC4.h"
#include "types.h"

/* Runs once (guarded by D_800D2B80), tags D_800D2B84 with a marker, and if D_800D2BC0 is not 1 sets up a resource through func_8025305C_de/func_8025637C_de before always calling func_802A1050_de with a fixed set of data addresses. */

#if defined(VERSION_DE)
#define VV_8B245 0x8BB01
#elif defined(VERSION_EU_X)
#define VV_8B245 0x90385
#else
#define VV_8B245 0x8B245
#endif

extern s32 D_800CD950_de;

extern s32 D_801011B8;

extern s32 func_8025305C_de(s32 arg0);
extern s32 func_8025637C_de(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);






void func_802A109C_de(void) {
    s32 temp_v0;
    s32 *p2;

    if (((struct Shape_func_8021A2D4_de_2 *)(&D_800CD950_de))->field_0 != 1) {
        ((struct Shape_func_802764D4_de_2 *)&D_800CD950_de)[-1].field_0 = VV_8B245;
        temp_v0 = func_8025305C_de(VV_8B245);
        ((struct Shape_func_802764D4_de_2 *)&D_800CD950_de)[-2].field_0 = temp_v0;
        func_8025637C_de(&D_801011B8, 0x200000, ((struct Shape_func_802764D4_de_2 *)&D_800CD950_de)[-1].field_0, temp_v0);
        p2 = &((struct Shape_func_802764D4_de_2 *)&D_800CD950_de)[-2].field_0;
        ((func_80205628_S3 *)(p2))->unkC = 0;
        ((struct Shape_func_8021A2D4_de_2 *)(&D_800CD950_de))->field_0 = 1;
    }
}
