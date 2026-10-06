#include "span_16E000/code_804143D8.h"
#include "span_C76B0/data.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "gfx.h"
#include "types.h"
#include "n64sdk.h"
#include "gbi.h"
/* Selects vertex mode when it differs from D_800DF278: mode 9 loads an identity model matrix
   through func_8029EB14_de and func_80419430_de, transforms the point (0, 0, D_800DD3FC) by the view
   D_80141168, loads four white vertices at that point and marks each vertex's screen position for
   modification. */

extern Gfx *D_8010C574;
extern s32 D_800DF278;


extern char D_80141168;

extern void func_8029EB14_de(Matrix *m);
extern void func_80272898_de(char *view, Vec3 *in, Vec3 *out);
extern Vtx10 *func_802A15E4_de(s32 size);

void func_80416ECC_de(s32 mode) {
    Vec3 point;
    Vec3 projected;
    Matrix identity;
    Vtx10 *vertices;
    s32 count;
    s32 i;

    if (mode == D_800DF278) {
        return;
    }
    if (mode == 9) {
        func_8029EB14_de(&identity);
        func_80419430_de(&identity);
        point.x = 0.0f;
        point.y = 0.0f;
        point.z = D_800DD3FC;
        func_80272898_de(&D_80141168, &point, &projected);
        count = 4;
        vertices = func_802A15E4_de(0x40);
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
            Gfx *cmd = D_8010C574++;
            gSPVertex(cmd, (u32)vertices, count, 0);
        }
        for (i = 0; i < count; i++) {
            Gfx *cmd = D_8010C574++;
            gSPModifyVertex(cmd, i, G_MWO_POINT_ZSCREEN, 0);
        }
    }
    D_800DF278 = mode;
}

