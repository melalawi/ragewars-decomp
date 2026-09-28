#include "basetypes.h"

/* Creates a 0x7C-byte fading widget: finds the frame the low half of the first argument names and
   the item the second names in the current context through func_8029A958, func_80411E4C and
   func_8040ECB0, allocates and zeroes the widget, tags it 0xB60 with kind 8, links the frame at
   0x44 (clearing its word at 0x20 and setting 0x24 to D_800E1474) and the item at 0x48, sets both
   scales at 0x4C and 0x50 to D_800E1470, copies the item's two colours at 0x2C and 0x30 to 0x60,
   stores the green and red differences between them over 75 steps at 0x70 and 0x74, marks it
   active at 0x78, starts it through func_8041A4FC and func_8041A4B0(1) and attaches it to the
   frame through func_8040EE64. Returns the widget. */

typedef struct Record Record;

struct Record {
    char pad0[0xC];
    s16 field_0C;
    s16 field_0E;
    char pad10[0x12 - 0x10];
    s16 field_12;
    char pad14[0x20 - 0x14];
    s32 field_20;
    f32 field_24;
    char pad28[0x2C - 0x28];
    u32 colours[4];
    char pad3C[0x44 - 0x3C];
    Record *frame;
    Record *item;
    f32 scaleX;
    f32 scaleY;
    char pad54[0x60 - 0x54];
    u32 copies[4];
    u32 greenStep;
    u32 redStep;
    s32 active;
};

extern f32 D_800E1470;
extern f32 D_800E1474;
extern s32 func_8029A958(void);
extern s32 func_80411E4C(s32);
extern Record *func_8040ECB0(s32, s32);
extern Record *func_80252FFC(s32);
extern void func_802A1748(Record *, s32, s32);
extern void func_8041A4FC(Record *);
extern void func_8041A4B0(Record *, s32);
extern void func_8040EE64(Record *, Record *);

Record *func_8041A300(s32 frameId, s32 itemId) {
    Record *frame;
    s32 context;
    Record *result;

    frame = func_8040ECB0(func_80411E4C(func_8029A958()), frameId & 0xFFFF);
    context = func_80411E4C(func_8029A958());
    result = func_80252FFC(0x7C);
    func_802A1748(result, 0, 0x7C);
    result->field_0E = 0xB60;
    result->field_12 = 8;
    result->field_0C = 0xB60;
    result->frame = frame;
    result->item = func_8040ECB0(context, itemId & 0xFFFF);
    result->scaleX = D_800E1470;
    result->scaleY = D_800E1470;
    result->frame->field_20 = 0;
    result->frame->field_24 = D_800E1474;
    result->copies[0] = result->item->colours[0];
    result->copies[1] = result->item->colours[1];
    result->copies[2] = result->item->colours[2];
    result->copies[3] = result->item->colours[3];
    result->greenStep = (((result->item->colours[1] & 0xFF0000) >> 16) -
                         ((result->item->colours[0] & 0xFF0000) >> 16)) / 75;
    result->redStep = (((u8 *)result->item->colours)[0] - ((u8 *)result->item->colours)[4]) / 75U;
    result->active = 1;
    func_8041A4FC(result);
    func_8041A4B0(result, 1);
    func_8040EE64(frame, result);
    return result;
}
