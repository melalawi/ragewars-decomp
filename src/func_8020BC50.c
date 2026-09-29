#include "basetypes.h"

typedef struct Node8020BC50 {
    s32 key;
    f32 value;
    s32 state;
    s32 fieldC;
    struct Node8020BC50 *next;
    s32 field14;
    s32 field18;
    s32 field1C;
    s32 field20;
    s32 field24;
    s32 field28;
    s32 field2C;
    s32 field30;
} Node8020BC50;

typedef struct Table8020BC50 {
    s32 stride;
    char data[4];
} Table8020BC50;

typedef struct Obj8020BC50 {
    Table8020BC50 *records;
    s32 count;
    char pad8[8];
    Table8020BC50 *links;
    char pad14[4];
    s32 result;
    f32 value;
    s32 selected;
    Node8020BC50 *nodes;
} Obj8020BC50;

extern f32 D_800C6E58;
extern f32 D_800C6E5C;

extern void func_8020D1FC(s32);
extern void func_8020EC14(void *);
extern void func_8020D220(void *, s32);
extern s32 func_8020C5A0(Obj8020BC50 *, Node8020BC50 *);

typedef struct func_8020BC50_S1 func_8020BC50_S1;
typedef union func_8020BC50_S1_UC { u32 v0; u16 v1; } func_8020BC50_S1_UC;
struct func_8020BC50_S1 {
    char pad0[0xC];
    func_8020BC50_S1_UC unkC;
};

s32 func_8020BC50(Obj8020BC50 *obj, s32 key, s32 requested, void *owner) {
    Node8020BC50 *node;
    s32 found;

    {
        Node8020BC50 *reset;

        reset = obj->nodes;
        while (reset != 0) {
            reset->value = D_800C6E58;
            reset->state = -1;
            reset->field18 = 0;
            reset->field1C = 0;
            reset->field20 = 0;
            reset->field24 = 0;
            reset->field28 = 0;
            reset->field2C = 0;
            reset->field30 = 0;
            reset = reset->next;
        }
    }

    obj->selected = -1;
    obj->value = D_800C6E5C;
    func_8020D1FC(obj);
    found = 0;
    func_8020EC14(owner);
    func_8020D220(obj, requested);

    {
        s32 i;
        s32 count;
        u32 mask;

        i = found;
        count = obj->count;
        if (count > 0) {
            mask = 0x04300000;
            do {
            char *record;
            s32 product;

            product = i * count;
            if (i != requested) {
                if (*(u8 *)(obj->links->data +
                            (product + requested) * obj->links->stride + 4) != 0) {
                    record = (char *)obj->records +
                             (i * obj->records->stride + 8);
                    if (record != 0 && (((func_8020BC50_S1 *)(record))->unkC.v0 & mask) == 0) {
                        func_8020D220(obj, i);
                        found++;
                    }
                }
            }
                i++;
                count = obj->count;
            } while (i < count);
        }

        if (found == 0) {
            for (i = 0; i < obj->count; i++) {
                char *record;
                s32 product;

                product = i * obj->count;
                if (i != requested) {
                    if (*(u8 *)(obj->links->data +
                                (product + requested) * obj->links->stride + 4) != 0) {
                        record = (char *)obj->records +
                                 (i * obj->records->stride + 8);
                        if (record != 0 && (((func_8020BC50_S1 *)(record))->unkC.v1 & 0x400) == 0) {
                            func_8020D220(obj, i);
                        }
                    }
                }
            }
        }
    }

    node = obj->nodes;
    if (node == 0) {
        goto not_found;
    }
    do {
        if (node->key == key) {
            goto search_done;
        }
        node = node->next;
    } while (node != 0);
not_found:
    node = 0;
search_done:
    func_8020C5A0(obj, node);
    obj->selected = obj->result;
}
