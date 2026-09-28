/** Return a nested float field when the nested record type is one, else zero. */
float func_8024E534(void *object) {
    void *nested = *(void **)((char *)object + 0x18);
    if (*(int *)nested == 1) {
        return *(float *)((char *)nested + 0x50);
    }
    return 0.0f;
}
