#include "basetypes.h"
#include "n64sdk.h"
#include "shared/player_types.h"
#include "shared/pose.h"
/* Selects vertex mode when it differs from D_800E32C8: mode 9 loads an identity model matrix
   through func_8029FB14 and func_804194B0, transforms the point (0, 0, D_800E142C) by the view
   D_80145228, loads four white vertices at that point and marks each vertex's screen position for
   modification. */

extern Gfx *D_80110634;
extern s32 D_800E32C8;
extern f32 D_800E142C;
extern char D_80145228;

extern void func_8029FB14(Shared_MtxF *m);
extern void func_804194B0(Shared_MtxF *m);
extern void func_80272908(char *view, Vec3f *in, Vec3f *out);
extern Vtx *func_802A25E4(s32 size);

void func_80416F4C(s32 mode) {
    Vec3f point;
    Vec3f projected;
    Shared_MtxF identity;
    Vtx *vertices;
    s32 count;
    s32 i;

    if (mode == D_800E32C8) {
        return;
    }
    if (mode == 9) {
        func_8029FB14(&identity);
        func_804194B0(&identity);
        point.x = 0.0f;
        point.y = 0.0f;
        point.z = D_800E142C;
        func_80272908(&D_80145228, &point, &projected);
        count = 4;
        vertices = func_802A25E4(0x40);
        for (i = 0; i < count; i++) {
            vertices[i].v.ob[0] = projected.x;
            vertices[i].v.ob[1] = projected.y;
            vertices[i].v.ob[2] = projected.z;
            vertices[i].v.tc[0] = 0;
            vertices[i].v.tc[1] = 0;
            vertices[i].v.cn[0] = 0xFF;
            vertices[i].v.cn[1] = 0xFF;
            vertices[i].v.cn[2] = 0xFF;
            vertices[i].v.cn[3] = 0xFF;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0x01000000 | (count << 12) | (count * 2);
            cmd->words.w1 = (unsigned int)vertices;
        }
        for (i = 0; i < count; i++) {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0x021C0000 | ((i * 2) & 0xFFFF);
            cmd->words.w1 = 0;
        }
    }
    D_800E32C8 = mode;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC0AC_4 = (-100.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E142C_4 = (-100.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800EDA7C_4 = (-100.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8C3C_4 = (-100.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800DD3FC_4 = (-100.0f);
#endif
