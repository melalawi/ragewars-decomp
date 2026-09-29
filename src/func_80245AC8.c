/* Returns the globally selected record's float at 0xA0 scaled by D_800C88CC. */
extern void *D_800E2830;
extern float D_800C88CC;

typedef struct func_80245AC8_S1 func_80245AC8_S1;
struct func_80245AC8_S1 {
    char pad0[0xA0];
    float unkA0;
};

float func_80245AC8(void) {
    void *record = D_800E2830;
    return (((func_80245AC8_S1 *)(record))->unkA0) * (D_800C88CC);
}
