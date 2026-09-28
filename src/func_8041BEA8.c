/* Calls func_8040E9A8 with flag 1 on each of the list's items (count at 0x48, items from 0x4C) and
   returns 0. */
typedef struct {
    char pad[0x48];
    int count;
    void *items[1];
} List;

extern void func_8040E9A8(void *, int);

int func_8041BEA8(List *list) {
    int i;

    for (i = 0; i < list->count; i++) {
        func_8040E9A8(list->items[i], 1);
    }
    return 0;
}
