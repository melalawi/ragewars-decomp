/** Convert a lowercase ASCII letter to uppercase. */
int func_802A15A0(int arg0) {
    if ((unsigned int)(arg0 - 'a') < 26) {
        arg0 -= 'a' - 'A';
    }
    return arg0;
}
