typedef struct func_80204F78_S1 func_80204F78_S1;
struct func_80204F78_S1 {
    char pad0[0x40];
    float unk40;
    char pad40[0x64 - 0x40 - sizeof(float)];
    float unk64;
};

/** Update the floating state at offsets 0x40 and 0x64 under its range rules. */
void func_80204F78(void *unused, char *object, float value) {
    if (value == 0.0f || ((func_80204F78_S1 *)(object))->unk64 < value) {
        if (((func_80204F78_S1 *)(object))->unk64 == 0.0f) {
            ((func_80204F78_S1 *)(object))->unk40 = 0.0f;
        }
        ((func_80204F78_S1 *)(object))->unk64 = value;
    }
}
