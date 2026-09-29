typedef struct func_802B74C4_S1 func_802B74C4_S1;
struct func_802B74C4_S1 {
    char pad0[0x8];
    unsigned char* unk8;
};

int func_802B74C4(void *arg0) {
    unsigned char *p;
    unsigned int b0, b1, b2, b3;

    p = ((func_802B74C4_S1 *)(arg0))->unk8;
    b0 = p[0];
    p = p + 1;
    ((func_802B74C4_S1 *)(arg0))->unk8 = p;
    b1 = p[0];
    ((func_802B74C4_S1 *)(arg0))->unk8 = p + 1;
    b2 = p[1];
    ((func_802B74C4_S1 *)(arg0))->unk8 = p + 2;
    b3 = p[2];
    ((func_802B74C4_S1 *)(arg0))->unk8 = p + 3;
    return (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
}
