typedef struct Node {
    struct Node *f0;
    struct Node *f4;
} Node;

void func_8023CAFC(Node *arg0, Node *arg1) {
    if (arg1->f4 != 0) {
        arg1->f4->f0 = arg1->f0;
    } else {
        arg0->f0 = arg1->f0;
        arg1->f0->f4 = 0;
    }
    if (arg1->f0 != 0) {
        arg1->f0->f4 = arg1->f4;
        return;
    }
    arg0->f4 = arg1->f4;
    arg1->f4->f0 = 0;
}
