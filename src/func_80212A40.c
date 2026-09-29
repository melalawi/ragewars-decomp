extern void func_80209988(void *object);

typedef struct func_80212A40_S1 func_80212A40_S1;
typedef struct func_80212A40_S2 func_80212A40_S2;
typedef struct func_80212A40_S3 func_80212A40_S3;
struct func_80212A40_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212A40_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212A40_S3 {
    char pad0[0xC];
    int unkC;
    char padC[0x220 - 0xC - sizeof(int)];
    int unk220;
    char pad220[0x2FC - 0x220 - sizeof(int)];
    int unk2FC;
};

/** Reset the inner record's flag fields, then clear its state via func_80209988. */
void func_80212A40(void *arg0) {
    void *level1 = ((func_80212A40_S1 *)(arg0))->unk1D8;
    void *inner = ((func_80212A40_S2 *)(level1))->unk1454;
    ((func_80212A40_S3 *)(inner))->unk220 = 0;
    ((func_80212A40_S3 *)(inner))->unkC = -1;
    func_80209988(inner);
    ((func_80212A40_S3 *)(inner))->unk2FC = 0;
}
