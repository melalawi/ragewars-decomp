typedef struct func_802689BC_S1 func_802689BC_S1;
typedef struct func_802689BC_S2 func_802689BC_S2;
struct func_802689BC_S1 {
    char pad0[0xF];
    char unkF;
};
struct func_802689BC_S2 {
    char pad0[0x270];
    char unk270;
};

void func_802689BC(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6) {
    unsigned char *p = &((func_802689BC_S1 *)(&arg3))->unkF;
    ((func_802689BC_S2 *)(arg0))->unk270 = *p;
}
