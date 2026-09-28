/* Returns the globally selected record's float at 0xA0 scaled by D_800C88CC. */
extern void *D_800E2830;
extern float D_800C88CC;

float func_80245AC8(void) {
    void *record = D_800E2830;
    return (*(float *)((char *)record + 0xA0)) * (D_800C88CC);
}
