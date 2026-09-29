#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern f64 D_800C90A8;
extern f32 D_800C90B0;

typedef struct func_8025D370_S1 func_8025D370_S1;
typedef struct func_8025D370_S2 func_8025D370_S2;
typedef struct func_8025D370_S3 func_8025D370_S3;
struct func_8025D370_S1 {
    char pad0[0x2B50];
    void* unk2B50;
};
struct func_8025D370_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    u16 unk4;
};
struct func_8025D370_S3 {
    char pad0[0x20];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
};

void func_8025D370(void *arg0, s32 arg1) {
    f64 var_f2;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_8028FD94(((func_8025D370_S1 *)(*(void **)arg0))->unk2B50, arg1 * 2);
    temp_v0_2 = ((func_8025D370_S2 *)(temp_v0))->unk0;
    var_f2 = (f64) temp_v0_2;
    if (temp_v0_2 < 0) {
        var_f2 += D_800C90A8;
    }
    ((func_8025D370_S3 *)(arg0))->unk20 = (f32) var_f2 * D_800C90B0;
    ((func_8025D370_S3 *)(arg0))->unk24 = (f32) ((func_8025D370_S2 *)(temp_v0))->unk4;
    func_8028FD94(((func_8025D370_S1 *)(*(void **)arg0))->unk2B50, (arg1 * 2) | 1);
}
