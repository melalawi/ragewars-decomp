#include "basetypes.h"

struct List;
struct Owner;

typedef struct Inner {
    u8 pad0[4];
    s8 unk4;
} Inner;

typedef struct Obj8043EB20 {
    u8 pad0[0x1C];
    s32 unk1C;
    Inner *unk20;
} Obj8043EB20;

extern struct List D_44F754;
extern struct Owner D_8014561C;

extern void func_80264790(int arg0);
extern void *func_804426E4(struct Owner *owner, struct List *list, s32 b, s32 c, s32 d);

/** Marks arg1's inner record's byte tag via func_80264790, then hands the record and arg1's fields to func_804426E4; ignores arg0. */
s32 func_8043EB20(void *arg0, Obj8043EB20 *arg1) {
    func_80264790(arg1->unk20->unk4);
    func_804426E4(&D_8014561C, &D_44F754, arg1->unk1C, (s32) arg1->unk20, 0);
    return 1;
}
