/** Combine three column vectors into the first three matrix columns. */
void func_802A0034(float *arg0, float *arg1, float *arg2, float *arg3) {
    arg0[0] = arg1[0];
    arg0[4] = arg1[1];
    arg0[8] = arg1[2];
    arg0[1] = arg2[0];
    arg0[5] = arg2[1];
    arg0[9] = arg2[2];
    arg0[2] = arg3[0];
    arg0[6] = arg3[1];
    arg0[10] = arg3[2];
}
