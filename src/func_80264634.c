extern unsigned char D_8010FBE3[];

int func_80264634(int arg0) {
    return ((D_8010FBE3[arg0 * 4] >> 3) ^ 1) & 1;
}
