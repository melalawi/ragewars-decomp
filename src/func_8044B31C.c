/* Updates each of the group's items (count at 0x8, 0xED8-byte records from the address at 0x4) through
   the block at 0x570 of each, then the group's own block at 0x5B0, all with func_8044B420. */
typedef struct {
    int unk0;
    int items;
    int count;
} Group;

extern void func_8044B420(char *);

void func_8044B31C(Group *group) {
    int i;

    for (i = 0; i < group->count; i++) {
        func_8044B420((char *)(i * 0xED8 + group->items + 0x570));
    }
    func_8044B420((char *)group + 0x5B0);
}
