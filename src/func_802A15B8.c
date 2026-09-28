/** Convert an uppercase ASCII letter to lowercase. */
int func_802A15B8(int arg0) {
    if ((unsigned int)(arg0 - 'A') < 26) {
        arg0 += 'a' - 'A';
    }
    return arg0;
}
