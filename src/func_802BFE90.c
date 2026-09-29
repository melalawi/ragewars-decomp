extern void *D_800D92A0;

typedef struct func_802BFE90_S1 func_802BFE90_S1;
struct func_802BFE90_S1 {
    char pad0[0x4];
    int unk4;
};

/** Return field 0x4 of arg0, falling back to a global record when arg0 is null. */
int func_802BFE90(void *arg0) {
    void *p = arg0;
    if (p == 0) {
        p = D_800D92A0;
    }
    return ((func_802BFE90_S1 *)(p))->unk4;
}
