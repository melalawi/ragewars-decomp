#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern void func_802720EC(f32 *);
extern void func_8027200C(void *, void *, f32);
extern void func_80271FA4(Vector3 *, Vector3 *, Vector3 *);

void func_8022D198(void *arg0) {
    Vector3 sp10;
    Vector3 *temp_s1;

    temp_s1 = (Vector3 *)((char *)arg0 + 0x4A0);
    func_80271FD8(&sp10, (Vector3 *)((char *)arg0 + 0x16C4), temp_s1);
    func_802720EC(&sp10);
    func_8027200C(&sp10, &sp10, 30.0f);
    func_80271FA4((Vector3 *)((char *)arg0 + 0x6E8), temp_s1, &sp10);
}
