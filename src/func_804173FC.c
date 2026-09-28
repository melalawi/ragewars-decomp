/* Makes palette the current texture lookup table for a texture of the given bit depth: returns 1
   when it already is (D_800E32D8); otherwise records it, emits one pipeline sync if none is pending
   and, for 4-bit and 8-bit textures, enables the RGBA16 lookup table and loads the 16 or 256
   palette entries (texture image, tile sync, tile, load sync, load TLUT, pipeline sync), or for
   16-bit textures turns the lookup table off; returns 0. */
#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

extern Gfx *D_80110634;
extern void *D_800E32D8;
extern s32 D_800E32E4;

static inline void sync(void) {
    Gfx *cmd;

    if (D_800E32E4 == 0) {
        D_800E32E4 = 1;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE7000000;
        cmd->words.w1 = 0;
    }
}

s32 func_804173FC(s32 bits, void *palette) {
    s32 result;

    result = 1;
    if (D_800E32D8 != palette) {
        D_800E32D8 = palette;
        sync();
        if (bits == 4) {
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE3001001;
                cmd->words.w1 = 0x8000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xFD100000;
                cmd->words.w1 = (unsigned int)palette;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE8000000;
                cmd->words.w1 = 0;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xF5000100;
                cmd->words.w1 = 0x07000000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE6000000;
                cmd->words.w1 = 0;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xF0000000;
                cmd->words.w1 = 0x0703C000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE7000000;
                cmd->words.w1 = 0;
            }
        } else if (bits == 8) {
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE3001001;
                cmd->words.w1 = 0x8000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xFD100000;
                cmd->words.w1 = (unsigned int)palette;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE8000000;
                cmd->words.w1 = 0;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xF5000100;
                cmd->words.w1 = 0x07000000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE6000000;
                cmd->words.w1 = 0;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xF0000000;
                cmd->words.w1 = 0x073FC000;
            }
            {
                Gfx *cmd = D_80110634++;
                cmd->words.w0 = 0xE7000000;
                cmd->words.w1 = 0;
            }
        } else if (bits == 16) {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE3001001;
            cmd->words.w1 = 0;
        }
        result = 0;
    }
    return result;
}
