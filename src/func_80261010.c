/** Advance a record pointer by an indexed number of strides. */
void func_80261010(unsigned int *record, int index) {
    record[0] += index * record[1];
}
