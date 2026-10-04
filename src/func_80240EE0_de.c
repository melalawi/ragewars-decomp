#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "types.h"

/* Sets up one face of a box as a four-corner quad of kind 4, copying points 3, 2, 6 and 7 of the
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

void func_80240EE0_de(struct Quad *quad, Vec3 *points) {
    quad->kind = 4;
    quad->corner[3] = points[3];
    quad->corner[2] = points[2];
    quad->corner[1] = points[6];
    quad->corner[0] = points[7];
    quad_normal(quad);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCCA8_18[] = {0x0043B744U, 0x0043B744U, 0x0043B754U, 0x0043B754U, 0x0043B764U, 0x0043B774U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1F40_4 = 0.0666666701f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E4AA0_20[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x72, 0x65, 0x64};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF368_C[] = {0x80, 0x0D, 0x2E, 0x20, 0x80, 0x0D, 0x87, 0x20, 0x80, 0x0D, 0xC5, 0x48};
const unsigned char unbake_rodata_800DF374_48[] = {0x80, 0x0D, 0x2E, 0x38, 0x80, 0x0D, 0x87, 0x3C, 0x80, 0x0D, 0xC5, 0x60, 0x80, 0x0D, 0x2E, 0x50, 0x80, 0x0D, 0x87, 0x58, 0x80, 0x0D, 0xC5, 0x78, 0x80, 0x0D, 0x2E, 0x68, 0x80, 0x0D, 0x87, 0x74, 0x80, 0x0D, 0xC5, 0x90, 0x80, 0x0D, 0x2E, 0x80, 0x80, 0x0D, 0x87, 0x90, 0x80, 0x0D, 0xC5, 0xA8, 0x80, 0x0D, 0x2E, 0x94, 0x80, 0x0D, 0x87, 0xA4, 0x80, 0x0D, 0xC5, 0xBC, 0x80, 0x0D, 0x2E, 0xA4, 0x80, 0x0D, 0x87, 0xAC, 0x80, 0x0D, 0xC5, 0xCC};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD4A0_1C[] = {0x0041D174U, 0x0041D1FCU, 0x0041D3A0U, 0x0041D258U, 0x0041D2C0U, 0x0041D314U, 0x0041D3A0U};
const float unbake_rodata_800DD4BC_4 = 0.00333333341f;
const float unbake_rodata_800DD4C0_4 = 30.0f;
const float unbake_rodata_800DD4C4_4 = 220.0f;
const float unbake_rodata_800DD4C8_4 = 2.14748365e+09f;
#endif
