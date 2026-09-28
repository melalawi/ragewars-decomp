typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FD8(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2);
extern void func_80272088(Vector3 *out, Vector3 *a, Vector3 *b);
extern void func_802720EC(Vector3 *out);

void func_80240C9C(void *arg0) {
    Vector3 sp10;
    Vector3 sp20;
    Vector3 *temp_s1;
    Vector3 *temp_s0;

    temp_s1 = (Vector3 *)((char *)arg0 + 0x24);
    func_80271FD8(&sp10, temp_s1, (Vector3 *)((char *)arg0 + 0x18));
    func_80271FD8(&sp20, (Vector3 *)((char *)arg0 + 0x30), temp_s1);
    temp_s0 = (Vector3 *)((char *)arg0 + 0x48);
    func_80272088(temp_s0, &sp20, &sp10);
    func_802720EC(temp_s0);
}
