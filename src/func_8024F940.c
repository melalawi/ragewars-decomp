/* Initialises a placed prop from its compact record: resets its state and owner, loads its model and
 * caches the squared model radius, places it on the grid by multiplying the record's byte cell
 * coordinates by the caller's cell spacing and its packed height by 5.12, mirrors either axis for
 * flags 0x10 and 0x20, turns it by the quarter turn the low two bits of the same byte select, builds
 * scale and position into a matrix copied into the object, sets its bounding box either as a fixed
 * cube for flag 0x40 or from the record's six signed extents at a tenth of a cell with a half-unit
 * margin, copies the position, links its path segment and takes the next colour key and colour
 * frame. This is the compact-record twin of func_8024FD4C, which does the same work from a record
 * carrying full floats. The rounded literals are the cartridge's: 5.12 is 0x40A3D70A, 102.4 is
 * 0x42CCCCCC and 10.24 is 0x4123D70A. */
#include "basetypes.h"

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Model {
    char pad0[8];
    f32 radius;
    char padC[0x24 - 0xC];
    u32 radiusSquared;
} Model;

/* The record is packed into 0x1C bytes: the cell coordinates, the height and the six extents are
 * bytes scaled on the way in, where func_8024FD4C's record carries the same quantities as floats. */
typedef struct Record {
    s32 value;
    f32 scale;
    u16 id;
    u16 segment;
    u16 flags;
    u16 model;
    s16 height;
    s8 extents[6];
    u8 placement;
    u8 cellX;
    u8 cellZ;
} Record;

typedef struct Prop {
    u8 state;
    char pad1[3];
    u16 id;
    char pad6[2];
    Vec3f position;
    void *segment;
    Model *model;
    s32 owner;
    char pad20[8];
    char transform[0x40];
    char matrix[0x40];
    s32 fieldA8;
    s32 fieldAC;
    s32 fieldB0;
    s32 fieldB4;
    Vec3f min;
    Vec3f max;
    s32 key;
    s32 fieldD4;
    u16 flags;
    u8 colorFrame;
    char padDB;
    s32 fieldDC;
    u8 fade;
} Prop;

extern s32 D_800D0910;
extern s32 D_800D2B40[];
extern u8 D_800D297B;
extern char D_8011FE88;

extern void func_8024DD00(Prop *, Record *, s32, char *);
extern Model *func_8028CF48(void *, s32);
extern void func_80273744(char *, f32);
extern void func_802734EC(char *, f32, f32, f32);
extern void func_802734B8(char *, f32, f32, f32);
extern void func_80273DDC(char *);
extern void func_8027302C(char *, char *);
extern void func_802702EC(char *, char *);

static inline s32 func_80250B98(void) {
    s32 next;

    next = D_800D0910 + 1;
    D_800D0910 = next;
    if (next == 0x3FFFFF) {
        D_800D0910 = 0x380000;
    }
    return D_800D0910;
}

void func_8024F940(Prop *prop, Record *record, s32 owner, char *segments, f32 spacing) {
    char matrix[0x40];
    Vec3f position;
    Model *model;
    f32 turn;
    f32 x;
    f32 z;

    func_8024DD00(prop, record, owner, segments);
    prop->state = 0;
    prop->id = record->id;
    prop->owner = owner;
    prop->fieldA8 = -1;
    prop->fieldAC = 0;
    prop->fieldB0 = 0;
    prop->fieldB4 = 0;
    turn = 0.0f;
    prop->model = func_8028CF48(&D_8011FE88, record->model);
    prop->fade = 16;
    prop->fieldDC = 0;
    model = prop->model;
    model->radiusSquared = model->radius * model->radius;
    x = record->cellX * spacing;
    position.x = x;
    if (record->placement & 0x10) {
        position.x = -x;
    }
    z = record->cellZ * spacing;
    position.z = z;
    if (record->placement & 0x20) {
        position.z = -z;
    }
    position.y = record->height * 5.119999886f;
    switch (record->placement & 3) {
    case 0:
        turn = 0.0f;
        break;
    case 1:
        turn = 1.570796490f;
        break;
    case 2:
        turn = 3.141592979f;
        break;
    case 3:
        turn = 4.712389469f;
        break;
    }
    prop->flags = record->flags;
    func_80273744(matrix, turn);
    func_802734EC(matrix, record->scale, record->scale, record->scale);
    func_802734B8(matrix, position.x, position.y, position.z);
    func_80273DDC(matrix);
    if (prop->flags & 0x40) {
        prop->min.x = position.x - 102.3999939f;
        prop->min.y = position.y - 102.3999939f;
        prop->min.z = position.z - 102.3999939f;
        prop->max.x = position.x + 102.3999939f;
        prop->max.y = position.y + 102.3999939f;
        prop->max.z = position.z + 102.3999939f;
        prop->fieldD4 = D_800D2B40[0];
    } else {
        prop->min.x = position.x + record->extents[0] * 10.23999977f - 0.5f;
        prop->min.y = position.y + record->extents[2] * 10.23999977f - 0.5f;
        prop->min.z = position.z + record->extents[4] * 10.23999977f - 0.5f;
        prop->max.x = position.x + record->extents[1] * 10.23999977f + 0.5f;
        prop->max.y = position.y + record->extents[3] * 10.23999977f + 0.5f;
        prop->max.z = position.z + record->extents[5] * 10.23999977f + 0.5f;
        prop->fieldD4 = record->value;
    }
    func_8027302C(prop->matrix, matrix);
    func_802702EC(matrix, prop->transform);
    prop->position = position;
    if (record->segment == 0xFFFF) {
        prop->segment = 0;
    } else {
        prop->segment = segments + record->segment * 32;
    }
    prop->key = func_80250B98() << 10;
    prop->colorFrame = D_800D297B - 1;
}
