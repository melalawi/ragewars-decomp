typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

/** Cross product of two vectors, written through a local temp to allow aliasing with out. */
void func_8029F458(Vector3 *out, Vector3 *a, Vector3 *b) {
    Vector3 tmp;

    tmp.x = (a->y * b->z) - (a->z * b->y);
    tmp.y = (a->z * b->x) - (a->x * b->z);
    tmp.z = (a->x * b->y) - (a->y * b->x);
    *out = tmp;
}
