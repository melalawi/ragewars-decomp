typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FA4(Vector3 *, Vector3 *, Vector3 *);

void func_802428DC(void *arg0, void *arg1) {
    Vector3 *temp = (Vector3 *)((char *)arg1 + 0x1C);
    *(int *)((char *)arg0 + 0x3C) |= 8;
    func_80271FA4(temp, temp, (Vector3 *)((char *)arg0 + 0x5C));
}
