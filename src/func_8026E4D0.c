extern unsigned int D_8011062C;
extern unsigned int D_80110628;
extern unsigned int D_80110644;
extern unsigned int D_8011063C;

/** Clear four related global state words. */
void func_8026E4D0(void) {
    D_8011062C = 0;
    D_80110628 = 0;
    D_80110644 = 0;
    D_8011063C = 0;
}
