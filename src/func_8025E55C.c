typedef struct func_8025E55C_S1 func_8025E55C_S1;
struct func_8025E55C_S1 {
    char pad0[0xA];
    short unkA;
};

short func_8025E55C(void *arg0) {
    return ((func_8025E55C_S1 *)(arg0))->unkA;
}
