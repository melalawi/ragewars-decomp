extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

void func_8020478C(void *arg0) {
    func_8028B64C(&D_8011FE88, *(unsigned short *)((char *)arg0 + 0xA), *(unsigned short *)((char *)arg0 + 4), 1);
}
