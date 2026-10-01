/* Sets up a red effect with the default transform for the active view, draws it, and clears its mode. */
typedef struct {float x,y,z;} Vec;
typedef struct {Vec position,rotation;} Transform;
typedef struct {char pad[0x140];Transform view[1];} Object;
typedef struct {float red,green,blue,radius,extra;} Effect;
extern int D_800D15E0;
extern Effect D_800D15E4;
extern float D_800E2728;
extern Transform D_800D0EF8;
extern int D_800D297C,D_801540E0;
extern void func_8024A1C0(Object *, void *, void *);
void func_80443298(Object *object, void *context, void *lookup) {
 D_800D15E0=3;
 object->view[D_800D297C]=D_800D0EF8;
 D_800D15E4.red=D_800E2728;
 D_800D15E4.green=0;
 D_800D15E4.blue=0;
 D_800D15E4.extra=0;
 D_800D15E4.radius=(float)(D_801540E0/2);
 func_8024A1C0(object,context,lookup);
 D_800D15E0=0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CBBB8_4[] = {0x38, 0x38, 0x38, 0x00};
const unsigned char unbake_rodata_800CBBBC_4[] = {0x38, 0x38, 0x38, 0x00};
const unsigned char unbake_rodata_800CBBC0_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800CBBC4_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800CBBC8_4[] = {0x00, 0x00, 0x7F, 0x00};
const unsigned char unbake_rodata_800CBBCC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D0EF8_4[] = {0x38, 0x38, 0x38, 0x00};
const unsigned char unbake_rodata_800D0EFC_4[] = {0x38, 0x38, 0x38, 0x00};
const unsigned char unbake_rodata_800D0F00_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800D0F04_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800D0F08_4[] = {0x00, 0x00, 0x7F, 0x00};
const unsigned char unbake_rodata_800D0F0C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CC888_4[] = {0x38, 0x38, 0x38, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CD258_4[] = {0x38, 0x38, 0x38, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CBCA8_4[] = {0x38, 0x38, 0x38, 0x00};
#endif
