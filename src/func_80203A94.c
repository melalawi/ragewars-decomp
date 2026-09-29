typedef struct func_80203A94_S1 func_80203A94_S1;
struct func_80203A94_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return the nested record's field, or a fallback constant when zero. */
int func_80203A94(void *arg0) {
    int temp = *(int *)(((func_80203A94_S1 *)(arg0))->unk18 + 0x1C);
    if (temp != 0) {
        return temp;
    }
    return 0x2F44;
}
