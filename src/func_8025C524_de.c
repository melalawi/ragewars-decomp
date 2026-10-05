#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025C544.h"
#include "types.h"

void func_8025C524_de(void *arg0, s32 arg1)
{
  s8 *new_var;
  int new_var2;
  s32 temp_s0;
  void *temp_s0_2;
  temp_s0 = ((ObjectStateB4 *)(arg0))->unk_B0;
  temp_s0_2 = temp_s0 + 0x84;
  new_var2 = 2;
  new_var = &((ObjectStateB4 *)(arg0))->unk_0;
  func_802B2F00_de(temp_s0_2, ((struct func_8025C458_S3 *) ((s8 *) (temp_s0 + ((*((s32 *) new_var)) * new_var2))))->unkDC);
  func_802B2E30_de(temp_s0_2, arg1 & 0xFF);
}

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



void func_8025C578_de(void *arg0)
{
  s16 *new_var;
  s32 temp_v1;
  void *temp_s0;
  temp_v1 = ((func_8025C598_S1 *)(arg0))->unkB0;
  temp_s0 = temp_v1 + 0x84;
  new_var = (s16 *) (((s8 *) (temp_v1 + ((((func_8025C598_S1 *)(arg0))->unk0) * 2))) + 0xDC);
  func_802B2F00_de(temp_s0, *new_var);
  func_802B2620_de(temp_s0);
}

void func_8025C5BC_de(void *arg0) {
    func_802B2D80_de((((struct func_8021846C_S3 *) ((s8 *) arg0))->unkB0) + 0x84);
}

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern s32 func_802B2620_de(void *arg0);
extern void func_802B2F60_de(void *arg0);




void func_8025C5DC_de(void *arg0) {
    s32 a0;
    void *s1;

    a0 = ((IntegerStateB4_2 *)(arg0))->unk_B0;
    ((IntegerStateB4_2 *)(arg0))->unk_AC = 1;
    ((IntegerStateB4_2 *)(arg0))->unk_50 = 0;
    s1 = (void *)(a0 + 0x84);
    if (((IntegerStateB4_2 *)(arg0))->unk_10 != ((struct func_80245A10_S1 *) a0)->unk104) {
        s32 idx = *(s32 *)arg0;
        s32 addr = a0 + idx * 2;
        func_802B2F00_de(s1, ((struct func_8025C458_S3 *) addr)->unkDC);
        if (func_802B2620_de(s1) != 0) {
            func_802B2F60_de(s1);
        }
        ((IntegerStateB4_2 *)(arg0))->unk_4 = -1;
    }
}

void func_802B25D0_de(void *a, short b);






void func_8025C65C_de(void *arg0) {
    void *base;
    void *arrayBase;
    short *slot;
    unsigned char *cursor;
    base = ((func_8025C67C_S1 *)(arg0))->unkB0;
    arrayBase = &((func_8025C67C_S2 *)(base))->unk7C;
    cursor = (((func_8025C67C_S1 *)(arg0))->unk0 * 2) + (unsigned char *)arrayBase;
    cursor += 0x60;
    slot = (short *)cursor;
    func_802B25D0_de(&((func_8025C67C_S2 *)(base))->unk84, *slot);
    arrayBase = ((short *)arrayBase) + ((func_8025C67C_S1 *)arg0)->unk0;
    slot = &((SlotArray *)arrayBase)->slot[0];
    *slot = -1;
    ((func_8025C67C_S1 *)(arg0))->unk38 = 0;
    ((func_8025C67C_S1 *)(arg0))->unkC = -1;
    ((func_8025C67C_S1 *)(arg0))->unk8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unkA8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unk3A = -1;
    ((func_8025C67C_S1 *)(arg0))->unkB4 = -1;
}
