extern void func_80273424(void *arg0, float arg1, int arg2, float arg3);

void func_8023377C(void *arg0, void *arg1) {
    if (*(int *)((char *)arg1 + 4) == 6) {
        void *inner = *(void **)((char *)arg1 + 8);
        func_80273424(arg0, 0.0f, *(int *)((char *)inner + 0x294), 0.0f);
    }
}
