/** Stores D_800D2988 times the float at 0x20 of the object at 0x18 in the float at 0x1A4. */
extern float D_800D2988;
typedef struct func_8024F608_S1 func_8024F608_S1;
typedef struct func_8024F608_S2 func_8024F608_S2;
struct func_8024F608_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x1A4 - 0x18 - sizeof(void*)];
    float unk1A4;
};
struct func_8024F608_S2 {
    char pad0[0x20];
    float unk20;
};

void func_8024F608(void *arg0) {
    void *p = ((func_8024F608_S1 *)(arg0))->unk18;
    ((func_8024F608_S1 *)(arg0))->unk1A4 = (D_800D2988) * (((func_8024F608_S2 *)(p))->unk20);
}
