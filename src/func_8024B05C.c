/* Finds the hit box of an object nearest a point: with the object's bone matrices (0xB4, else 0xB8) and its
 * hit-box resource from func_8024BFC4, each box whose mask matches the object's mask 0x17C has the average
 * of its eight corners carried through its bone matrix, and the box whose center lies nearest the point is
 * copied out, taking weight 1 for a controlled actor unless the global option D_801462E5 is set. The
 * resource is released afterwards; returns whether a box was found. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    Vec3 corners[8];
    char pad60[0xC];
    s32 mask;
} Box;

typedef struct {
    s32 size;
    s32 count;
} BoxTable;

extern u8 D_801462E5;
extern s32 *func_8024BFC4(char *, s8);
extern BoxTable *func_8028FD94(s32, s32);
extern void func_802536F4(s32, s32 *);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80270980(f32 *, char *);
extern void func_80272908(f32 *, Vec3 *, Vec3 *);
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);

s32 func_8024B05C(char *obj, Vec3 point, Box *out) {
    Vec3 center;
    Vec3 diff;
    f32 matrix[16];
    s32 *resource;
    s32 count;
    BoxTable *table;
    Box *box;
    Box *best;
    char *bones;
    s32 i;
    s32 j;
    f32 dist;
    f32 bestDist;

    bones = *(char **)(obj + 0xB4);
    if (bones == 0) {
        bones = *(char **)(obj + 0xB8);
        if (bones == 0) {
            return 0;
        }
    }
    resource = func_8024BFC4(obj, *(s8 *)(obj + 1));
    if (resource == 0) {
        return 0;
    }
    table = func_8028FD94(*resource, 5);
    count = table->count;
    bestDist = 3.4028235e38f;
    best = 0;
    for (i = 0; i < count; i++) {
        box = (Box *)((char *)table + (i * table->size + 8));
        if (box->mask & *(s32 *)(obj + 0x17C)) {
            center = box->corners[0];
            for (j = 1; j < 8; j++) {
                func_80271FA4(&center, &center, &box->corners[j]);
            }
            func_8027200C(&center, &center, 0.125f);
            func_80270980(matrix, bones + i * 0x40);
            func_80272908(matrix, &center, &diff);
            func_80271FD8(&diff, &diff, &point);
            dist = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
            if (dist < bestDist) {
                best = box;
                bestDist = dist;
            }
        }
    }
    if (best != 0) {
        *out = *best;
        if ((*(s32 *)(obj + 0x100) & 0x300000) && D_801462E5 == 0) {
            *(f32 *)((char *)out + 0x68) = 1.0f;
        }
    }
    func_802536F4(0, resource);
    return best != 0;
}
