/** Copy the three-word vector at source offset 0x260. */
void *func_802390C0(void *destination, void *source) {
    struct ThreeWords {
        int first;
        int second;
        int third;
    };
    *(struct ThreeWords *)destination =
        *(struct ThreeWords *)((char *)source + 0x260);
    return destination;
}
