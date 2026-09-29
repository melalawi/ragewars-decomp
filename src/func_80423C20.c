/* Opens the arena page of menu node arg0: stops the running tune, clears the joined and computer
   bytes of the eight player slots, retires each of the four profile records that is in use and
   flagged and clears its five-byte tally, then allocates the 0x1C-byte screen state D_800E4600 and
   reduces the records' unlocked-set bits 0, 1 and 2 (forced on by settings flag 0x20000000) to one of
   three page layouts. It builds that layout's sprites, writes the header's two widths, hides the
   entries the save state and the two func_80264634 answers do not allow, registers the rest, sets the
   title and cursor state and returns 0.

   The settings block is reached through one base the cartridge materialises at 0x801468A0 and holds
   in a saved register across the first call, so the word at +0xA8, the byte at -0x5BB and the eight
   0x96-byte slots at -0x508 are written as offsets from that base rather than from three separate
   symbols; three symbols compile to three lui/addiu pairs. The slot index is a named local for the
   same reason: the two stores share one 0x96 multiply only when the index is, and the addu takes the
   index first only when the stores are subscripts rather than a pointer temp. */
#include "basetypes.h"

typedef struct {
    char pad0[0x10];
    u8 alpha;
    char pad11[5];
    s16 unk16;
    char pad18[2];
    s16 unk1A;
} Node;

typedef struct {
    void *list;
    void *title;
    Node *header;
    s32 unkC;
    char pad10[4];
    s32 unk14;
    char pad18[4];
} Screen;

extern u8 D_801468A0[];
extern s32 D_801462C8;
extern char D_80102B00[][0x190];
extern s8 D_80102B0D[];
extern s8 D_80102B0E[];
extern u8 D_80102B7D[];
extern Screen *D_800E4600;

extern void func_8042B1A0(s32);
extern void func_8042EB80(s32, s32);
extern void func_802A33F8(f32);
extern void func_8022EF20(char *);
extern void *func_802A101C(void *, s32, u32);
extern Screen *func_80252FFC(s32);
extern void func_802A3358(void);
extern s32 func_80265670(u8 *, s32);
extern Node *func_8040ECB0(void *, s32);
extern void func_8041B190(s32);
extern void func_8040E9D0(Node *, s32);
extern void func_8040E958(Node *, s32);
extern void func_8041DBA0(void *);
extern s32 func_80264634(s32);
extern void *func_8041A300(s32, s32);
extern void func_8041A508(void *);
extern void *func_80419ED4(s32, s32);
extern s32 func_8029A9F4(void);
extern void func_8040C4A8(s32);

typedef struct func_80423C20_S1 func_80423C20_S1;
struct func_80423C20_S1 {
    char pad0[0xA8];
    s32 unkA8;
};

s32 func_80423C20(void *node) {
    u8 *game;
    u8 *slots;
    Node *header;
    Node *handle;
    Node *panel;
    void *list;
    s32 k;
    s32 any0;
    s32 any1;
    s32 any2;
    s32 held;
    s32 layout;
    s32 state;
    s32 i;

    func_8042B1A0(-1);
    func_8042EB80(0, 0);
    game = D_801468A0;
    ((func_80423C20_S1 *)(game))->unkA8 = 0;
    func_802A33F8(0.0f);
    slots = game - 0x508;
    game[-0x5BB] = 1;
    for (i = 0; i < 8; i++) {
        k = i * 0x96;
        slots[k + 0x78] = 0;
        slots[k + 0x91] = 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_80102B0D[i * 0x190] >= 0 && D_80102B0E[i * 0x190] == 1) {
            func_8022EF20(D_80102B00[i]);
            D_80102B0D[i * 0x190] = -1;
            D_80102B0E[i * 0x190] = 0;
        }
        func_802A101C(&D_80102B00[i][0x83], 0, 5);
    }
    D_800E4600 = func_80252FFC(0x1C);
    func_802A3358();
    any0 = 0;
    any1 = 0;
    any2 = 0;
    for (i = 0; i < 4; i++) {
        if (D_80102B0D[i * 0x190] < 0) {
            continue;
        }
        held = 0;
        if (any0 != 0 || func_80265670(&D_80102B7D[i * 0x190], 0) != 0) {
            held = 1;
        }
        any0 = held;
        held = 0;
        if (any1 != 0 || func_80265670(&D_80102B7D[i * 0x190], 1) != 0) {
            held = 1;
        }
        any1 = held;
        held = 0;
        if (any2 != 0 || func_80265670(&D_80102B7D[i * 0x190], 2) != 0) {
            held = 1;
        }
        any2 = held;
    }
    if ((D_801462C8 & 0x20000000) != 0) {
        any2 = 1;
        any1 = 1;
    }
    layout = 0;
    if (any2 == 1) {
        layout = 3;
    } else if (any1 == 1) {
        layout = 2;
    }
    header = func_8040ECB0(node, 0x42);
    switch (layout) {
    case 2:
        func_8041B190(0x48);
        handle = func_8040ECB0(node, 0x4A);
        func_8040E9D0(handle, 1);
        func_8040E958(handle, 0);
        header->unk16 = 0x33;
        header->unk1A = 0x78;
        break;
    case 3:
        func_8041B190(0x4A);
        func_8041B190(0x48);
        header->unk16 = 0x2A;
        header->unk1A = 0x88;
        break;
    default:
        handle = func_8040ECB0(node, 0x48);
        func_8040E9D0(handle, 1);
        func_8040E958(handle, 0);
        handle = func_8040ECB0(node, 0x4A);
        func_8040E9D0(handle, 1);
        func_8040E958(handle, 0);
        header->unk16 = 0x3C;
        header->unk1A = 0x68;
        break;
    }
    i = -1;
    func_8041DBA0(&i);
    if (i < 0) {
        func_8040E9D0(func_8040ECB0(node, 0x4C), 1);
    }
    state = func_80264634(0);
    if (state != 1 || func_80264634(1) != 1) {
        func_8040E9D0(func_8040ECB0(node, 0x49), 1);
    }
    list = func_8041A300(0x42, 0x24);
    D_800E4600->list = list;
    func_8041A508(list);
    func_8041B190(0x45);
    func_8041B190(0x46);
    func_8041B190(0x49);
    func_8041B190(0x4B);
    func_8041B190(0x4C);
    func_8041B190(0x47);
    panel = func_8040ECB0(node, 0x43);
    D_800E4600->header = panel;
    panel->alpha = 0xF;
    D_800E4600->title = func_80419ED4(0x44, 0x6E);
    if (func_8029A9F4() == 2) {
        D_800E4600->unkC = 9;
    } else {
        D_800E4600->unkC = 1;
    }
    D_800E4600->unk14 = 3;
    func_8040C4A8(0);
    return 0;
}
