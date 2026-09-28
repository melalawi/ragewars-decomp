/** Scatter three floats from arg1 into arg0's fields. */
void func_8029FBC8(void *arg0, void *arg1) {
    *(float *)((char *)arg0 + 0x0) = *(float *)((char *)arg1 + 0x0);
    *(float *)((char *)arg0 + 0x14) = *(float *)((char *)arg1 + 0x4);
    *(float *)((char *)arg0 + 0x28) = *(float *)((char *)arg1 + 0x8);
}
