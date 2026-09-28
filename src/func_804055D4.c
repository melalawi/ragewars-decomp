#include "basetypes.h"

/* Marks the given controller port's 0x70-byte pak record in D_80153330 present when the port's D_8010FBE3 status byte is clear and func_802BD0A8 initialises the pak block at offset 8 of the record through D_8010FC00 without error, clearing the mark otherwise, and returns the mark.
   Adapted from func_8028B2D4 with the record reached by port index, the status byte guard and the initialisation result stored as a byte flag changed. */

typedef struct {
    u8 present;
    char pad[7];
    char pak[0x68];
} PakRecord;

extern u8 D_8010FBE3[];
extern char D_8010FC00[];
extern PakRecord D_80153330[];
extern s32 func_802BD0A8(void *queue, void *pak, s32 channel);

s32 func_804055D4(s32 channel) {
    PakRecord *record = &D_80153330[channel];
    s32 result;

    if (D_8010FBE3[channel * 4] == 0) {
        record->present = func_802BD0A8(D_8010FC00, record->pak, channel) == 0;
        result = record->present;
    } else {
        record->present = 0;
        result = 0;
    }
    return result;
}
