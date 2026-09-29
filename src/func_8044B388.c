/* Detaches the object at offset 0xC of an owner: when there is one, finalises it through
   func_8044ADC0 and removes it from the lists at offsets 0xC and 0x20 through func_80255E78 and
   func_80255CB4. Returns the object. */
struct Owner {
    char pad[0xC];
    void *object;
};

extern void func_8044ADC0(void *);
extern void func_80255E78(void *, void *);
extern void func_80255CB4(void *, void *);

typedef struct func_8044B388_S1 func_8044B388_S1;
struct func_8044B388_S1 {
    char pad0[0xC];
    char unkC;
    char padC[0x20 - 0xC - sizeof(char)];
    char unk20;
};

void *func_8044B388(struct Owner *owner) {
    void *object = owner->object;

    if (object != 0) {
        func_8044ADC0(object);
        func_80255E78(&((func_8044B388_S1 *)(owner))->unkC, object);
        func_80255CB4(&((func_8044B388_S1 *)(owner))->unk20, object);
    }
    return object;
}
