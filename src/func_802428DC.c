typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FA4(Vector3 *, Vector3 *, Vector3 *);

typedef struct func_802428DC_S1 func_802428DC_S1;
typedef struct func_802428DC_S2 func_802428DC_S2;
struct func_802428DC_S1 {
    char pad0[0x1C];
    Vector3 unk1C;
};
struct func_802428DC_S2 {
    char pad0[0x3C];
    int unk3C;
    char pad3C[0x5C - 0x3C - sizeof(int)];
    Vector3 unk5C;
};

void func_802428DC(void *arg0, void *arg1) {
    Vector3 *temp = &((func_802428DC_S1 *)(arg1))->unk1C;
    ((func_802428DC_S2 *)(arg0))->unk3C |= 8;
    func_80271FA4(temp, temp, &((func_802428DC_S2 *)(arg0))->unk5C);
}
