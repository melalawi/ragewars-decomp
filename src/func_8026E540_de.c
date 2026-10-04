#include "span_1000/code_8026D4F0.h"


/** Insert a node adjacent to the supplied node in an intrusive ordered tree. */
void func_8026E540_de(TreeNode **root, TreeNode **empty_root, TreeNode *node, TreeNode *current) {
    if (current != 0) {
        if (node->key < current->key) {
            current->link18 = node;
            node->link1c = 0;
            node->link18 = 0;
            node->link14 = current;
            node->link10 = current->link10;
            if (current->link10 != 0)
                current->link10->link14 = node;
            current->link10 = node;
            if (*root == current)
                *root = node;
        } else {
            current->link1c = node;
            node->link1c = 0;
            node->link18 = 0;
            node->link14 = current->link14;
            if (current->link14 != 0)
                current->link14->link10 = node;
            node->link10 = current;
            current->link14 = node;
        }
    } else {
        *empty_root = node;
        *root = node;
        node->link1c = 0;
        node->link18 = 0;
        node->link14 = 0;
        node->link10 = 0;
    }
}
