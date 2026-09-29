/* Projects n vectors onto the screen plane: each one with depth above 0.01 becomes (ox + sx * x / z, oy + sy * y / z, z), and any other becomes zero. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

void func_8029F8AC(Vec3f *out, Vec3f *in, s32 n, f32 ox, f32 sx, f32 oy, f32 sy) {
    s32 i;

    for (i = 0; i < n; i++) {
        if (in[i].z > 0.01f) {
            out[i].x = ox + sx * (in[i].x / in[i].z);
            out[i].y = oy + sy * (in[i].y / in[i].z);
            out[i].z = in[i].z;
        } else {
            out[i].x = 0.0f;
            out[i].y = 0.0f;
            out[i].z = 0.0f;
        }
    }
}
