typedef struct func_80258BFC_S1 func_80258BFC_S1;
struct func_80258BFC_S1 {
    char pad0[0x2B74];
    int unk2B74;
};

void *func_80258BFC(void *arg0, int arg1) {
    return (char *)((func_80258BFC_S1 *)(arg0))->unk2B74 + arg1 * 12;
}
