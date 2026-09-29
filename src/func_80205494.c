typedef struct func_80205494_S1 func_80205494_S1;
typedef struct func_80205494_S2 func_80205494_S2;
typedef struct func_80205494_S3 func_80205494_S3;
struct func_80205494_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    unsigned int unk100;
};
struct func_80205494_S2 {
    char pad0[0xCB];
    signed char unkCB;
};
struct func_80205494_S3 {
    char pad0[0x14];
    unsigned int unk14;
};

/** Clear two flags when the controlling byte and nested flag are set. */
void func_80205494(void *arg0, void *arg1) {
    char *nested = ((func_80205494_S1 *)(arg0))->unk18;
    if (((func_80205494_S2 *)(arg1))->unkCB != 0 &&
        (((func_80205494_S3 *)(nested))->unk14 & 0x4) != 0) {
        unsigned int flags = ((func_80205494_S1 *)(arg0))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_80205494_S1 *)(arg0))->unk100 = flags;
    }
}
