int func_8024DED0(void *arg0) {
    void *temp_a0 = *(void **)((char *)arg0 + 0x18);
    unsigned int new_var = 0;
    if (*(int *)((char *)temp_a0 + new_var) != 1) {
        return new_var;
    }
    if (new_var) {
        return *(int *)((char *)temp_a0 + 0x4C) & 1;
    } else {
        return *(int *)((char *)temp_a0 + 0x4C) & 1;
    }
}
