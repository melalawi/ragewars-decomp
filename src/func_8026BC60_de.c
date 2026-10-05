#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8026AC38.h"
#include "types.h"

#define NULL ((void *) 0)









extern u8 D_8010C567;
extern Node_func_8026BC60_de *D_8010C568;
extern Node_func_8026BC60_de *D_8010C56C;
extern s32 D_8010C570;
extern s32 D_8010C578;
extern Node_func_8026BC60_de *D_8010C57C;
extern s32 D_8010C580;
extern Node_func_8026BC60_de *D_8010C584;
extern void **D_8010C58C;
extern Item_func_8026BC60_de D_8010C590[];
extern Node_func_8026BC60_de D_80110410[];
extern struct Shape_typemap_165 D_80111718[];

extern void *func_8028FDB4_de(void *, s32);

/* Returns the node keyed key in the tree under n, or the node a new key would hang from. */
static inline Node_func_8026BC60_de *find_node(Node_func_8026BC60_de *n, u32 key) {
    Node_func_8026BC60_de *parent = NULL;

    while (n != NULL) {
        if (n->key == key) {
            return n;
        }
        parent = n;
        if (key < n->key) {
            n = n->left;
        } else {
            n = n->right;
        }
    }
    return parent;
}

/* Files each entry of the list the resource D_8011064C holds into one of two keyed trees, allocating a
 * node from D_801144D0 when its key is new, and appends one item per queued parameter in D_801157D8
 * to that node's list; then clears the queue count D_80110640. */
void func_8026BC60_de(void) {
    s32 *list;
    s32 count;
    s32 i;
    s32 j;
    void *entry;
    Source_func_8026BC60_de *source;
    u32 key;
    Node_func_8026BC60_de *parent;
    Node_func_8026BC60_de *node;
    s32 *data;
    Item_func_8026BC60_de *item;
    struct Shape_typemap_165 *param;

    if (D_8010C580 != 0) {
        list = func_8028FDB4_de(*D_8010C58C, 2);
        count = *list;
        for (i = 0; i < count; i++) {
            entry = func_8028FDB4_de(list, i);
            source = func_8028FDB4_de(entry, 0);
            key = (source->id << 8) | D_8010C567;
            if (source->flags & 0x700) {
                parent = find_node(D_8010C57C, key);
            } else {
                parent = find_node(D_8010C568, key);
            }
            if (parent != NULL && parent->key == key) {
                node = parent;
            } else {
                if (D_8010C578 == 120) {
                    break;
                }
                node = &D_80110410[D_8010C578++];
                node->key = key;
                node->source = source;
                node->tail = NULL;
                node->head = NULL;
                if (source->flags & 0x700) {
                    if (parent != NULL) {
                        if (node->key < parent->key) {
                            parent->left = node;
                            node->right = NULL;
                            node->left = NULL;
                            node->next = parent;
                            node->prev = parent->prev;
                            if (parent->prev != NULL) {
                                parent->prev->next = node;
                            }
                            parent->prev = node;
                            if (D_8010C584 == parent) {
                                D_8010C584 = node;
                            }
                        } else {
                            parent->right = node;
                            node->right = NULL;
                            node->left = NULL;
                            node->next = parent->next;
                            if (parent->next != NULL) {
                                parent->next->prev = node;
                            }
                            node->prev = parent;
                            parent->next = node;
                        }
                    } else {
                        D_8010C57C = node;
                        D_8010C584 = node;
                        node->right = NULL;
                        node->left = NULL;
                        node->next = NULL;
                        node->prev = NULL;
                    }
                } else {
                    if (parent != NULL) {
                        if (node->key < parent->key) {
                            parent->left = node;
                            node->right = NULL;
                            node->left = NULL;
                            node->next = parent;
                            node->prev = parent->prev;
                            if (parent->prev != NULL) {
                                parent->prev->next = node;
                            }
                            parent->prev = node;
                            if (D_8010C56C == parent) {
                                D_8010C56C = node;
                            }
                        } else {
                            parent->right = node;
                            node->right = NULL;
                            node->left = NULL;
                            node->next = parent->next;
                            if (parent->next != NULL) {
                                parent->next->prev = node;
                            }
                            node->prev = parent;
                            parent->next = node;
                        }
                    } else {
                        D_8010C568 = node;
                        D_8010C56C = node;
                        node->right = NULL;
                        node->left = NULL;
                        node->next = NULL;
                        node->prev = NULL;
                    }
                }
            }
            data = func_8028FDB4_de(entry, 1);
            for (j = 0; j < D_8010C580; j++) {
                param = &D_80111718[j];
                if (D_8010C570 != 500) {
                    item = &D_8010C590[D_8010C570++];
                    item->data = data;
                    item->unk4 = param->field_0;
                    item->unk8 = param->field_4;
                    item->unkC = param->field_8;
                    item->unk10 = source->unk18;
                    item->unk12 = source->unk1A;
                    item->unk14 = param->field_C;
                    item->next = NULL;
                    if (node->tail != NULL) {
                        node->tail->next = item;
                    } else {
                        node->head = item;
                    }
                    node->tail = item;
                }
            }
        }
        D_8010C580 = 0;
    }
}
