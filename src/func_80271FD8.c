typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

/** Subtract the right vector from the left vector. */
void func_80271FD8(Vector3 *arg0, Vector3 *arg1, Vector3 *arg2) {
    arg0->x = arg1->x - arg2->x;
    arg0->y = arg1->y - arg2->y;
    arg0->z = arg1->z - arg2->z;
}
