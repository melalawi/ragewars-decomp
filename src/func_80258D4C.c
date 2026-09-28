/** Read the object word at offset 0x2BB0. */
int func_80258D4C(void *object) {
    return *(int *)((char *)object + 0x2BB0);
}
