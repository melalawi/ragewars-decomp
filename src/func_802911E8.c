#include "basetypes.h"

/* Initialises the graphics system for a context: creates the scheduler message queue, fills the scheduler stack with a marker, starts the scheduler on it and attaches the frame queue, resets the context's pending state through func_80293574, clears the display-list pointer and starts the VI through func_802BBC50, starts the optional subsystems when D_8014D330 is set, initialises the remaining subsystems, then links the context's framebuffer records into a ring (each given state 2, its framebuffer from D_801536F8 and its previous and next records, and prepared through func_802909E0) before finishing through func_80293038 and func_8025DE50. */

typedef struct FrameRecord {
    char pad0[0xF0];
    s16 state;
    char padF2[0x1E];
    void *framebuffer;
    char pad114[0x18];
    struct FrameRecord *prev;
    struct FrameRecord *next;
    char pad134[0xC];
} FrameRecord;

typedef struct Context {
    FrameRecord records[1]; char pad140[0x26DC8-0x140]; s32 flag; s32 a; s32 b; s32 c;
} Context;

typedef struct Timing {
    char pad0[0x88];
    s32 unk88;
    s32 unk8C;
} Timing;

extern char D_80146980;
extern char D_80146D78;
extern char D_800F3C80[];
extern char D_801469E8;
extern s32 D_800D2B38;
extern char D_8014AD80;
extern void *D_80110634;
extern char D_80146D20;
extern s32 D_8014D330;
extern char D_801462C8;
extern u32 D_800E28A0;
extern Timing D_801468A0;
extern void *D_801536F8[];
extern void func_802BFD50(void *queue, void *messages, s32 count);
extern void func_802A101C(void *stack, s32 value, s32 size);
extern void func_8028F734(void *scheduler, void *stackTop, s32 priority, s32 mode, s32 frames);
extern void func_8028F844(void *scheduler, void *client, void *queue);
extern void func_80293574(Context *context);
extern void func_802BBC50(void *vi);
extern void func_80264B64(void);
extern void func_80444030(void *options);
extern void func_80244D60(void);
extern void func_8044E910(void);
extern void func_8044E8B0(void *arg);
extern void func_802909E0(FrameRecord *record);
extern void func_80293038(Context *context);
extern void func_8025DE50(void);

static inline u32 ring_index(u32 i, u32 bias, u32 count) { return (i+bias)%count; }
typedef struct func_802911E8_S1 func_802911E8_S1;
struct func_802911E8_S1 {
    char pad0[0x26DB4];
    s32 unk26DB4;
};

void func_802911E8(Context *context) {
    FrameRecord *record;
    u32 i;
    Timing *timing;
    u32 prev;
    u32 next;

    func_802BFD50(&D_80146980, &D_80146D78, 0x1000);
    func_802A101C(D_800F3C80, 7, 0x2000);
    func_8028F734(&D_801469E8, D_800F3C80 + 0x2000, D_800D2B38, 0, 1);
    func_8028F844(&D_801469E8, &D_8014AD80, &D_80146980);
    ((func_802911E8_S1 *)(context))->unk26DB4 = -1;
    func_80293574(context);
    D_80110634 = 0;
    func_802BBC50(&D_80146D20);
    if (D_8014D330 != 0) {
        func_80264B64();
        func_80444030(&D_801462C8);
    }
    i = 0;
    func_80244D60();
    func_8044E910();
    func_8044E8B0((char *)context + 0x26D8C);
    timing = &D_801468A0;
    context->b = 0;
    context->flag = 1;
    context->a = 0;
    context->c = 0;
    timing->unk88 = 0;
    timing->unk8C = 0;
    for (; i < D_800E28A0; i++) {
        prev = ring_index(i,D_800E28A0-1,D_800E28A0);
        next = ring_index(i,D_800E28A0+1,D_800E28A0);
        context->records[i].state = 2;
        context->records[i].framebuffer = D_801536F8[i];
        context->records[i].prev = &context->records[prev];
        context->records[i].next = &context->records[next];
        func_802909E0(&context->records[i]);
    }
    func_80293038(context);
    func_8025DE50();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7D8_8[] = {0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x16};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B38_8[] = {0x00, 0x00, 0x00, 0x12, 0x6E, 0x74, 0x65, 0x64};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE4A8_8[] = {0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEE78_8[] = {0x00, 0x00, 0x00, 0x12, 0x6B, 0x20, 0x25, 0x73};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8C8_8[] = {0x00, 0x00, 0x00, 0x12, 0x3C, 0x02, 0x80, 0x0D};
#endif
