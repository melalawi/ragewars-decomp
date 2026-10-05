#include "span_1000/code_8024E130.h"
#include "types.h"
#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"

/** Return the zero status used by callers at VRAM 0x8024E130. */
int func_8024E140_de(void) {
    return 0;
}

/** Return zero. */
int func_8024E148_de(void) {
    return 0;
}

/** Return the empty result used by callers at VRAM 0x8024E140. */
int func_8024E150_de(void) {
    return 0;
}

extern void *jtbl_800C3CD8[];




/** Return whether this object is active for its current behavior class. */
s32 func_8024E158_de(void *arg0) {
    static void *type_labels[0] __attribute__((section(".sdata"))) = {
        &&return_one, &&return_one, &&return_zero, &&return_zero, &&return_one,
        &&return_zero, &&return_zero, &&return_one, &&return_one
    };
    if (*(u8 *)arg0 == 1) {
        if ((((func_8024E148_S1 *)(arg0))->unk100 & 0x300000) != 0) {
            goto return_one;
        }
    }
    goto check_type;

return_one:
    return 1;

check_type:
    {
        s32 type = *((func_8024E148_S1 *)(arg0))->unk18 - 1;
        if ((u32)type >= 9) {
            goto return_zero;
        }
        goto *jtbl_800C3CD8[type];
    }
return_zero:
    return 0;
}

s32 func_8024E1B4_de(void *arg0) {
    if (*(u8 *)arg0 != 1) {
        return 0;
    }
    if (!(((func_8024E1A4_S1 *)(arg0))->unk100 & 0x2000)) {
        return 0;
    }
    arg0 = ((func_8024E1A4_S1 *)(arg0))->unk1A0;
    if (arg0 == 0) {
        goto ret1;
    }
    if (((func_8024E1A4_S1 *)(arg0))->unk1C & 0x10000) {
        return 0;
    }
ret1:
    return 1;
}

/* Reports whether an actor's current state counts as active: states 1 and 5 always do, and state 11 does for a live mirrored actor whose controller flag at 0x80C is set or for which func_80245798_de agrees. */

extern s32 func_80245798_de(char *actor);




s32 func_8024E208_de(char *actor)
{
    switch (*((ObjectLinks1DC_4 *)(actor))->unk_18) {
    case 1:
    case 5:
        return 1;
    case 11:
        if (*(u8 *)actor != 1) {
            return 0;
        }
        if (!(((ObjectLinks1DC_4 *)(actor))->unk_100 & 0x300000)) {
            return 0;
        }
        if (((struct IntegerState810 *) ((ObjectLinks1DC_4 *) actor)->unk_1D8)->unk_80C != 0 || func_80245798_de(actor) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}

typedef struct Owner Owner;



/** Return bit two of the nested state word. */
unsigned int func_8024E29C_de(char *object) {
    return (((struct func_8029A9E0_S1 *) ((Owner *) object)->track)->unk4 >> 2) & 1;
}

/** Report whether the object pointed to at offset 0x18 equals one. */
int func_8024E2B0_de(void *arg0) {
    return *(int *)(((func_8024C654_S1 *)(arg0))->unk18) == 1;
}
