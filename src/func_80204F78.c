/** Update the floating state at offsets 0x40 and 0x64 under its range rules. */
void func_80204F78(void *unused, char *object, float value) {
    if (value == 0.0f || *(float *)(object + 0x64) < value) {
        if (*(float *)(object + 0x64) == 0.0f) {
            *(float *)(object + 0x40) = 0.0f;
        }
        *(float *)(object + 0x64) = value;
    }
}
