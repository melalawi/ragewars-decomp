/** Add three floating arguments to the vector at offset 0x30. */
void func_802734B8(char *object, float x, float y, float z) {
    *(float *)(object + 0x30) += x;
    *(float *)(object + 0x34) += y;
    *(float *)(object + 0x38) += z;
}
