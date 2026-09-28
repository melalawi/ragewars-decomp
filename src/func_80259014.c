/* Returns the index of the first of seventeen 0xCC-byte slots at offset 0x1DBC whose id at 0xC
   equals the given id, or -1 when the id is -1 or absent. */
typedef struct { char pad[0xC]; int id; char pad2[0xBC]; } Slot;
int func_80259014(char *arg0, int id) {
    Slot *slot;
    int i;
    slot = (Slot *)(arg0 + 0x1DBC);
    if (id == -1) {
        return -1;
    }
    for (i = 0; i < 17; i++, slot++) {
        if (slot->id == id) {
            return i;
        }
    }
    return -1;
}
