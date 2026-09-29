typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FD8(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2);
extern void func_80272088(Vector3 *out, Vector3 *a, Vector3 *b);
extern void func_802720EC(Vector3 *out);

typedef struct func_80240C9C_S1 func_80240C9C_S1;
struct func_80240C9C_S1 {
    char pad0[0x18];
    Vector3 unk18;
    char pad18[0x24 - 0x18 - sizeof(Vector3)];
    Vector3 unk24;
    char pad24[0x30 - 0x24 - sizeof(Vector3)];
    Vector3 unk30;
    char pad30[0x48 - 0x30 - sizeof(Vector3)];
    Vector3 unk48;
};

void func_80240C9C(void *arg0) {
    Vector3 sp10;
    Vector3 sp20;
    Vector3 *temp_s1;
    Vector3 *temp_s0;

    temp_s1 = &((func_80240C9C_S1 *)(arg0))->unk24;
    func_80271FD8(&sp10, temp_s1, &((func_80240C9C_S1 *)(arg0))->unk18);
    func_80271FD8(&sp20, &((func_80240C9C_S1 *)(arg0))->unk30, temp_s1);
    temp_s0 = &((func_80240C9C_S1 *)(arg0))->unk48;
    func_80272088(temp_s0, &sp20, &sp10);
    func_802720EC(temp_s0);
}
