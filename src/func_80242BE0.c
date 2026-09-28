/* Gathers the pieces a ray sweeps through: for each entry of the counted table in D_80120DE0 whose
 * rectangle, grown by the ray's radius, overlaps the ray's rectangle and is hit by it, each visible element
 * of the entry's resource whose grown box overlaps the ray's box and is hit is recorded with its hit
 * parameter (at most 128). The hits are sorted and, while nearer than the ray's current nearest hit, each
 * is handed to func_80243864 with a context holding the ray, its look-at matrix and segment spacing. */
#include "basetypes.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    Vec3 min;
    Vec3 max;
} Box;

typedef struct {
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
} Rect;

typedef struct {
    char pad0[0x8];
    f32 spacing;
    char padC[0x4];
    f32 length;
    char pad14[0x4];
    f32 radius;
    char pad1C[0x28];
    Vec3 start;
    Vec3 end;
    char pad5C[0x24];
    f32 scale;
    Box box;
    Rect rect;
    char padAC[0xD0];
    f32 nearest;
} Ray;

typedef struct {
    char pad0[0xB8];
    Box box;
    char padD0[0x8];
    u16 flags;
    char padDA[0xE];
} Element;

typedef struct {
    s32 unk0;
    s32 count;
    Element elements[1];
} Model;

typedef struct {
    void **resource;
    Rect *rect;
    s32 unk8;
} Entry;

typedef struct {
    Element *element;
    f32 t;
} Hit;

typedef struct {
    f32 m[4][4];
} Matrix;

typedef struct {
    Ray *ray;
    Vec3 *start;
    Vec3 *end;
    Matrix matrix;
    f32 reach;
    s32 segments;
    f32 step;
    Element *element;
    s32 kind;
    char pad60[0x48];
    s32 isKind9;
    char padAC[0x4];
} Context;

extern struct {
    char pad0[0x5AC];
    s32 count;
    Entry entries[1];
} D_80120DE0;
extern Vec3 D_800D1620;
extern void D_243804();
extern void D_243840();
extern s32 func_80216108(void *);
extern s32 func_8023DA90(Ray *, Box *, f32 *);
extern s32 func_8023DDB4(Ray *, Rect *, f32 *);
extern void func_80243864(Context *);
extern void func_8026F3D8(Matrix *, Vec3 *, Vec3 *, Vec3 *);
extern void func_80285290(char *, u32, u32, void *, void *);
extern void *func_8028FD94(void *, s32);

void func_80242BE0(Ray *ray) {
    Box box;
    Rect rect;
    Context ctx;
    Hit hits[128];
    f32 t;
    Vec3 *start;
    Vec3 *end;
    Hit *hit;
    Entry *table;
    Model *model;
    Element *element;
    s32 count;
    s32 hitCount;
    s32 segments;
    s32 remaining;
    s32 i;
    s32 j;

    start = &ray->start;
    end = &ray->end;
    ctx.ray = ray;
    ctx.start = start;
    ctx.end = end;
    ctx.reach = ray->scale * ray->nearest + ray->radius;
    if (ray->spacing != 0.0f) {
        segments = MAX(2, (s32) (ray->length / ray->spacing) + 1);
        ctx.segments = segments;
        ctx.step = (ray->length - 2.0f * ray->spacing) / (f32) (segments - 1);
    } else {
        ctx.segments = 1;
        ctx.step = 1.0f;
    }
    hit = hits;
    hitCount = 0;
    table = D_80120DE0.entries;
    count = D_80120DE0.count;
    for (i = 0; i < count; i++) {
        rect.minX = table[i].rect->minX - ray->radius;
        rect.minZ = table[i].rect->minZ - ray->radius;
        rect.maxX = table[i].rect->maxX + ray->radius;
        rect.maxZ = table[i].rect->maxZ + ray->radius;
        if (ray->rect.minX < rect.maxX && rect.minX < ray->rect.maxX && ray->rect.minZ < rect.maxZ &&
            rect.minZ < ray->rect.maxZ && func_8023DDB4(ray, &rect, &t) != 0) {
            model = func_8028FD94(*table[i].resource, 0);
            remaining = model->count;
            element = model->elements;
            while (--remaining != -1) {
                if (hitCount >= 128) {
                    break;
                }
                if (!(element->flags & 0x10)) {
                    box.min.x = element->box.min.x - ray->radius;
                    box.min.y = element->box.min.y - ray->radius;
                    box.min.z = element->box.min.z - ray->radius;
                    box.max.x = element->box.max.x + ray->radius;
                    box.max.y = element->box.max.y + ray->radius;
                    box.max.z = element->box.max.z + ray->radius;
                    if (box.min.x < ray->box.max.x && ray->box.min.x < box.max.x && box.min.z < ray->box.max.z &&
                        ray->box.min.z < box.max.z && box.min.y < ray->box.max.y && ray->box.min.y < box.max.y &&
                        func_8023DA90(ray, &box, &t) != 0) {
                        hitCount++;
                        hit->element = element;
                        hit->t = t;
                        hit++;
                    }
                }
                element++;
            }
        }
    }
    if (hitCount != 0) {
        func_8026F3D8(&ctx.matrix, start, end, &D_800D1620);
        func_80285290((char *) hits, hitCount, sizeof(Hit), D_243840, D_243804);
        hit = hits;
        for (j = 0; j < hitCount; j++, hit++) {
            if (!(hit->t < ray->nearest)) {
                break;
            }
            element = hit->element;
            ctx.element = element;
            ctx.kind = func_80216108(element);
            if (ctx.kind == 9) {
                ctx.isKind9 = 1;
            } else {
                ctx.isKind9 = 0;
            }
            func_80243864(&ctx);
        }
    }
}
