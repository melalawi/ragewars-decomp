typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

/** Cross product of two vectors, written directly to the output (no aliasing guard). */
void func_80272088(Vector3 *out, Vector3 *a, Vector3 *b) {
    out->x = (a->y * b->z) - (a->z * b->y);
    out->y = (a->z * b->x) - (a->x * b->z);
    out->z = (a->x * b->y) - (a->y * b->x);
}
