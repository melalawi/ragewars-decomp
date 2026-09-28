extern float D_800D2BE0;
extern float D_800D2BEC;
extern float D_800D2BF8;

/** Propagate each array's boundary sample into its two wrap-around slots. */
void func_802A282C(void) {
    float *p0 = &D_800D2BE0;
    float *p1 = &D_800D2BEC;
    float *p2 = &D_800D2BF8;
    float a = p0[-1];
    float b = p1[-1];
    float c = p2[-1];
    p0[0] = a;
    p0[1] = a;
    p1[0] = b;
    p1[1] = b;
    p2[0] = c;
    p2[1] = c;
}
