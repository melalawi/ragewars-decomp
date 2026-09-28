/** Stores the float argument scaled by D_800C8658 at 0x4 of the object and the int argument at 0x0. */
extern float D_800C8658;
void func_80239CF0(void *arg0, float arg1, int arg2) {
    *(float *)((char *)arg0 + 0x4) = arg1 * (D_800C8658);
    *(int *)((char *)arg0 + 0x0) = arg2;
}
