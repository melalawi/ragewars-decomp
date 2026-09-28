int func_802B74C4(void *arg0) {
    unsigned char *p;
    unsigned int b0, b1, b2, b3;

    p = *(unsigned char **)((char *)arg0 + 8);
    b0 = p[0];
    p = p + 1;
    *(unsigned char **)((char *)arg0 + 8) = p;
    b1 = p[0];
    *(unsigned char **)((char *)arg0 + 8) = p + 1;
    b2 = p[1];
    *(unsigned char **)((char *)arg0 + 8) = p + 2;
    b3 = p[2];
    *(unsigned char **)((char *)arg0 + 8) = p + 3;
    return (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
}
