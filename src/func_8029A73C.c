/** Mark the global object's field at offset 0x520. */
extern void *D_8014D080;

typedef struct func_8029A73C_S1 func_8029A73C_S1;
struct func_8029A73C_S1 {
    char pad0[0x520];
    int unk520;
};

void func_8029A73C(void) {
    void *object = D_8014D080;
    ((func_8029A73C_S1 *)(object))->unk520 = 1;
}
