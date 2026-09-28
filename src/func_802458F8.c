/* Reports whether func_80245788 accepts the globally selected record and bit 2 of its word at 0x74
   is set. */
extern int func_80245788(void);

extern void *D_800E2830;

int func_802458F8(void) {
    void *record;
    if (func_80245788() == 0) {
        return 0;
    }
    record = D_800E2830;
    if ((*(int *)((char *)record + 0x74) & 2) != 0) {
        return 1;
    }
    return 0;
}
