typedef struct func_80284870_S1 func_80284870_S1;
typedef struct func_80284870_S2 func_80284870_S2;
struct func_80284870_S1 {
    char pad0[0x118];
    void* unk118;
    char pad118[0x180 - 0x118 - sizeof(void*)];
    float unk180;
};
struct func_80284870_S2 {
    char pad0[0x14];
    int unk14;
};

/** Return offset 0x180 only when the nested state word is zero. */
float func_80284870(void *arg0) {
    void *inner = ((func_80284870_S1 *)(arg0))->unk118;
    if (((func_80284870_S2 *)(inner))->unk14 != 0) {
        return 0.0f;
    }
    return ((func_80284870_S1 *)(arg0))->unk180;
}
