extern void *D_800D92A0;

typedef struct func_802BFE70_S1 func_802BFE70_S1;
struct func_802BFE70_S1 {
    char pad0[0x14];
    unsigned int unk14;
};

/** Return offset 0x14 from the supplied object or the default global object. */
unsigned int func_802BFE70(void *object) {
    if (object == 0) {
        object = D_800D92A0;
    }
    return ((func_802BFE70_S1 *)(object))->unk14;
}
