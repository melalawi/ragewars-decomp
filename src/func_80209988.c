typedef struct func_80209988_S1 func_80209988_S1;
struct func_80209988_S1 {
    char pad0[0x2F4];
    int unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(int)];
    int unk2F8;
    char pad2F8[0x2FC - 0x2F8 - sizeof(int)];
    int unk2FC;
};

/** Reset three state words and set the final state to one. */
void func_80209988(void *arg0) {
    ((func_80209988_S1 *)(arg0))->unk2F4 = 0;
    ((func_80209988_S1 *)(arg0))->unk2F8 = 0;
    ((func_80209988_S1 *)(arg0))->unk2FC = 1;
}
