/** Broadcast a float value into three fields of the object. */
void func_8029FCA8(void *arg0, float value) {
    *(float *)((char *)arg0 + 0x0) = value;
    *(float *)((char *)arg0 + 0x14) = value;
    *(float *)((char *)arg0 + 0x28) = value;
}
