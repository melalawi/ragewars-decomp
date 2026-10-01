typedef struct func_8020C9B0_S1 func_8020C9B0_S1;
struct func_8020C9B0_S1 {
    char pad0[0x8];
    char* unk8;
};

/** Return an indexed record from the table at object offset 0x8. */
void *func_8020C9B0(void *object, int index) {
    char *base = ((func_8020C9B0_S1 *)(object))->unk8;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3504_4 = 0.5f;
const float unbake_rodata_800C3508_4 = 20.4799995f;
const float unbake_rodata_800C350C_4 = 1.0f;
const float unbake_rodata_800C3510_4 = 1.0f;
const float unbake_rodata_800C3514_4 = 1.53600001f;
const float unbake_rodata_800C3518_4 = 20480.0f;
const float unbake_rodata_800C351C_4 = 3.07200003f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8648_4 = 1.0f;
const float unbake_rodata_800C864C_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3568_4 = 1.0f;
const float unbake_rodata_800C356C_4 = 0.25f;
const float unbake_rodata_800C3570_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C34FC_4 = 1.0f;
const float unbake_rodata_800C3500_4 = 0.5f;
const float unbake_rodata_800C3504_4 = 1.0f;
const float unbake_rodata_800C3508_4 = 0.800000012f;
const float unbake_rodata_800C350C_4 = 0.5f;
const float unbake_rodata_800C3510_4 = 1.0f;
const float unbake_rodata_800C3514_4 = 0.899999976f;
const float unbake_rodata_800C3518_4 = 2.5f;
const float unbake_rodata_800C351C_4 = 1.0f;
const float unbake_rodata_800C3520_4 = 0.5f;
const float unbake_rodata_800C3524_4 = 0.104719765f;
const float unbake_rodata_800C3528_4 = 1.0f;
const float unbake_rodata_800C352C_4 = 0.069813177f;
const float unbake_rodata_800C3530_4 = 0.166666672f;
const float unbake_rodata_800C3534_4 = 0.087266475f;
const float unbake_rodata_800C3538_4 = 0.0349065885f;
const float unbake_rodata_800C353C_4 = 1.0f;
const float unbake_rodata_800C3540_4 = 0.0799999982f;
const float unbake_rodata_800C3544_4 = 10.0f;
const float unbake_rodata_800C3548_4 = 1.0f;
const float unbake_rodata_800C354C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3550_4 = 45.0f;
const float unbake_rodata_800C3554_4 = 75.0f;
const float unbake_rodata_800C3558_4 = 75.0f;
const float unbake_rodata_800C355C_4 = 0.666666687f;
const float unbake_rodata_800C3560_4 = 2.66666603f;
const float unbake_rodata_800C3564_4 = 1.33333302f;
const float unbake_rodata_800C3568_4 = 0.0174532942f;
const float unbake_rodata_800C356C_4 = 1.27927935f;
const float unbake_rodata_800C3570_4 = 1.0f;
const float unbake_rodata_800C3574_4 = 57.2957764f;
const float unbake_rodata_800C3578_4 = 0.949999988f;
const float unbake_rodata_800C357C_4 = 16.0f;
const float unbake_rodata_800C3580_4 = 1.0f;
const float unbake_rodata_800C3584_4 = (-1.0f);
const float unbake_rodata_800C3588_4 = 0.0109083094f;
const float unbake_rodata_800C358C_4 = 0.00872664712f;
const float unbake_rodata_800C3590_4 = 128.0f;
const float unbake_rodata_800C3594_4 = 127.0f;
const float unbake_rodata_800C3598_4 = 7168.0f;
const float unbake_rodata_800C359C_4 = 0.09765625f;
const float unbake_rodata_800C35A0_4 = 11.0f;
const float unbake_rodata_800C35A4_4 = 5.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3558_4 = 1.0f;
const float unbake_rodata_800C355C_4 = 15.0f;
#endif
