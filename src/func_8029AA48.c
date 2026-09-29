typedef struct func_8029AA48_S1 func_8029AA48_S1;
struct func_8029AA48_S1 {
    char pad0[0x534];
    int unk534;
    char pad534[0x538 - 0x534 - sizeof(int)];
    int unk538;
};

extern func_8029AA48_S1 *D_8014D080;
void func_8029AA48(int arg0, int arg1) {
    D_8014D080->unk534 = arg0;
    D_8014D080->unk538 = arg1;
}
