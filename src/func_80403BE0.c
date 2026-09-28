/* Looks up the current menu resource through func_8028FE1C from the fields at 0x74 and 0x34 of
   D_8011FE88 and, when found, opens it through func_802518DC as widget 0x33 with the handler table
   D_800E0B2C; returns the result, or 0 when there is no resource. Matched through a local pointer to the menu. */
typedef struct {
    char pad[0x34];
    int group;
    char pad38[0x3C];
    int id;
} Menu;

extern Menu D_8011FE88;
extern int D_800E0B2C;
extern void *func_8028FE1C(int, int, int, int *);
extern int func_802518DC(int, void *, void *, int, int, int, int, int *, int);

int func_80403BE0(void) {
    int size;
    void *res;
    Menu *menu = &D_8011FE88;

    res = func_8028FE1C(menu->id, menu->group, 0, &size);
    if (res == 0) {
        return 0;
    }
    return func_802518DC(0, res, res, size, 0x33, 0, 0, &D_800E0B2C, 1);
}
