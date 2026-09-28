/* Returns the height extent used for an actor: a player actor with no health left defers to
 * func_8024E3B4, otherwise the value is selected by the actor's state type from its descriptor fields
 * or constant heights, with 0 for unknown types. Plain switch; its jump table and the two float
 * literals are the function's own rodata at 0x800C8CE8, which needs a RESIDENT_TABLES entry. */
#include "basetypes.h"

extern f32 func_8024E3B4(void *);

f32 func_8024D274(void *arg0) {
    void *state;

    if (*(u8 *)arg0 == 1 && *(s32 *)((char *)arg0 + 0x174) <= 0) {
        return func_8024E3B4(arg0);
    }
    switch (*(s32 *)*(void **)((char *)arg0 + 0x18)) {
    case 11:
        if (*(u8 *)arg0 == 1 && (*(s32 *)((char *)arg0 + 0x100) & 0x300000) != 0) {
            return *(f32 *)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x6F4);
        }
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xF4);
    case 1:
    case 4:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x30);
    case 8:
        state = *(void **)((char *)arg0 + 0x18);
        if (*(s32 *)((char *)state + 0x14) & 1) {
            return 122.88f;
        }
        return *(f32 *)((char *)state + 0x1C);
    case 7:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x20);
    case 6:
        return 102.399994f;
    case 0:
    case 5:
    case 10:
    case 12:
    case 13:
    case 14:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x1C);
    }
    return 0.0f;
}
