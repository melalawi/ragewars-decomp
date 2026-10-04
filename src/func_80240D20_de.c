#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "types.h"

/* Sets up one face of a box as a four-corner quad of kind 4, copying points 0, 1, 2 and 3 of the
   input into corners 3, 2, 1 and 0 and deriving its normal at 0x48 from the edges corner 1 minus
   corner 0 and corner 2 minus corner 1 through func_80271F68_de, their cross product through
   func_80272018_de and normalisation through func_8027207C_de. */




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

void func_80240D20_de(struct Quad *quad, Vec3 *points) {
    quad->kind = 4;
    quad->corner[3] = points[0];
    quad->corner[2] = points[1];
    quad->corner[1] = points[2];
    quad->corner[0] = points[3];
    quad_normal(quad);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCC7C_4 = 4.0f;
const float unbake_rodata_800DCC80_4 = 255.0f;
const float unbake_rodata_800DCC84_4 = 150.0f;
const float unbake_rodata_800DCC88_4 = 255.0f;
const float unbake_rodata_800DCC8C_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1EC0_20[] = {0x004339F8U, 0x004339F8U, 0x00433A94U, 0x00433A94U, 0x00433A7CU, 0x00433A6CU, 0x00433ABCU, 0x004339F8U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E486B_1[] = {0x00};
const unsigned char unbake_rodata_800E486C_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF308_C[] = {0x80, 0x0D, 0x2D, 0x60, 0x80, 0x0D, 0x86, 0x40, 0x80, 0x0D, 0xC4, 0x88};
const unsigned char unbake_rodata_800DF314_C[] = {0x80, 0x0D, 0x2D, 0x78, 0x80, 0x0D, 0x86, 0x5C, 0x80, 0x0D, 0xC4, 0xA0};
const unsigned char unbake_rodata_800DF320_C[] = {0x80, 0x0D, 0x2D, 0x90, 0x80, 0x0D, 0x86, 0x78, 0x80, 0x0D, 0xC4, 0xB8};
const unsigned char unbake_rodata_800DF32C_C[] = {0x80, 0x0D, 0x2D, 0xA8, 0x80, 0x0D, 0x86, 0x94, 0x80, 0x0D, 0xC4, 0xD0};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD488_4 = 0.0174532942f;
const float unbake_rodata_800DD48C_4 = 0.0174532942f;
#endif
