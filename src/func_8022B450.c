typedef struct func_8022B450_S1 func_8022B450_S1;
struct func_8022B450_S1 {
    char pad0[0x11FC];
    float unk11FC;
};

/** Report whether the floating field at offset 0x11FC is positive. */
int func_8022B450(char *object) {
    return ((func_8022B450_S1 *)(object))->unk11FC > 0.0f;
}
