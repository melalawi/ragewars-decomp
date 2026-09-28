#include "basetypes.h"

/* Formats a debug value field: asks the field's getter at 0x18 for the address of its value, reads
   it as the type at 0x4 chooses through the cartridge's jump table jtbl_800E23C8 (float, signed or
   unsigned byte, short or word, or signed word, and zero for any type past 8),
   divides it by the scale at 0x14, prints it into D_801540A0 with D_800E23B0 and then into
   D_80154060 with the name at 0x0 through D_800E23B8, or alone through D_800E23C0, and returns
   D_80154060. */

struct Field {
    char *name;
    u32 type;
    char pad8[0x14 - 0x8];
    f32 scale;
    void *(*get)(void);
};

struct Widget {
    char pad[0x14];
    struct Field *field;
};

extern void *jtbl_800E23C8[];
extern f64 D_800E23F0;
extern char D_800E23B0[];
extern char D_800E23B8[];
extern char D_800E23C0[];
extern char D_801540A0[];
extern char D_80154060[];
extern void func_802C2410(char *, char *, ...);

char *func_8043F290(struct Widget *widget) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&read_f32, &&read_s8, &&read_s16, &&read_s32, &&read_u8, &&read_u16, &&read_u32, &&zero
    };
    struct Field *field;
    void *value;
    f32 f;
    f64 wide;
    s32 word;

    field = widget->field;
    value = field->get();
    if (field->type >= 9) {
        goto zero;
    }
    goto *jtbl_800E23C8[field->type];
zero:
    f = 0.0f;
    goto done;
read_f32:
    f = *(f32 *)value;
    goto done;
read_s8:
    f = *(s8 *)value;
    goto done;
read_s16:
    f = *(s16 *)value;
    goto done;
read_s32:
    f = *(s32 *)value;
    goto done;
read_u8:
    f = *(u8 *)value;
    goto done;
read_u16:
    f = *(u16 *)value;
    goto done;
read_u32:
    word = *(s32 *)value;
    wide = word;
    if (word < 0) {
        wide += D_800E23F0;
    }
    f = wide;
done:
    f /= field->scale;
    func_802C2410(D_801540A0, D_800E23B0, (f64)f);
    if (field->name != 0) {
        func_802C2410(D_80154060, D_800E23B8, field->name, D_801540A0);
    } else {
        func_802C2410(D_80154060, D_800E23C0, D_801540A0);
    }
    return D_80154060;
}
