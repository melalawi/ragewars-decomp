#include "basetypes.h"

struct Field {
    char pad[0x14];
    char **text;
};

extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_80153760;
extern s32 D_8015377C;
extern char *D_800D7768[];
extern char *D_800D776C[];
extern char *D_800D7770[];
extern char *D_800D7774[];
extern char *D_800D777C[];
extern char *D_800D778C[];
extern char *D_800D7E14[];

/* Selects a menu field's label table from the connection mode and the option index. */
s32 func_8040A3A8(struct Field *field, s16 *arg1) {
    s32 option;
    u32 rel;

    option = *arg1;
    rel = option - 3;
    if (D_80153760 != 0) {
        if (D_8015377C != 0) {
            field->text = D_800D7768;
        } else {
            field->text = D_800D7770;
        }
        goto done;
    }
    if (D_80153750 != 0) {
        if (rel < 16) {
            field->text = D_800D777C;
            return 0;
        }
        if (option == 0x15) {
            field->text = D_800D7E14;
        } else if (D_8015377C != 0) {
            field->text = D_800D776C;
        } else {
            field->text = D_800D7774;
        }
        goto done;
    }
    if (D_8015375C != 0) {
        field->text = D_800D778C;
    }
done:
    return 0;
}
