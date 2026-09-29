typedef struct func_802393FC_S1 func_802393FC_S1;
struct func_802393FC_S1 {
    char pad0[0xFC];
    int unkFC;
    char padFC[0x100 - 0xFC - sizeof(int)];
    int unk100;
};

/** Reset the word at 0x100 and enable the word at 0xFC. */
void func_802393FC(char *object) {
    ((func_802393FC_S1 *)(object))->unk100 = 0;
    ((func_802393FC_S1 *)(object))->unkFC = 1;
}
