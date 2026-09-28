/** Report the global count only while its enable byte is set. */
extern unsigned char D_8014AEB0;
extern unsigned int D_800D2AE0;

int func_802955C8(void) {
    int result = 0;
    if (D_8014AEB0 != 0) {
        result = D_800D2AE0 != 0;
    }
    return result;
}
