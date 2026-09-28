/* Sets up a sound voice from its definition: clears the voice's handle at 0xC and state at 0x100 and
   0x102, takes the definition's three bytes at 0x12, 0xE and 0x10 for the output parameters, and the
   pitch from its word at 0x18 read unsigned for kinds 1 and 4 (with the two level bytes at 0x41 and 0x40
   for kind 1, D_800C71F0 otherwise) or signed short for kind 7; for kinds 1 and 4 the audio mode
   D_801462D0 8 scales the pitch by D_800C7208 with a floor of (&D_800C7208)[1] and no second level,
   and mode 0x20 scales it by D_800C7210 with second level D_800C7214; the pitch is stored shifted up 8
   bits at 0x4 and 0x8 and the levels at 0x10 and 0xCC. */
#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern f32 D_800C71F0;
extern f64 D_800C71F8;
extern f64 D_800C7200;
extern f32 D_800C7208;
extern f32 D_800C7210;
extern f32 D_800C7214;
extern s32 D_801462D0;

void func_802138F0(void *voice, void *def, Pair unused, s32 arg4, u8 *out) {
    s32 send;
    s32 first;
    s32 second;
    f32 pitch;
    f32 level;
    f32 level2;
    f64 wide;
    f32 scaled;
    s32 raw;

    send = 0;
    level = D_800C71F0;
    level2 = (&D_800C71F0)[1];
    first = 0;
    second = 0;
    *(s32 *) ((char *) voice + 0xC) = -1;
    *(u8 *) ((char *) voice + 0x100) = 0;
    *(s16 *) ((char *) voice + 0x102) = -1;
    pitch = level;
    if (def != 0) {
        send = *(s8 *) ((char *) def + 0x12);
        first = *(s8 *) ((char *) def + 0xE);
        second = *(s8 *) ((char *) def + 0x10);
        switch (*(s32 *) def) {
        case 1:
            raw = *(s32 *) ((char *) def + 0x18);
            wide = raw;
            if (raw < 0) {
                wide += D_800C71F8;
            }
            level = *(u8 *) ((char *) def + 0x41);
            level2 = *(u8 *) ((char *) def + 0x40);
            pitch = wide;
            break;
        case 4:
            raw = *(s32 *) ((char *) def + 0x18);
            wide = raw;
            if (raw < 0) {
                wide += D_800C7200;
            }
            pitch = wide;
            break;
        case 7:
            pitch = *(s16 *) ((char *) def + 0x18);
            break;
        }
        if (*(s32 *) def == 1 || *(s32 *) def == 4) {
            switch (D_801462D0) {
            case 8:
                scaled = pitch * D_800C7208;
                level2 = 0.0f;
                if (scaled < (&D_800C7208)[1]) {
                    scaled = (&D_800C7208)[1];
                }
                pitch = scaled;
                break;
            case 0x20:
                level2 = D_800C7214;
                pitch *= D_800C7210;
                break;
            }
        }
    }
    out[3] = send;
    out[1] = first;
    out[2] = second;
    *(s32 *) ((char *) voice + 0x4) = pitch;
    *(s8 *) ((char *) voice + 0x10) = (s32) level;
    *(s8 *) ((char *) voice + 0xCC) = (s32) level2;
    *(s32 *) ((char *) voice + 0x4) <<= 8;
    *(s32 *) ((char *) voice + 0x8) = *(s32 *) ((char *) voice + 0x4);
}
