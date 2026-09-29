typedef struct func_8029FCA8_S1 func_8029FCA8_S1;
struct func_8029FCA8_S1 {
    float unk0;
    char pad0[0x14 - 0x0 - sizeof(float)];
    float unk14;
    char pad14[0x28 - 0x14 - sizeof(float)];
    float unk28;
};

/** Broadcast a float value into three fields of the object. */
void func_8029FCA8(void *arg0, float value) {
    ((func_8029FCA8_S1 *)(arg0))->unk0 = value;
    ((func_8029FCA8_S1 *)(arg0))->unk14 = value;
    ((func_8029FCA8_S1 *)(arg0))->unk28 = value;
}
