/* Builds a 256-entry byte lookup table: every entry becomes 0xFF, then each of the count
   (key, value) byte pairs stores value at table[key]. */
void func_802AC34C(int unused, unsigned char *pairs, int count, unsigned char *table) {
    int i;
    unsigned char *p;
    unsigned char fill = 0xFF;

    i = 255;
    p = table + i;
    for (; i >= 0; i--) {
        *p-- = fill;
    }
    for (i = 0; i < count; i++) {
        table[pairs[0]] = pairs[1];
        pairs += 2;
    }
}
