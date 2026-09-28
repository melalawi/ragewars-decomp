typedef struct {
    float x;
    float y;
    float z;
} Vector3f;

extern int D_80146890;
extern signed char D_8010C080;
extern int func_80258D30(void *arg0);
extern void func_80258D28(void *arg0, int arg1);
extern int func_8025828C(void *arg0, int arg1, Vector3f arg2, int arg3);

int func_8025E06C(int arg0) {
    int temp_s0;
    int temp_s1;

    if (D_80146890 != 0) {
        return -1;
    }
    {
        Vector3f vec;
        register float zero = (float)0;

        vec.z = zero;
        vec.y = zero;
        vec.x = zero;
        temp_s1 = func_80258D30(&D_8010C080);
        func_80258D28(&D_8010C080, 1);
        temp_s0 = func_8025828C(&D_8010C080, arg0, vec, 0);
        func_80258D28(&D_8010C080, temp_s1);
    }
    return temp_s0;
}
