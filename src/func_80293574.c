typedef struct func_80293574_S1 func_80293574_S1;
struct func_80293574_S1 {
    char pad0[0x26DC0];
    unsigned char unk26DC0;
    char pad26DC0[0x26DC1 - 0x26DC0 - sizeof(unsigned char)];
    unsigned char unk26DC1;
    char pad26DC1[0x26DC4 - 0x26DC1 - sizeof(unsigned char)];
    int unk26DC4;
};

/** Reset three large-offset fields and mark the record active. */
void func_80293574(void *arg0) {
    ((func_80293574_S1 *)(arg0))->unk26DC1 = 1;
    ((func_80293574_S1 *)(arg0))->unk26DC4 = 0;
    ((func_80293574_S1 *)(arg0))->unk26DC0 = 0;
}
