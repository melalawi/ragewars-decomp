
extern float D_800D2CA0;
extern unsigned int D_80146870;

/** Store a scalar and clear its associated global state word. */
void func_802A33F8(float value) {
    D_800D2CA0 = value;
    D_80146870 = 0;
}
