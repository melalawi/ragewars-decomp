#include "common/types.h"
#include "span_1000/code_8025DB64.h"



extern signed char D_80108080;
extern int func_80258D10_de(void *arg0);
extern void func_80258D08_de(void *arg0, int arg1);
extern int func_8025826C_de(void *arg0, int arg1, Vec3 arg2, int arg3);

int func_8025E04C_de(int arg0) {
    int temp_s0;
    int temp_s1;

    if (D_801427D0 != 0) {
        return -1;
    }
    {
        Vec3 vec;
        register float zero = (float)0;

        vec.z = zero;
        vec.y = zero;
        vec.x = zero;
        temp_s1 = func_80258D10_de(&D_80108080);
        func_80258D08_de(&D_80108080, 1);
        temp_s0 = func_8025826C_de(&D_80108080, arg0, vec, 0);
        func_80258D08_de(&D_80108080, temp_s1);
    }
    return temp_s0;
}
