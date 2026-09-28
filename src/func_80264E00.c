/** Initialize a three-word record with a value and two zero words. */
void func_80264E00(unsigned int *record, unsigned int value) {
    record[0] = value;
    record[1] = 0;
    record[2] = 0;
}
