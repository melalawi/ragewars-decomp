typedef struct {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
} Six;

unsigned int func_802604BC(void *object);
void *func_8028FD94(void *arg0, int arg1);

void func_80262524(void *arg0, void *arg1) {
    Six *result = (Six *)func_8028FD94((void *)func_802604BC(arg0), 6);

    *(Six *)arg1 = *result;
}
