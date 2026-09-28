/** Stores D_800D2988 times the float at 0x20 of the object at 0x18 in the float at 0x1A4. */
extern float D_800D2988;
void func_8024F608(void *arg0) {
    void *p = *(void **)((char *)arg0 + 0x18);
    *(float *)((char *)arg0 + 0x1A4) = (D_800D2988) * (*(float *)((char *)p + 0x20));
}
