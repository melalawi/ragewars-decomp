#include "span_16E000/code_80405454.h"
#include "types.h"

/* Marks the given controller port's 0x70-byte pak record in D_80153330 present when the port's D_8010FBE3 status byte is clear and func_802B7FD8_de initialises the pak block at offset 8 of the record through D_8010FC00 without error, clearing the mark otherwise, and returns the mark.
   Adapted from func_8028B2F8_de with the record reached by port index, the status byte guard and the initialisation result stored as a byte flag changed. */



extern u8 D_8010BBE3[];
extern char D_8010BC00[];
extern PakRecord D_8014D0A0_de[];
extern s32 func_802B7FD8_de(void *queue, void *pak, s32 channel);

s32 func_804055D4_de(s32 channel) {
    PakRecord *record = &D_8014D0A0_de[channel];
    s32 result;

    if (D_8010BBE3[channel * 4] == 0) {
        record->present = func_802B7FD8_de(D_8010BC00, record->pak, channel) == 0;
        result = record->present;
    } else {
        record->present = 0;
        result = 0;
    }
    return result;
}
