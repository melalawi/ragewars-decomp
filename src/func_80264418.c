typedef struct func_80264418_S1 func_80264418_S1;
struct func_80264418_S1 {
    char pad0[0xB6];
    unsigned char unkB6;
};

int func_80264418(void *arg0) {
    return ((func_80264418_S1 *)(arg0))->unkB6 >> 7;
}
