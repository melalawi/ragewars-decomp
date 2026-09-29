typedef struct func_8024E958_S1 func_8024E958_S1;
struct func_8024E958_S1 {
    char pad0[0x3C];
    int unk3C;
};

/** Return the selected record field, or negative one for another type. */
int func_8024E958(void *record) {
    int result = -1;
    if (*(unsigned char *)record == 1) {
        result = ((func_8024E958_S1 *)(record))->unk3C;
    }
    return result;
}
