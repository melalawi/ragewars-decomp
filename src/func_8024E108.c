int func_8024E108(void *arg0) {
    void *temp_a0 = *(void **)((char *)arg0 + 0x18);
    unsigned int new_var = 0;
    if (*(int *)((char *)temp_a0 + new_var) != 1) {
        return new_var;
    }
    if (new_var) {
        return *(int *)((char *)temp_a0 + 0x4C) & 0x4000;
    } else {
        return *(int *)((char *)temp_a0 + 0x4C) & 0x4000;
    }
}
