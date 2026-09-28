typedef struct {
    int first;
    int second;
} Pair;

/** Swap two eight-byte pairs. */
void func_802405EC(Pair *left, Pair *right) {
    Pair temporary = *left;
    *left = *right;
    *right = temporary;
}
