#include "basetypes.h"

typedef struct AudioItem {
    struct AudioItem *next;
    char pad4[4];
    u16 delay;
} AudioItem;

typedef struct AudioMessage {
    u32 event;
    s32 unused;
} AudioMessage;

extern char D_801469E8;
extern char D_8010BE00;
extern void *D_8010BE28[];
extern char D_8010BE34;
extern AudioItem *D_8010BDFC;
extern s32 D_800D0940;
extern s32 D_800D094C;
extern u32 D_800D0950;

extern void func_8028F844(void *, void *, void *);
extern u64 func_802BFEB0(void);
extern void func_802C0390(void *, void *, s32);
extern u32 func_802BC390(void);
extern void func_80256EC8(void *, s32);
extern void func_802B75A0(void *);

/** Service audio events, submit ready buffers, and advance pending item delays. */
void func_80256CB0(void)
{
    s32 done = 0;
    s32 submitted = 0;
    s32 eventCount = 0;
    u64 previous = 0;
    s32 queue[2];
    AudioMessage message;
    AudioItem *item;

    func_8028F844(&D_801469E8, &queue, &D_8010BE00);
    do {
        D_800D0950 = ((func_802BFEB0() - previous) << 6) / 3000;
        func_802C0390(&D_8010BE00, &message, 1);
        previous = func_802BFEB0();

        switch (message.event) {
        case 1:
            eventCount++;
            if ((u32)eventCount >= 21) {
                eventCount = 0;
                goto count_event;
            }
            continue;
        case 7:
count_event:
            D_800D094C++;
            break;
        case 4:
            continue;
        default:
            continue;
        }

        while ((func_802BC390() & 0x80000000) == 0) {
            func_80256EC8(D_8010BE28[(u32)D_800D0940 % 3], submitted);
        }

        item = D_8010BDFC;
        while (item != 0) {
            if (item->delay != 0) {
                item->delay--;
            }
            item = item->next;
        }
    } while (done == 0);

    func_802B75A0(&D_8010BE34);
}
