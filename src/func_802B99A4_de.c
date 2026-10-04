#include "span_1000/code_802BDDB8.h"
#include "span_1000/types.h"
#include "types.h"
typedef void *OSMesg;

/* Takes the access token from the message queue D_8014EA58, first creating that one-message queue
   over D_8014EA50 with func_802BAC60_de and seeding it with a null message through func_802BB420_de
   when D_800D83C0 says it does not exist yet. */


extern s32 D_800D4390[];
extern Slot D_801487C8;
extern OSMesg D_801487C0;
extern void func_802BAC60_de(Slot *, OSMesg *, s32);
extern s32 func_802BB420_de(Slot *, OSMesg, s32);
extern s32 func_802BB2A0_de(Slot *, OSMesg *, s32);

static inline void create_access_queue(void) {
    D_800D4390[0] = 1;
    func_802BAC60_de(&D_801487C8, &D_801487C0, 1);
    func_802BB420_de(&D_801487C8, 0, 0);
}

void func_802B99A4_de(void) {
    OSMesg token;

    if (!D_800D4390[0]) {
        create_access_queue();
    }
    func_802BB2A0_de(&D_801487C8, &token, 1);
}
