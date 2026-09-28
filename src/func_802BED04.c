#include "basetypes.h"
typedef void *OSMesg;

/* Takes the access token from the message queue D_8014EA78, first creating that one-message queue
   over D_8014EA70 with func_802BFD50 and seeding it with a null message through func_802C0510
   when D_800D83D0 says it does not exist yet. Adapted from func_802BEA94 with the queue, its buffer and its flag changed. */
typedef struct {
    char data[0x18];
} OSMesgQueue;

extern s32 D_800D83D0[];
extern OSMesgQueue D_8014EA78;
extern OSMesg D_8014EA70;
extern void func_802BFD50(OSMesgQueue *, OSMesg *, s32);
extern s32 func_802C0510(OSMesgQueue *, OSMesg, s32);
extern s32 func_802C0390(OSMesgQueue *, OSMesg *, s32);

static inline void create_access_queue(void) {
    D_800D83D0[0] = 1;
    func_802BFD50(&D_8014EA78, &D_8014EA70, 1);
    func_802C0510(&D_8014EA78, 0, 0);
}

void func_802BED04(void) {
    OSMesg token;

    if (!D_800D83D0[0]) {
        create_access_queue();
    }
    func_802C0390(&D_8014EA78, &token, 1);
}
