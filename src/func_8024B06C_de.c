#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/types.h"
#include "types.h"
/* Finds the hit box of an object nearest a point: with the object's bone matrices (0xB4, else 0xB8) and its
 * hit-box resource from func_8024BFD4_de, each box whose mask matches the object's mask 0x17C has the average
 * of its eight corners carried through its bone matrix, and the box whose center lies nearest the point is
 * copied out, taking weight 1 for a controlled actor unless the global option D_801462E5 is set. The
 * resource is released afterwards; returns whether a box was found. */







extern u8 D_801462E5;
extern s32 *func_8024BFD4_de(char *, s8);
extern struct Shape_typemap_13 *func_8028FDB4_de(s32, s32);
extern void func_80253754_de(s32, s32 *);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80271F9C_de(Vec3 *, Vec3 *, f32);
extern void func_80270910_de(f32 *, char *);
extern void func_80272898_de(f32 *, Vec3 *, Vec3 *);
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);

s32 func_8024B06C_de(char *obj, Vec3 point, Box70 *out) {
    Vec3 center;
    Vec3 diff;
    f32 matrix[16];
    s32 *resource;
    s32 count;
    struct Shape_typemap_13 *table;
    Box70 *box;
    Box70 *best;
    char *bones;
    s32 i;
    s32 j;
    f32 dist;
    f32 bestDist;

    bones = ((struct ObjectLinks180_2 *) obj)->unk_B4;
    if (bones == 0) {
        bones = ((struct ObjectLinks180_2 *) obj)->unk_B8;
        if (bones == 0) {
            return 0;
        }
    }
    resource = func_8024BFD4_de(obj, ((struct ObjectLinks180_2 *) obj)->unk_1);
    if (resource == 0) {
        return 0;
    }
    table = func_8028FDB4_de(*resource, 5);
    count = table->field_4;
    bestDist = 3.4028235e38f;
    best = 0;
    for (i = 0; i < count; i++) {
        box = (Box70 *)((char *)table + (i * table->field_0 + 8));
        if (box->mask & ((struct ObjectLinks180_2 *) obj)->unk_17C) {
            center = box->corners[0];
            for (j = 1; j < 8; j++) {
                func_80271F34_de(&center, &center, &box->corners[j]);
            }
            func_80271F9C_de(&center, &center, 0.125f);
            func_80270910_de(matrix, bones + i * 0x40);
            func_80272898_de(matrix, &center, &diff);
            func_80271F68_de(&diff, &diff, &point);
            dist = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
            if (dist < bestDist) {
                best = box;
                bestDist = dist;
            }
        }
    }
    if (best != 0) {
        *out = *best;
        if ((((struct ObjectLinks180_2 *) obj)->unk_100 & 0x300000) && D_801462E5 == 0) {
            ((struct Shield *) ((char *) out))->factor = 1.0f;
        }
    }
    func_80253754_de(0, resource);
    return best != 0;
}
