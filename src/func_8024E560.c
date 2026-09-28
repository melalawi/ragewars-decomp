/** Return a nested float field when the nested record type is one, else zero. */
float func_8024E560(void *object) {
    void *nested = *(void **)((char *)object + 0x18);
    if (*(int *)nested == 1) {
        return *(float *)((char *)nested + 0x3C);
    }
    return 0.0f;
}
