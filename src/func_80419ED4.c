/* Allocates and initializes an object, attaches its resource and owner value, then registers it with the resource. */

typedef struct Resource
{
  char pad[0x10];
  unsigned char value;
} Resource;
typedef struct Object
{
  char pad0[0xC];
  short a;
  short b;
  short pad1;
  short c;
  char pad2[0x64];
  Resource *resource;
  int pad3;
  union 
  {
    int value;
    unsigned char bytes[4];
  } owner;
  int pad4;
} Object;
extern Object *func_80252FFC(int);
extern int func_8029A958(void);
extern void func_802A1748(void *, int, int);
extern Resource *func_8040ECB0(int, int);
extern void func_8040EE64(Resource *, Object *);
extern int func_80411E4C(int);
extern void func_80419D04(Object *, int);
extern void func_80419F98(Object *);
Object *func_80419ED4(int arg0, int arg1)
{
  Resource *r;
  Object *p;
  int kind;
  r = func_8040ECB0(func_80411E4C(func_8029A958()), arg0 & 65535);
  func_80411E4C(func_8029A958());
  p = func_80252FFC(0x88);
  func_802A1748(p, 0, 0x88);
  p->b = (kind = 0xB62);
  p->resource = r;
  p->owner.value = arg1;
  p->c = 8;
  p->a = kind;
  p->resource->value = p->owner.bytes[3];
  func_80419D04(p, -1);
  func_80419F98(p);
  func_8040EE64(r, p);
  return p;
}
