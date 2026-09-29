typedef struct func_80212FBC_S1 func_80212FBC_S1;
typedef struct func_80212FBC_S2 func_80212FBC_S2;
typedef struct func_80212FBC_S3 func_80212FBC_S3;
struct func_80212FBC_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212FBC_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212FBC_S3 {
    char pad0[0x220];
    int unk220;
    char pad220[0x224 - 0x220 - sizeof(int)];
    int unk224;
};

/** Reset two state words reached through the object's linked records. */
void func_80212FBC(void *object) {
    void *first = ((func_80212FBC_S1 *)(object))->unk1D8;
    void *second = ((func_80212FBC_S2 *)(first))->unk1454;
    ((func_80212FBC_S3 *)(second))->unk220 = 0;
    ((func_80212FBC_S3 *)(second))->unk224 = -1;
}
