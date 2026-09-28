/* Frees the owner's buffers, then sizes the frame buffers to available memory (three 0x54600-byte frames plus a depth buffer above 6MB, otherwise 0x1ECC0-byte frames ending at 0x80400000), clears them, allocates the double-buffered display lists and two work blocks, and publishes their addresses in globals. */
#include "basetypes.h"
#define NULL ((void *)0)

typedef struct Gfx {
    u32 w0;
    u32 w1;
} Gfx;

typedef struct Handle {
    void *data;
} Handle;

typedef struct Buffers {
    s32 ready;
    Handle *list;
    Handle *work;
    Handle *frames[3];
    Handle *depth;
    Handle *zwork;
} Buffers;

extern Handle *func_802533DC(s32, s32, s32, char *);
extern Handle *func_802534D0(s32, u32, s32, char *);
extern void func_802537D8(s32, Handle *);
extern u32 func_80265370(void);
extern void *func_802A101C(void *, s32, u32);

extern char D_800E0D30[];
extern char D_800E0D3C[];
extern char D_800E0D4C[];
extern char D_800E0D6C[];
extern char D_800E0D7C[];
extern char D_800E0D84[];
extern u32 D_800E28A0;
extern s32 D_800E28A4;
extern s32 D_800E28A8;
extern void *D_801536B0;
extern s32 D_801536B4;
extern void *gWorkBufferData;
extern Gfx *D_801536BC;
extern Gfx *D_801536C0;
extern void *D_801536E8;
extern s32 D_801536EC;
extern Gfx *D_801536F0;
extern Gfx *D_801536F4;
extern void *D_801536F8[];

void func_804058B0(Buffers *b) {
    u32 mb = 0x100000;
    u32 top;
    s32 size;
    s32 total;
    Handle *depth;
    Handle *frames;
    Handle *handle;
    u32 i;
    s32 j;
    s32 k;

    if (b->list != NULL) {
        func_802537D8(0, b->list);
    }
    if (b->work != NULL) {
        func_802537D8(0, b->work);
    }
    if (b->depth != NULL) {
        func_802537D8(0, b->depth);
    }
    if (b->zwork != NULL) {
        func_802537D8(0, b->zwork);
    }
    for (j = 0; j < 3; j++) {
        if (b->frames[j] != NULL) {
            func_802537D8(0, b->frames[j]);
        }
    }
    b->ready = 0;
    b->list = NULL;
    b->work = NULL;
    b->depth = NULL;
    b->zwork = NULL;
    for (k = 0; k < 3; k++) {
        b->frames[k] = NULL;
    }
    if (func_80265370() >= mb * 6) {
        top = func_80265370() | 0x80000000;
        size = 0x54600;
        D_800E28A0 = 3;
        depth = func_802534D0(0, top - mb, size, D_800E0D30);
        frames = func_802534D0(0, top - mb * 2, D_800E28A0 * size, D_800E0D3C);
        func_802A101C(frames->data, 0, 0xFD200);
        func_802A101C(depth->data, 0, 0x54600);
        b->depth = depth;
        b->frames[0] = frames;
        D_801536E8 = b->depth->data;
        for (i = 0; i < D_800E28A0; i++) {
            D_801536F8[i] = (char *)frames->data + i * size;
        }
    } else {
        size = 0x1ECC0;
        total = (D_800E28A0 + 1) * size;
        top = 0x80400000;
        handle = func_802534D0(0, top - total, total, D_800E0D4C);
        b->frames[0] = handle;
        for (i = 0; i < D_800E28A0; i++) {
            D_801536F8[i] = (char *)handle->data + i * size;
        }
        D_801536E8 = (char *)handle->data + size * i;
    }
    for (i = 0; i < D_800E28A0; i++) {
        func_802A101C(D_801536F8[i], 0, size);
    }
    func_802A101C(D_801536E8, 0, size);
    b->list = func_802533DC(0, (D_800E28A4 + D_800E28A8) * 2 * sizeof(Gfx), 0x23, D_800E0D6C);
    b->work = func_802533DC(0, 0x8000, 0x23, D_800E0D7C);
    b->zwork = func_802533DC(0, 0x22000, 0x23, D_800E0D84);
    D_801536B4 = 0x8000;
    D_801536EC = 0x22000;
    D_801536F0 = b->list->data;
    D_801536BC = D_801536F0 + D_800E28A4;
    D_801536F4 = D_801536BC + D_800E28A8;
    D_801536C0 = D_801536F4 + D_800E28A4;
    gWorkBufferData = b->work->data;
    D_801536B0 = b->zwork->data;
    for (i = 0; i < D_800E28A0; i++) {
    }
    b->ready = 1;
}
