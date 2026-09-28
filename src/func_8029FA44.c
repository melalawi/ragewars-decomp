typedef struct {
    int a, b, c, d;
} Quad;

void func_8029FA44(void *arg0, void *arg1) {
    char *dst = (char *)arg0;
    char *src = (char *)arg1;
    char *end = src + 0x40;
    do {
        *(Quad *)dst = *(Quad *)src;
        src += 0x10;
        dst += 0x10;
    } while (src != end);
}
