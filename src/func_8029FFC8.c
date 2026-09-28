/** Copy a three-float vector into object offsets 0x30 through 0x38. */
void func_8029FFC8(void *arg0, float *arg1) {
    *(float *)((char *)arg0 + 0x30) = arg1[0];
    *(float *)((char *)arg0 + 0x34) = arg1[1];
    *(float *)((char *)arg0 + 0x38) = arg1[2];
}
