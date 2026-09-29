typedef struct func_8024E534_S1 func_8024E534_S1;
typedef struct func_8024E534_S2 func_8024E534_S2;
struct func_8024E534_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E534_S2 {
    char pad0[0x50];
    float unk50;
};

/** Return a nested float field when the nested record type is one, else zero. */
float func_8024E534(void *object) {
    void *nested = ((func_8024E534_S1 *)(object))->unk18;
    if (*(int *)nested == 1) {
        return ((func_8024E534_S2 *)(nested))->unk50;
    }
    return 0.0f;
}
