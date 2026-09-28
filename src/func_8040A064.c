/* Returns the data table for a kind: kinds 1, 2 and 3 have their own, kind 0 and anything else use the
   first. */
extern char D_451820[];
extern char D_451844[];
extern char D_451868[];
extern char D_45188C[];

char *func_8040A064(int unused, int kind) {
    switch (kind) {
    case 0:
    default:
        return D_451820;
    case 1:
        return D_451844;
    case 2:
        return D_451868;
    case 3:
        return D_45188C;
    }
}
