#include "../splat/types/shared/func_802856b0_s1.h"
#include "../splat/types/shared/func_802856b0_s2.h"
#include "../splat/types/shared/pointbits.h"
#include "../splat/types/shared/pointcopy.h"
/* Computes a clamped influence from linked emitters at a three-dimensional point. */
#define NULL ((void *)0)
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */

#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Unknown types */
typedef s32 M2C_UNK;
typedef s8  M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

/* Unknown field access, like `*(type_ptr) &expr->unk_offset` */
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

/* Bitwise (reinterpret) cast */
#define M2C_BITWISE(type, expr) ((type)(expr))

/* Unaligned reads */
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)

/* Unhandled instructions */
#define M2C_ERROR(desc) (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)
#define M2C_DCACHE_CLEAN(addr) (0)
#define M2C_DCACHE_INVALIDATE(addr) (0)
#define M2C_DCACHE_CLEAN_INVALIDATE(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO_LOCKED(addr) (0)
#define M2C_ICACHE_INVALIDATE(addr) (0)
#define M2C_PREFETCH(addr) (0)
#define M2C_PREFETCH_STORE(addr) (0)

#define GLUE_F64(a, b) (0.0)
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define DMULT_HI(a, b) (0)
#define DMULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define REVERSE_BITS(x) (0)
#define ROTATE_RIGHT(x, shift) (0)
#define ARM_RRX(x, carry) (0)
#define BSWAP32(x) (0)
#define BSWAP16(x) (0)
#define BSWAP16X2(x) (0)

/* Carry/overflow bits from partially-implemented instructions */
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)

/* Memcpy patterns */
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy

/* Sh2 control register loads/stores */
#define M2C_LOAD_SR() (0)
#define M2C_LOAD_GBR() (0)
#define M2C_LOAD_VBR() (0)
#define M2C_STORE_SR(a)
#define M2C_STORE_GBR(a)
#define M2C_STORE_VBR(a)

#define M2C_CMP_STR(a, b) (0)
#define M2C_TAS_B(a) (0)

#endif
/* The values func_802856B0 loads by address:
 * 0x800C9FB0 = 1.0 (float, D_800C9FB0 in this cartridge's tables)
 * 0x800C9FB4 = 1.0 (float, unnamed in this cartridge's tables)
 * 0x800C9FB8 = 1.0 (float, D_800C9FB8 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800C9FB8: func_802859A0.c names it and does not declare it const)
 */
int func_80245788(void);
float func_80264F00(void *);
f32 func_802BC380(f32);
s32 func_802C2020();                                /* extern */
M2C_UNK func_802C2040();                         /* extern */
extern s32 D_8014694C;
extern f32 D_800C9FB8[2];

typedef Shared_func_802856B0_S1 func_802856B0_S1;
typedef Shared_func_802856B0_S2 func_802856B0_S2;



typedef Shared_PointBits PointBits;
typedef Shared_PointCopy PointCopy;
f32 func_802856B0(func_802856B0_S1 *arg0, PointBits coords)
{
  PointCopy copy;
  f32 temp_f0;
  f32 temp_f12;
  f32 *copy_2;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f20;
  f32 temp_f20_2;
  f32 temp_f21;
  f32 temp_f2;
  f32 var_f0;
  f32 var_f22;
  s32 *D_8014694C_2;
  s32 temp_s1;
  func_802856B0_S2 *var_s0;
  var_f22 = arg0->unk28;
  temp_s1 = func_802C2020();
  D_8014694C_2 = &D_8014694C;
  if (*D_8014694C_2 == 1 || func_80245788() != 0)
  {
    var_f22 = 0.0f;
  }
  else
  {
    var_s0 = arg0->unk14;
    if (var_s0 != (void *) 0)
    {
      do
      {
        copy_2 = (f32 *) &copy.point.x;
        copy.point = coords;
        temp_f1 = *copy_2 - var_s0->unkC;
        temp_f2 = *(f32 *) &copy.point.y - var_s0->unk10;
        temp_f12 = *(f32 *) &copy.point.z - var_s0->unk14;
        temp_f0 = func_802BC380(temp_f1 * temp_f1 + temp_f2 * temp_f2 + temp_f12 * temp_f12);
        if (temp_f0 == 0.0f || (temp_f1_2 = var_s0->unk18, temp_f1_2 == 0.0f))
        {
          temp_f21 = 1.0f;
        }
        else
        {
          temp_f21 = 0.0f;
          if (temp_f0 < temp_f1_2)
          {
            temp_f21 = 1.0f - temp_f0 / temp_f1_2;
          }
        }
        temp_f2 = temp_f21 * var_s0->unk1C;
        temp_f21 = temp_f2;
        temp_f20 = func_80264F00(&var_s0->unk20);
        temp_f20_2 = temp_f21 * temp_f20 * func_80264F00(&var_s0->unk2C);
        var_s0 = var_s0->unk4;
        var_f22 += temp_f20_2;
      }
      while (var_s0 != (void *) 0);
    }
  }
  func_802C2040(temp_s1);
  if (*D_800C9FB8 < var_f22)
  {
    var_f0 = var_f22;
    goto block_14;
  }
  var_f0 = 0.0f;
  if (!(var_f22 < 0.0f))
  {
    var_f0 = var_f22;
    block_14:
    if (*D_800C9FB8 < var_f0)
    {
      var_f0 = *D_800C9FB8;
    }

  }
  return var_f0;
}
