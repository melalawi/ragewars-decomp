/* Returns the palette for the current screen mode D_800E28D8: modes 1, 2 and 3 have their own, mode 0
   and anything else use the first. */
extern int D_800E28D8;
extern int D_800D763C;
extern int D_800D7640;
extern int D_800D7644;
extern int D_800D764C;

int *func_8040C43C(void) {
    switch (D_800E28D8) {
    case 0:
    default:
        return &D_800D763C;
    case 1:
        return &D_800D7640;
    case 2:
        return &D_800D7644;
    case 3:
        return &D_800D764C;
    }
}
