typedef struct func_802B7480_S1 func_802B7480_S1;
struct func_802B7480_S1 {
    char pad0[0x8];
    unsigned char* unk8;
};

/** Consume and return one byte from the stream pointer at offset 8. */
int func_802B7480(void *stream) {
    unsigned char *cursor = ((func_802B7480_S1 *)(stream))->unk8;
    int value = *cursor;
    ((func_802B7480_S1 *)(stream))->unk8 = cursor + 1;
    return value;
}
