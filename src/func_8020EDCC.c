/** Reset the float field of each occupied player slot's table entry to the default value. */
extern char D_8013B364[];
extern float D_800C6FCC;
extern char *func_8020CFE0(char *, int);

typedef struct Actor {
    char pad0[0x1D8];
    char **info;
} Actor;

void func_8020EDCC(char *arg0) {
    char *table = D_8013B364;
    int i;
    float value;

    if (table != 0) {
        value = D_800C6FCC;
        for (i = 0; i < 10; i++) {
            Actor *a = *(Actor **)(arg0 + 0x3C + i * 4);
            if (a != 0) {
                *(float *)(func_8020CFE0(table, *(int *)(*(char **)((char *)a->info + 0x1454) + 4)) + 0x18) = value;
            }
        }
    }
}
