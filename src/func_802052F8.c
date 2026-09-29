typedef struct func_802052F8_S1 func_802052F8_S1;
struct func_802052F8_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return the nested record's field, or a fallback constant when zero. */
int func_802052F8(void *arg0) {
    int temp = *(int *)(((func_802052F8_S1 *)(arg0))->unk18 + 0x24);
    if (temp != 0) {
        return temp;
    }
    return 0x5334;
}
