/* Draws an item's label at its position into the text layer D_8014561C through func_804426E4, using
   the fixed label D_44F0B8 instead of the item's own when D_80153730 is set; returns 1. */
typedef struct {
    char pad[0x1C];
    int x;
    int y;
    char *label;
} Item;

extern int D_80153730;
extern char D_8014561C[];
extern char D_44F0B8[];
extern void func_804426E4(char *, char *, int, int, int);

int func_8040AACC(int unused, Item *item) {
    if (D_80153730 != 0) {
        func_804426E4(D_8014561C, D_44F0B8, item->x, item->y, 0);
    } else {
        func_804426E4(D_8014561C, item->label, item->x, item->y, 0);
    }
    return 1;
}
