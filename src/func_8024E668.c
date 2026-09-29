typedef struct func_8024E668_S1 func_8024E668_S1;
struct func_8024E668_S1 {
    char pad0[0xC];
    float unkC;
    char padC[0x40 - 0xC - sizeof(float)];
    float unk40;
};

/** Select one of two float fields according to the leading byte. */
float func_8024E668(void *object) {
    if (*(unsigned char *)object != 1) {
        return ((func_8024E668_S1 *)(object))->unkC;
    }
    return ((func_8024E668_S1 *)(object))->unk40;
}
