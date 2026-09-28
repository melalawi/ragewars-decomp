/* Recursively replaces a node reference throughout a linked hierarchy and copies the old node links into its replacement. */
#define NULL ((void *)0)
typedef struct Node {struct Node *unk0,*unk4,*unk8;} Node;
void func_8040EDB8(Node *arg0, Node *arg1, Node *arg2, Node *arg3) {
    Node *temp_a0;
    Node *temp_a0_2;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk4;
        if (temp_a0 != NULL) {
            func_8040EDB8(temp_a0,arg1,arg2,arg3);
        }
        temp_a0_2 = arg0->unk8;
        if (temp_a0_2 != NULL) {
            func_8040EDB8(temp_a0_2, arg0, arg2, arg3);
        }
        if (arg0->unk0 == arg2) {
            arg0->unk0 = arg3;
        }
        if (arg0->unk4 == arg2) {
            arg0->unk4 = arg3;
        }
        if (arg0->unk8 == arg2) {
            arg0->unk8 = arg3;
        }
        if (arg0 == arg2) {
            arg3->unk0 = (Node *) arg0->unk0;
            arg3->unk4 = (Node *) arg0->unk4;
            arg3->unk8 = (Node *) arg0->unk8;
        }
    }
}
