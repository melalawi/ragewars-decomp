typedef struct {
    int a;
    int b;
} Pair;

void func_8028DFC0(Pair *arg0, Pair *arg1) {
    Pair tmp;

    tmp = *arg0;
    *arg0 = *arg1;
    *arg1 = tmp;
}
