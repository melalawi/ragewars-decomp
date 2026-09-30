/* Returns a cached image-bank tile texture, loading tile data and uploading oversized tiles on first use. */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct {
    char pad0[0x20];
} Texture;

typedef struct {
    char pad0[4];
    s32 stamp;
    u16 flags;
    char pad0A[2];
    Texture texture;
} Slot;

typedef struct {
    s32 offset;
    s8 fmt;
    s8 siz;
    s8 wid;
    char pad7[1];
} Tile;

typedef struct {
    char pad0[8];
    s16 depth;
    char pad0A[0x0E];
    s32 base;
    s32 size;
} Image;

typedef struct {
    s32 loaded;
    Tile tiles[0x60];
    s32 offsets[0x60];
    Slot **slotsByPass;
    s32 **listsByPass;
    Image *image;
    u8 loads;
    char pad491[3];
    s32 stamp;
    s16 held;
    char pad49A[2];
} Bank;

typedef struct {
    char pad0[0x30];
    s32 base;
    char pad34[0x24];
    Bank *banks;
} Tables;

typedef struct {
    s32 handle;
    s32 name;
    char pad8[0x218];
    Tables tables;
} File;

/* FAKEMATCH: volatile orders separate bank-table reloads at texture argument sites. */
extern Bank * volatile D_80153C28;
extern File D_801539B0;
extern s32 D_800E10E0;

extern s32 func_80252FFC(s32 size);
extern s32 func_802A1E8C(s32 *heap, s32 *name);
extern void func_802A1EB0(s32 handle);
extern void func_802A1ED4(s32 into, s32 size, s32 one, s32 handle);
extern void func_802A1F60(s32 handle, s32 at, s32 zero);
extern void func_802A28CC(void);
extern s32 func_802A2934(void);
extern void func_80413464(Texture *texture);
extern void func_80413484(Texture *texture);
extern void func_804137A0(Texture *texture, s32 kind, s8 fmt, s8 siz, s32 wid, s32 siz2, s32 zero,
                          s32 bytes, s32 offset, s32 zero2, s32 pitch, s32 *list, s32 depth);
extern void func_80419510(Texture *texture);
extern void func_804196C0(Texture *into, Texture *from);
extern void func_80419748(s32 flag);

void *func_80410FD4(u8 which, s32 group, s32 pass) {
    s32 sizes[0x60];
    Texture scratch;
    Texture *texture;
    Texture *into;
    Image *image;
    s32 kind;
    Tile *tile;
    Slot *slot;
    s32 threshold;
    Bank *bank;
    Slot *slots;
    s32 index;
    s32 code;
    s32 stamp;
    s32 size;
    s32 i;

    slots = D_80153C28[group].slotsByPass[pass];
    index = which;
    {
    Slot *cachedSlot = &slots[index];
    if (cachedSlot->flags & 1) {
        Bank *cachedBank;
        stamp = func_802A2934() + 0xA;
        cachedSlot->stamp = stamp;
        cachedBank = &D_80153C28[group];
        if (cachedBank->held == 0 && cachedBank->stamp != -1) {
            cachedBank->stamp = stamp;
        }
        return &slots[which].texture;
    }
    }
    kind = 0;
    func_802A28CC();
    slot = &slots[index];
    tile = &D_80153C28[group].tiles[index];
    image = D_80153C28[group].image;
    code = 0;
    if (tile->fmt == 0 || tile->siz == 0) {
        return 0;
    }
    texture = &slot->texture;
    func_80413464(texture);
    into = texture;
    if (image->depth == 0) {
        code = 0x20;
    } else if (image->depth < 0x11) {
        code = 4;
    } else if (image->depth < 0x101) {
        code = 8;
    }
    if (image->depth > 0) {
        kind = 0x14;
        if (code == 8) {
            kind = 0x1E;
        }
    } else if (code == 0x10) {
        kind = 0x1C;
    } else if (code == 0x18) {
        kind = 8;
    } else if (code == 0x20) {
        kind = 0xC;
    }
    if (D_80153C28[group].loaded == 0) {
        Tables *tables = &D_801539B0.tables;

        bank = &tables->banks[group];
        D_801539B0.handle = func_802A1E8C(&D_801539B0.name, &D_800E10E0);
        size = bank->image->size;
        i = 0;
        bank->offsets[0] = func_80252FFC(size);
        func_802A1F60(D_801539B0.handle, D_801539B0.tables.base + bank->image->base, 0);
        func_802A1ED4(D_80153C28[group].offsets[0], size, 1, D_801539B0.handle);
        do {
            sizes[i] = bank->tiles[i].wid * bank->tiles[i].siz;
            sizes[i] = sizes[i] * code / 8;
            bank->offsets[i] = bank->offsets[0] + (bank->tiles[i].offset - bank->image->base);
            i += 1;
        } while (i < 0x60);
        threshold = 0x1000;
        if (image->depth > 0) {
            threshold = 0x800;
        }
        i = 0;
        do {
            if (threshold < sizes[i]) {
                Tile *big = &D_80153C28[group].tiles[i];

                func_80413464(&scratch);
                func_804137A0(&scratch, kind, big->fmt, big->siz, big->wid, big->siz, 0, sizes[i],
                              D_80153C28[group].offsets[i], 0, image->depth * 2,
                              D_80153C28[group].listsByPass[pass], image->depth);
                func_80419510(&scratch);
                func_80413484(&scratch);
            }
            i += 1;
        } while (i < 0x60);
        func_802A1EB0(D_801539B0.handle);
        D_801539B0.handle = 0;
        bank->loaded = 1;
    }
    size = tile->wid * tile->siz * code >> 3;
    func_804137A0(texture, kind, tile->fmt, tile->siz, tile->wid, tile->siz, 0,
                  size, D_80153C28[group].offsets[which], 0,
                  image->depth * 2, D_80153C28[group].listsByPass[pass], image->depth);
    func_80419748(0);
    func_804196C0(into, texture);
    func_80419748(1);
    func_802A28CC();
    slot->stamp = func_802A2934() + 0xA;
    D_80153C28[group].loads += 1;
    slot->flags |= 1;
    return &slot->texture;
}
