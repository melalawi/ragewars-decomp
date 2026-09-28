/** Return the selected record field, or negative one for another type. */
int func_8024E958(void *record) {
    int result = -1;
    if (*(unsigned char *)record == 1) {
        result = *(int *)((char *)record + 0x3C);
    }
    return result;
}
