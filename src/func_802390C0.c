struct ThreeWords {
        int first;
        int second;
        int third;
    };
typedef struct func_802390C0_S1 func_802390C0_S1;
struct func_802390C0_S1 {
    char pad0[0x260];
    struct ThreeWords unk260;
};

/** Copy the three-word vector at source offset 0x260. */
void *func_802390C0(void *destination, void *source) {

    *(struct ThreeWords *)destination =
        ((func_802390C0_S1 *)(source))->unk260;
    return destination;
}
