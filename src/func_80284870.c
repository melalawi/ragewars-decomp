/** Return offset 0x180 only when the nested state word is zero. */
float func_80284870(void *arg0) {
    void *inner = *(void **)((char *)arg0 + 0x118);
    if (*(int *)((char *)inner + 0x14) != 0) {
        return 0.0f;
    }
    return *(float *)((char *)arg0 + 0x180);
}
