#include "basetypes.h"
typedef void *OSMesg;

/* Takes the access token from the message queue D_8014EA58, first creating that one-message queue
   over D_8014EA50 with func_802BFD50 and seeding it with a null message through func_802C0510
   when D_800D83C0 says it does not exist yet. */
typedef struct {
    char data[0x18];
} OSMesgQueue;

extern s32 D_800D83C0[];
extern OSMesgQueue D_8014EA58;
extern OSMesg D_8014EA50;
extern void func_802BFD50(OSMesgQueue *, OSMesg *, s32);
extern s32 func_802C0510(OSMesgQueue *, OSMesg, s32);
extern s32 func_802C0390(OSMesgQueue *, OSMesg *, s32);

static inline void create_access_queue(void) {
    D_800D83C0[0] = 1;
    func_802BFD50(&D_8014EA58, &D_8014EA50, 1);
    func_802C0510(&D_8014EA58, 0, 0);
}

void func_802BEA94(void) {
    OSMesg token;

    if (!D_800D83C0[0]) {
        create_access_queue();
    }
    func_802C0390(&D_8014EA58, &token, 1);
}
