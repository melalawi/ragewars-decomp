/** Report whether the floating field at offset 0x11FC is positive. */
int func_8022B450(char *object) {
    return *(float *)(object + 0x11FC) > 0.0f;
}
