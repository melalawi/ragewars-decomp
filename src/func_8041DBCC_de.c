#include "common/types.h"
#include "span_16E000/code_8041DBA0.h"
#include "types.h"
/* Enables mode 1 through func_802A23C4_de, places the menu model at (17, -10, -50) with uniform scale 0.14, zero rotation and a (0, 5, 0) offset, then issues request 0xE78 through func_8025DF34_de; returns zero. */





extern Menu_func_8041DBCC_de *D_800DF540;
extern void func_802A23C4_de(s32 mode);
extern void func_80439B5C_de(char *model, s32 arg1, Vec3 scale, Vec3 position);
extern void func_80439BE0_de(char *model, Vec3 rotation);
extern void func_80439C30_de(char *model, Vec3 offset);
extern void func_8025DF34_de(s32 request);

s32 func_8041DBCC_de(void) {
    Vec3 scale;
    Vec3 position;
    Vec3 rotation;
    Vec3 offset;

    func_802A23C4_de(1);
    scale.x = 0.14f;
    scale.y = 0.14f;
    scale.z = 0.14f;
    rotation.x = 0.0f;
    rotation.y = 0.0f;
    rotation.z = 0.0f;
    offset.x = 0.0f;
    offset.y = 5.0f;
    offset.z = 0.0f;
    position.x = 17.0f;
    position.y = -10.0f;
    position.z = -50.0f;
    func_80439B5C_de(D_800DF540->model, 0, scale, position);
    func_80439BE0_de(D_800DF540->model, rotation);
    func_80439C30_de(D_800DF540->model, offset);
    func_8025DF34_de(0xE78);
    return 0;
}
