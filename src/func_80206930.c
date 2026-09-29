typedef struct func_80206930_S1 func_80206930_S1;
typedef struct func_80206930_S2 func_80206930_S2;
typedef struct func_80206930_S3 func_80206930_S3;
struct func_80206930_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_80206930_S2 {
    char pad0[0xE];
    unsigned char unkE;
    char padE[0x10 - 0xE - sizeof(unsigned char)];
    unsigned char unk10;
};
struct func_80206930_S3 {
    char pad0[0x7];
    unsigned char unk7;
};

/** Copy the source byte at offset 7 into two fields under object offset 0x18. */
void func_80206930(void *arg0, int arg1, void *arg2) {
    void *inner = ((func_80206930_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unkE = ((func_80206930_S3 *)(arg2))->unk7;
    inner = ((func_80206930_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unk10 = ((func_80206930_S3 *)(arg2))->unk7;
}
