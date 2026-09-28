#include "basetypes.h"

/* Reads a sampled track from a stream: parses its header through func_8025FFD0, evaluates the track at each whole frame into the first float of consecutive 16-byte output records, and advances the stream cursor past the track's key data. */

typedef struct Track {
    s32 keys;
    char pad4[0x2C - 4];
    s32 stride;
} Track;

extern void func_8025FFD0(Track *track, char **cursor);
extern f32 func_802610AC(Track *track, f32 time, s32 arg2, s32 arg3);

void func_802611A0(char **stream, f32 *out, s32 frames)
{
    Track track;
    char *cursor;
    s32 i;

    cursor = *stream;
    func_8025FFD0(&track, &cursor);
    for (i = 0; i < frames; i++) {
        *out = func_802610AC(&track, i, 0, 0);
        out += 4;
    }
    cursor += track.stride * (track.keys * 4 + 6);
    *stream = cursor;
}
