/** Advance the byte at offset 0x14 by ten. */
void func_8022F30C(void *object) {
    *(unsigned char *)((char *)object + 0x14) += 10;
}
