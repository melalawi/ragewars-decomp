/* Returns whether the entity registered under an id in D_800D052C has flag 1 (mode 0) or flag 2
   (mode 1) set in its word at 0x14; other modes give 0. The interval also holds the empty function
   func_8022E930 that follows. */
typedef struct {
    char pad[0x14];
    int flags;
} Entity;

extern Entity *D_800D052C[];

int func_8022E8C0(short id, int mode) {
    switch (mode) {
    case 0:
        if (!(D_800D052C[id]->flags & 1)) {
            break;
        }
        return 1;
    case 1:
        if (D_800D052C[id]->flags & 2) {
            return 1;
        }
        break;
    }
    return 0;
}

void func_8022E930(void) {
}
