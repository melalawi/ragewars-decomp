#ifndef RW_RUNTIME_GLOBALS_H
#define RW_RUNTIME_GLOBALS_H

/*
 * Declarations recovered from the native-recomp run ending in func_80299368.
 * GDB access watchpoints observed naturally aligned 32-bit integer-domain
 * accesses to the scalar words, a 32-bit pointer value for D_800D8444, and
 * address-taking / offset-zero word accesses for the opaque storage bases.
 * No floating-point access to any declaration below was observed.
 * The later run ending at the D_800D2B94 zero-callback wall associated
 * D_801462C8 with the object passed to func_80444030. That routine performed
 * naturally aligned 32-bit integer-domain stores at offset zero; the observed
 * values were zero and 0x04000000. The object's extent remains unknown.
 */
extern s32 D_800D297C;
extern void *D_800D8444;
extern s32 D_8010513C;

/* Extents and internal member layouts were not established by this run. */
extern u8 D_80104570[];
extern u8 D_8011FE88[];
extern u8 D_80145040[];
extern u8 D_80145088[];
extern u8 D_801462C8[];

#endif
