#ifndef RAGEWARS_RW_GRAPHICS_BUFFERS_H
#define RAGEWARS_RW_GRAPHICS_BUFFERS_H

/*
 * Recovered from the live recomp execution of func_804058B0. Every observed
 * member access is an aligned 32-bit integer load/store. The pointer roles are
 * supported by allocator return values stored at 0x0C and 0x18 and by the
 * remaining members being passed to the same allocator/free wrappers.
 */
typedef struct RWGraphicsBuffers {
    /* 0x00 */ s32 initialized;
    /* 0x04 */ void *buffer_04;
    /* 0x08 */ void *buffer_08;
    /* 0x0C */ void *frame_buffers[3];
    /* 0x18 */ void *buffer_18;
    /* 0x1C */ void *buffer_1C;
} RWGraphicsBuffers;

extern RWGraphicsBuffers D_801536C8;

#endif
