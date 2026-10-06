#include "span_16E000/code_80442BC8.h"
#include "types.h"
#include "common/unused.h"

extern int D_800CC390;
extern f32 D_800CC394_de[5];
extern Box D_800CBCA8;
extern int D_800CD72C,D_8014DE50;
extern void func_8024A1D0_de(Object_func_80443128_de *, void *, void *);
void func_80443128_de(Object_func_80443128_de *object, void *context, void *lookup) {
 D_800CC390=3;
 object->view[D_800CD72C]=D_800CBCA8;
 D_800CC394_de[0]=(255.0f);
 D_800CC394_de[1]=0;
 D_800CC394_de[2]=0;
 D_800CC394_de[4]=0;
 D_800CC394_de[3]=(float)(D_8014DE50/2);
 func_8024A1D0_de(object,context,lookup);
 D_800CC390=0;
}
