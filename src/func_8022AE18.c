typedef struct {
    int a;
    int b;
    int c;
} Triple;

int func_802866F8(void *a);

extern char D_8011FE88[];

int func_8022AE18(void *arg0, void *arg1) {
    int flag;
    Triple *src;
    src = (Triple *)arg1;
    flag = func_802866F8(D_8011FE88);
    *(Triple *)((char *)arg0 + 0x8) = *src;
    *(int *)((char *)arg0 + 0x14) = flag;
    *(Triple *)((char *)arg0 + 0x2F0) = *src;
    *(int *)((char *)arg0 + 0x2FC) = flag;
    return flag != 0;
}
