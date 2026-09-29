/* Reports whether func_80245788 accepts the globally selected record and bit 2 of its word at 0x74
   is set. */
extern int func_80245788(void);

extern void *D_800E2830;

typedef struct func_802458F8_S1 func_802458F8_S1;
struct func_802458F8_S1 {
    char pad0[0x74];
    int unk74;
};

int func_802458F8(void) {
    void *record;
    if (func_80245788() == 0) {
        return 0;
    }
    record = D_800E2830;
    if ((((func_802458F8_S1 *)(record))->unk74 & 2) != 0) {
        return 1;
    }
    return 0;
}
