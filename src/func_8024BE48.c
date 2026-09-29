typedef struct func_8024BE48_S1 func_8024BE48_S1;
struct func_8024BE48_S1 {
    char pad0[0x2E0];
    unsigned int unk2E0;
};

/** Set or clear status bit two according to the supplied boolean. */
void func_8024BE48(void *object, int enabled) {
    unsigned int *flags = &((func_8024BE48_S1 *)(object))->unk2E0;
    if (enabled) {
        *flags |= 2;
    } else {
        *flags &= ~2U;
    }
}
