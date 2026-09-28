/** Reset the word at 0x100 and enable the word at 0xFC. */
void func_802393FC(char *object) {
    *(int *)(object + 0x100) = 0;
    *(int *)(object + 0xFC) = 1;
}
