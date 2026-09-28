typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern void func_802BC380(float arg0);

void func_8023945C(void *arg0, Vector3 *arg1) {
    Vector3 sp10;
    func_80271FD8(&sp10, (Vector3 *)((char *)arg0 + 0x128), arg1);
    func_802BC380((sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z));
}
