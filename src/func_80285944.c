/** Store the supplied word at object offset 0x38. */
void func_80285944(void *arg0, int arg1) {
    *(int *)((char *)arg0 + 0x38) = arg1;
}
