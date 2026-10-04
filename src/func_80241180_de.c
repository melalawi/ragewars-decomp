#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "types.h"

/* Sets up one face of a box as a four-corner quad of kind 4, copying points 2, 1, 5 and 6 of the
   input into corners 3, 2, 1 and 0 and deriving its normal at 0x48 from the edges corner 1 minus
   corner 0 and corner 2 minus corner 1 through func_80271F68_de, their cross product through
   func_80272018_de and normalisation through func_8027207C_de. Adapted from func_80240D20_de with the copied points changed. */




extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027207C_de(Vec3 *);

/* The edge vectors belong to this helper; declared in the face function itself, GCC 2.8.1 keeps
   the second edge's frame address in a saved register and grows the frame. */
static inline void quad_normal(struct Quad *quad) {
    Vec3 first;
    Vec3 second;

    func_80271F68_de(&first, &quad->corner[1], &quad->corner[0]);
    func_80271F68_de(&second, &quad->corner[2], &quad->corner[1]);
    func_80272018_de(&quad->normal, &second, &first);
    func_8027207C_de(&quad->normal);
}

void func_80241180_de(struct Quad *quad, Vec3 *points) {
    quad->kind = 4;
    quad->corner[3] = points[2];
    quad->corner[2] = points[1];
    quad->corner[1] = points[5];
    quad->corner[0] = points[6];
    quad_normal(quad);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCE38_2C[] = {0x0043C768U, 0x0043C770U, 0x0043C778U, 0x0043C780U, 0x0043C788U, 0x0043C790U, 0x0043C798U, 0x0043C7A0U, 0x0043C7A8U, 0x0043C7B0U, 0x0043C7B8U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1FC4_4 = 0.00350000011f;
const float unbake_rodata_800E1FC8_4 = 5.0f;
const float unbake_rodata_800E1FCC_4 = (-100.0f);
const float unbake_rodata_800E1FD0_4 = 28.0f;
const float unbake_rodata_800E1FD4_4 = 12.0f;
const float unbake_rodata_800E1FD8_4 = (-3.0f);
const float unbake_rodata_800E1FDC_4 = (-18.0f);
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E58D4_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF3EC_84[] = {0x80, 0x0D, 0x2E, 0xFC, 0x80, 0x0D, 0x88, 0x18, 0x80, 0x0D, 0xC6, 0x24, 0x80, 0x0D, 0x2F, 0x00, 0x80, 0x0D, 0x88, 0x1C, 0x80, 0x0D, 0xC6, 0x28, 0x80, 0x0D, 0x2F, 0x04, 0x80, 0x0D, 0x88, 0x20, 0x80, 0x0D, 0xC6, 0x2C, 0x80, 0x0D, 0x2F, 0x08, 0x80, 0x0D, 0x88, 0x24, 0x80, 0x0D, 0xC6, 0x30, 0x80, 0x0D, 0x2F, 0x0C, 0x80, 0x0D, 0x88, 0x28, 0x80, 0x0D, 0xC6, 0x34, 0x80, 0x0D, 0x2F, 0x10, 0x80, 0x0D, 0x88, 0x2C, 0x80, 0x0D, 0xC6, 0x38, 0x80, 0x0D, 0x2F, 0x14, 0x80, 0x0D, 0x88, 0x30, 0x80, 0x0D, 0xC6, 0x3C, 0x80, 0x0D, 0x2F, 0x18, 0x80, 0x0D, 0x88, 0x34, 0x80, 0x0D, 0xC6, 0x40, 0x80, 0x0D, 0x2F, 0x1C, 0x80, 0x0D, 0x88, 0x38, 0x80, 0x0D, 0xC6, 0x44, 0x80, 0x0D, 0x2F, 0x20, 0x80, 0x0D, 0x88, 0x3C, 0x80, 0x0D, 0xC6, 0x48, 0x80, 0x0D, 0x2F, 0x24, 0x80, 0x0D, 0x88, 0x40, 0x80, 0x0D, 0xC6, 0x4C};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD524_4 = 255.0f;
const float unbake_rodata_800DD528_4 = 4.0f;
const float unbake_rodata_800DD52C_4 = 210.0f;
#endif
