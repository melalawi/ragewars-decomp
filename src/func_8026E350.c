/** Store four bytes in the global color-like value. */
extern unsigned char D_800D15F8;
extern unsigned char D_800D15F9;
extern unsigned char D_800D15FA;
extern unsigned char D_800D15FB;

void func_8026E350(unsigned char first, unsigned char second,
                   unsigned char third, unsigned char fourth) {
    D_800D15F8 = first;
    D_800D15F9 = second;
    D_800D15FA = fourth;
    D_800D15FB = third;
}
