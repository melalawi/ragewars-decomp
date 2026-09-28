/* Clamps a level to between zero and D_800C8FE0, scales it by D_800C8FE4 and stores it as an integer
   at 0x2B9C of the object. */
typedef struct {
    char pad[0x2B9C];
    int level;
} Obj;

extern float D_800C8FE0;
extern float D_800C8FE4;

void func_80258E7C(Obj *obj, float value) {
    float v;
    float max = D_800C8FE0;
    if (value > max || !(value < 0.0f)) {
        v = value;
        if (v > max) {
            v = max;
        }
    } else {
        v = 0.0f;
    }
    obj->level = v * D_800C8FE4;
}
