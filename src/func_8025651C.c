/* Cartridge read thread loop: waits on the manager's request queue; a 0xBEEFDEAD message arms a
 * periodic timer that posts 0xDEADBEEF, a 0xDEADBEEF tick runs func_802AF990 when func_802955C8
 * reports work, and any other message is a read request whose buffer is invalidated, read from the
 * device through func_802BEB30, awaited on the completion queue, flushed, acknowledged to its reply
 * queue when one is given and finally retired through func_802566A8. */
#include "basetypes.h"

typedef struct {
    u32 devAddr;
    void *buffer;
    s32 size;
    void *replyQueue;
    void *replyMsg;
} ReadRequest;

typedef struct {
    s32 w[8];
} Timer;

extern s32 func_802C0390(void *, void *, s32);
extern s32 func_802C0510(void *, void *, s32);
extern void func_802C07B0(void *, u64, u64, void *, void *);
extern int func_802955C8(void);
extern void func_802AF990(void);
extern void func_802C2370(void *, s32);
extern s32 func_802BEB30(s32, u32, void *, u32);
extern void func_802C2060(void *, s32);
extern void func_802566A8(s32, void *);

void func_8025651C(s32 arg0) {
    Timer timer;
    ReadRequest *request;
    void *done;

    for (;;) {
        func_802C0390((char *)arg0 + 0x230, &request, 1);
        if (request == (ReadRequest *)0xBEEFDEAD) {
            func_802C07B0(&timer, 0, 0x393870, (char *)arg0 + 0x230, (void *)0xDEADBEEF);
        } else if (request == (ReadRequest *)0xDEADBEEF) {
            if (func_802955C8() != 0) {
                func_802AF990();
            }
        } else {
            func_802C2370(request->buffer, request->size);
            func_802BEB30(0, request->devAddr, request->buffer, request->size);
            func_802C0390((char *)arg0 + 0xA48, &done, 1);
            func_802C2060(request->buffer, request->size);
            if (request->replyQueue != 0) {
                func_802C0510(request->replyQueue, request->replyMsg, 1);
            }
            func_802566A8(arg0, request);
        }
    }
}
