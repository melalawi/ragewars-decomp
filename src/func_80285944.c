typedef struct func_80285944_S1 func_80285944_S1;
struct func_80285944_S1 {
    char pad0[0x38];
    int unk38;
};

/** Store the supplied word at object offset 0x38. */
void func_80285944(void *arg0, int arg1) {
    ((func_80285944_S1 *)(arg0))->unk38 = arg1;
}
