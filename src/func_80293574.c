/** Reset three large-offset fields and mark the record active. */
void func_80293574(void *arg0) {
    *(unsigned char *)((char *)arg0 + 0x26DC1) = 1;
    *(int *)((char *)arg0 + 0x26DC4) = 0;
    *(unsigned char *)((char *)arg0 + 0x26DC0) = 0;
}
