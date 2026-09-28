struct Item {
    unsigned char kind;
    char pad[0x33];
    void *value;
    unsigned flags;
};

void *func_8024E690(struct Item *item) {
    if (item->kind == 1 && item->value != 0 && (item->flags & 3) != 0) {
        return item->value;
    }
    return 0;
}
