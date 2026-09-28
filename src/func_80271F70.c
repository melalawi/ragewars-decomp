typedef struct {
    float x;
    float y;
    float z;
} Vector3;

/** Component-wise multiply two 3-vectors. */
void func_80271F70(Vector3 *result, Vector3 *left, Vector3 *right) {
    result->x = left->x * right->x;
    result->y = left->y * right->y;
    result->z = left->z * right->z;
}
