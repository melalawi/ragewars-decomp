typedef struct func_80258C14_S1 func_80258C14_S1;
struct func_80258C14_S1 {
    char pad0[0x2B78];
    void* unk2B78;
};

/** Return the indexed 12-byte entry under object offset 0x2B78. */
void *func_80258C14(void *arg0, int arg1) {
    return (char *)((func_80258C14_S1 *)(arg0))->unk2B78 + arg1 * 12;
}
