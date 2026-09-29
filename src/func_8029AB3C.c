typedef struct func_8029AB3C_S1 func_8029AB3C_S1;
struct func_8029AB3C_S1 {
    char pad0[0x14];
    int unk14;
};

extern func_8029AB3C_S1 *D_8014D080;
void func_8029AB3C(int arg0) {
    D_8014D080->unk14 = arg0;
}
