typedef struct func_80258D58_S1 func_80258D58_S1;
struct func_80258D58_S1 {
    char pad0[0x2BB0];
    int unk2BB0;
};

/** Store the supplied word at object offset 0x2BB0. */
void func_80258D58(void *arg0, int arg1) {
    ((func_80258D58_S1 *)(arg0))->unk2BB0 = arg1;
}
