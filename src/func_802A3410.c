
extern int D_800D0E54;
extern int D_800D2CA4;
/** Store the active value and reset its timer to sixty. */
void func_802A3410(int arg0) {
    D_800D2CA4 = arg0;
    D_800D0E54 = 60;
}
