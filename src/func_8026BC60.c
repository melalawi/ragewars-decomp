#include "basetypes.h"

#define NULL ((void *) 0)

typedef struct Source {
    s32 flags;
    u16 id;
    u8 pad6[0x12];
    u16 unk18;
    u16 unk1A;
} Source;

typedef struct Param {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Param;

typedef struct Item {
    s32 *data;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u16 unk10;
    u16 unk12;
    s32 unk14;
    s32 unk18;
    struct Item *next;
} Item;

typedef struct Node {
    u32 key;
    Source *source;
    Item *head;
    Item *tail;
    struct Node *prev;
    struct Node *next;
    struct Node *left;
    struct Node *right;
} Node;

extern u8 D_80110627;
extern Node *D_80110628;
extern Node *D_8011062C;
extern s32 D_80110630;
extern s32 D_80110638;
extern Node *D_8011063C;
extern s32 D_80110640;
extern Node *D_80110644;
extern void **D_8011064C;
extern Item D_80110650[];
extern Node D_801144D0[];
extern Param D_801157D8[];

extern void *func_8028FD94(void *, s32);

/* Returns the node keyed key in the tree under n, or the node a new key would hang from. */
static inline Node *find_node(Node *n, u32 key) {
    Node *parent = NULL;

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
void func_8026BC60(void) {
    s32 *list;
    s32 count;
    s32 i;
    s32 j;
    void *entry;
    Source *source;
    u32 key;
    Node *parent;
    Node *node;
    s32 *data;
    Item *item;
    Param *param;

    if (D_80110640 != 0) {
        list = func_8028FD94(*D_8011064C, 2);
        count = *list;
        for (i = 0; i < count; i++) {
            entry = func_8028FD94(list, i);
            source = func_8028FD94(entry, 0);
            key = (source->id << 8) | D_80110627;
            if (source->flags & 0x700) {
                parent = find_node(D_8011063C, key);
            } else {
                parent = find_node(D_80110628, key);
            }
            if (parent != NULL && parent->key == key) {
                node = parent;
            } else {
                if (D_80110638 == 120) {
                    break;
                }
                node = &D_801144D0[D_80110638++];
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
                            if (D_80110644 == parent) {
                                D_80110644 = node;
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
                        D_8011063C = node;
                        D_80110644 = node;
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
                            if (D_8011062C == parent) {
                                D_8011062C = node;
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
                        D_80110628 = node;
                        D_8011062C = node;
                        node->right = NULL;
                        node->left = NULL;
                        node->next = NULL;
                        node->prev = NULL;
                    }
                }
            }
            data = func_8028FD94(entry, 1);
            for (j = 0; j < D_80110640; j++) {
                param = &D_801157D8[j];
                if (D_80110630 != 500) {
                    item = &D_80110650[D_80110630++];
                    item->data = data;
                    item->unk4 = param->unk0;
                    item->unk8 = param->unk4;
                    item->unkC = param->unk8;
                    item->unk10 = source->unk18;
                    item->unk12 = source->unk1A;
                    item->unk14 = param->unkC;
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
        D_80110640 = 0;
    }
}
