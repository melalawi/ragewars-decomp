/** Copy the three floating components at offset 0x30. */
void func_80273340(char *object, float *output) {
    output[0] = *(float *)(object + 0x30);
    output[1] = *(float *)(object + 0x34);
    output[2] = *(float *)(object + 0x38);
}
