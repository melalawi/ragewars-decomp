/** Scale a value by the maximum integer represented by a bit count. */
float func_80260654(float value, int bits) {
    return value / (float)((1 << bits) - 1);
}
