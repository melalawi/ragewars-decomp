extern float D_800C6D78;

void func_80209910(void **arg0, float arg1) {
    float result = arg1 * D_800C6D78;
    if (arg0 != 0) {
        *(float *)((char *)(*arg0) + 0x6A0) = -result;
    }
}
