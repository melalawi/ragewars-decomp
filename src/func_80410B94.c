/* Loads texture and palette data, detects transparency and creates the requested texture resource, storing the opened file handle through the header symbol (a codegen choice that keeps the handle address separate from the header base). */
#include "basetypes.h"

typedef struct Entry {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} Entry;

typedef struct FileState {
    s32 unk0;
    char pad4[0x244];
    s32 unk248;
} FileState;

typedef struct FileHeader {
    char pad0[0x25C];
    Entry *unk25C;
} FileHeader;

extern FileState D_801539B0;
extern FileHeader D_801539B4;
extern Entry *D_80153C10;
extern s32 *D_80153C14;
extern char D_800E10E0;
extern s32 *func_80252FFC(s32 size);
extern s32 func_802A1E8C(void *header, void *name);
extern void func_802A1EB0(s32 file);
extern void func_802A1ED4(s32 *buffer, s32 size, s32 count, s32 file);
extern void func_802A1F60(s32 file, s32 offset, s32 whence);
extern void func_80413500(s32 output, s32 id);
extern void func_804137A0(s32 output, s32 format, s16 width, s16 height, s32 stride, s32 rows, s32 a6, s32 size,
                          s32 *pixels, s32 a9, s32 paletteBytes, s32 *palette, s32 colors);

void func_80410B94(s32 index, s32 output) {
    s32 *palette;
    s32 *pixels;
    s32 paletteBytes;
    s32 stride;
    s32 transparent;
    s32 size;
    s32 i;
    s32 format;
    Entry *entry;

    if (D_80153C10[index].unk4 & 1) {
        func_80413500(output, D_80153C10[index].unk0);
        return;
    }
    palette = 0;
    paletteBytes = 0;
    stride = 0;
    ((FileState *)((char *)&D_801539B4 - 4))->unk0 = func_802A1E8C(&D_801539B4, &D_800E10E0);
    entry = &D_801539B4.unk25C[index];
    transparent = 0;
    if (entry->unk8 == 8) {
        stride = (entry->unkA + 7) & -8;
    } else if (entry->unk8 == 4) {
        stride = (entry->unkA + 15) & -16;
    } else if (entry->unk8 == 16) {
        stride = (entry->unkA + 3) & -4;
    }
    size = stride * entry->unkC * entry->unk8 / 8;
    pixels = func_80252FFC(size);
    func_802A1F60(D_801539B0.unk0, D_801539B0.unk248 + entry->unk14, 0);
    func_802A1ED4(pixels, size, 1, D_801539B0.unk0);
    if (entry->unkE > 0) {
        paletteBytes = entry->unkE * 2;
        palette = func_80252FFC(paletteBytes);
        func_802A1F60(D_801539B0.unk0, D_801539B0.unk248 + entry->unk18, 0);
        func_802A1ED4(palette, paletteBytes, 1, D_801539B0.unk0);
        for (i = 0; i < entry->unkE; i++) {
            if (!(palette[i] & 0xFF000000)) {
                transparent = 1;
                D_80153C14[index] = palette[i];
                break;
            }
        }
        if (i == entry->unkE) {
            transparent = 0;
            D_80153C14[index] = 0xFF000000;
        }
    }
    format = -1;
    if (entry->unkE > 0) {
        if (entry->unk8 == 8) {
            format = 32;
            if (transparent) {
                format = 30;
            }
        } else {
            format = 22;
            if (transparent) {
                format = 20;
            }
        }
    } else if (entry->unk8 == 16) {
        format = 28;
    } else if (entry->unk8 == 24) {
        format = 8;
    } else if (entry->unk8 == 32) {
        format = 12;
    }
    func_804137A0(output, format, entry->unkA, entry->unkC, stride, entry->unkC, 1, size, pixels, 1, paletteBytes,
                  palette, entry->unkE);
    func_802A1EB0(D_801539B0.unk0);
    D_801539B0.unk0 = 0;
}
