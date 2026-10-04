#include "span_1000/code_8024F944.h"
#include "span_1000/code_80273744.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"







/* Initialises a placed prop from its record: resets its state and owner, loads its model and caches the squared model radius, builds its rotation from the record's packed quaternion, scale and position into a matrix copied into the object, sets its bounding box either as a fixed cube for flag 0x40 or from the record's six extents through func_802AD280_de with a half-unit margin, copies the position, links its path segment and takes the next colour key and colour frame. The fixed cube is written through do-while(0) vector macros, which the stores' order needs, and 102.4 is the cartridge's rounded 0x42CCCCCC. */
#if defined(VERSION_DE)
extern s32 func_8024E924_de(PlacedProp *);
#endif









#define VEC_SUB_SCALAR(dst, src, value) \
    do {                                \
        (dst).x = (src).x - (value);    \
        (dst).y = (src).y - (value);    \
        (dst).z = (src).z - (value);    \
    } while (0)

#define VEC_ADD_SCALAR(dst, src, value) \
    do {                                \
        (dst).x = (src).x + (value);    \
        (dst).y = (src).y + (value);    \
        (dst).z = (src).z + (value);    \
    } while (0)


extern s32 D_800CD8D0;

extern char D_8011BDC8;

extern void func_8024DD10_de(PlacedProp *, PlacedPropRecord *, s32, char *);
extern PropGeometry *func_8028CF6C_de(void *, s32);

extern void func_80274244_de(f32 *, char *);
extern void func_8027347C_de(char *, f32, f32, f32);
extern void func_80273448_de(char *, f32, f32, f32);
extern void func_80273D6C_de(char *);
extern f32 func_802AD280_de(s32);
extern void func_80272FBC_de(char *, char *);
extern void func_8027027C_de(char *, char *);

static inline s32 func_80250BF0_de(void) {
    s32 next;

    next = D_800CB6D0 + 1;
    D_800CB6D0 = next;
    if (next == 0x3FFFFF) {
        D_800CB6D0 = 0x380000;
    }
    return D_800CB6D0;
}

void func_8024FD80_de(PlacedProp *prop, PlacedPropRecord *record, s32 owner, char *segments) {
    f32 rotation[4];
    char matrix[0x40];
    PropGeometry *model;

    func_8024DD10_de(prop, record, owner, segments);
    prop->state = 0;
    prop->id = record->id;
    prop->owner = owner;
    prop->fieldA8 = -1;
    prop->fieldAC = 0;
    prop->fieldB0 = 0;
    prop->fieldB4 = 0;
    prop->model = func_8028CF6C_de(&D_8011BDC8, record->model);
    prop->fade = 16;
    prop->fieldDC = 0;
    model = prop->model;
    model->radiusSquared = model->radius * model->radius;
    prop->flags = record->flags;
    rotation[0] = record->rotation[0] * 0.007874016f;
    rotation[1] = record->rotation[1] * 0.007874016f;
    rotation[2] = record->rotation[2] * 0.007874016f;
    rotation[3] = record->rotation[3] * 0.007874016f;
    func_802741A4_de(rotation);
    func_80274244_de(rotation, matrix);
    func_8027347C_de(matrix, record->scale.x, record->scale.y, record->scale.z);
    func_80273448_de(matrix, record->position.x, record->position.y, record->position.z);
    func_80273D6C_de(matrix);
    if (prop->flags & 0x40) {
        VEC_SUB_SCALAR(prop->min, record->position, 102.399994f);
        VEC_ADD_SCALAR(prop->max, record->position, 102.399994f);
        prop->fieldD4 = D_800CD8D0;
    } else {
        prop->min.x = func_802AD280_de(record->extents[0]) + record->position.x - 0.5f;
        prop->min.y = func_802AD280_de(record->extents[1]) + record->position.y - 0.5f;
        prop->min.z = func_802AD280_de(record->extents[2]) + record->position.z - 0.5f;
        prop->max.x = func_802AD280_de(record->extents[3]) + record->position.x + 0.5f;
        prop->max.y = func_802AD280_de(record->extents[4]) + record->position.y + 0.5f;
        prop->max.z = func_802AD280_de(record->extents[5]) + record->position.z + 0.5f;
        prop->fieldD4 = record->value;
    }
    func_80272FBC_de(prop->matrix, matrix);
    func_8027027C_de(matrix, prop->transform);
    prop->position = record->position;
    if (record->segment == 0xFFFF) {
        prop->segment = 0;
    } else {
        prop->segment = segments + record->segment * 32;
    }
    prop->key = func_80250BF0_de() << 10;
    prop->colorFrame = D_800CD72B - 1;
#if defined(VERSION_DE)
    if ((u32)(func_8024E924_de(prop) - 9) < 2) {
        prop->flags |= 0x50;
    }
#endif
}
