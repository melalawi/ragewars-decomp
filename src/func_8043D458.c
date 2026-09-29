typedef signed int s32;
typedef unsigned int u32;
typedef signed char s8;
typedef s32 M2C_UNK;

struct Func8043D458Arg {
    s8 pad0[8];
    s32 flags;
    s8 padC[8];
    M2C_UNK *text;
};

extern s32 D_801462C8;
extern s32 D_801462CC;
extern M2C_UNK D_800D7B38;
extern M2C_UNK D_800D7B3C;

/* Updates the option item's flag bit and selects its associated text pointer. */
s32 func_8043D458(struct Func8043D458Arg *arg0) {
    if (D_801462CC & 1) {
        arg0->flags |= 0x01000000;
    } else {
        arg0->flags &= 0xFEFFFFFF;
    }
    if (D_801462C8 & 1) {
        arg0->text = &D_800D7B38;
    } else {
        arg0->text = &D_800D7B3C;
    }
    return 0;
}
