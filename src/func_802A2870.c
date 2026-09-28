extern unsigned int D_800D2C00;
extern unsigned int D_800D2C04;
extern unsigned int D_800D2C08;
extern unsigned int D_800D2C0C;

/** Store four arguments in the adjacent global state words. */
void func_802A2870(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3) {
    D_800D2C00 = a0;
    D_800D2C04 = a1;
    D_800D2C08 = a2;
    D_800D2C0C = a3;
}
