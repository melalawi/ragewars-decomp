/* Returns the index of the first of seventeen 0xCC-byte slots at offset 0x1DBC whose id at 0xC
   equals the given id, or -1 when the id is -1 or absent. */
typedef struct { char pad[0xC]; int id; char pad2[0xBC]; } Slot;
typedef struct func_80259014_S1 func_80259014_S1;
struct func_80259014_S1 {
    char pad0[0x1DBC];
    Slot unk1DBC;
};

int func_80259014(char *arg0, int id) {
    Slot *slot;
    int i;
    slot = &((func_80259014_S1 *)(arg0))->unk1DBC;
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
