/* Initializes the current object from the selected configuration, enables its mode, and updates the selection mask and saved dimensions. */
typedef struct { char pad0[0x6C]; float width,height; char pad74[0x228]; float a,b,c,d; } Object;
typedef struct { Object *object; char pad4[0x88]; float width,height; } Globals;
typedef struct { char pad0[0x108]; int a,b,c,d; } State;
extern Globals D_801450A8;
extern State *D_800E2830;
extern float D_800E1640[];
extern char D_8011FE88[];
extern int func_804030E0(int);
extern int func_8025471C(void);
extern void func_8025470C(int);
extern void func_8044E178(void *, int, int);
void func_804220D8(int key) {
 Globals *g = &D_801450A8;
 Object *o = g->object;
 float width = 45.0f;
 float height = D_800E1640[1];
 State *state = D_800E2830;
 int selection;
 o->width = width; o->height = height;
 o->a = state->a; o->b = state->b; o->c = state->c; o->d = state->d;
 selection = func_804030E0(key);
 if (!func_8025471C()) func_8025470C(1);
 func_8044E178(D_8011FE88, ~selection, 0);
 g->width = width; width = height; g->height = width;
}
