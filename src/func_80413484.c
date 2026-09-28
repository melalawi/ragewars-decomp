/* Releases a resource object's buffers through func_80254784 (the one at 0x18 when flag 1 is set, the
   one at 0x14 when flag 2 is set and its size at 0x10 is positive) and clears its 32 bytes. */
typedef struct {
    unsigned char unk0;
    unsigned char flags;
    char pad2[0xE];
    int size;
    void *data;
    void *handle;
} Resource;

extern void func_80254784(void *);
extern void func_802A1748(void *, int, int);

void func_80413484(Resource *res) {
    if (res->flags & 1) {
        func_80254784(res->handle);
    }
    if ((res->flags & 2) && res->size > 0) {
        func_80254784(res->data);
    }
    func_802A1748(res, 0, 32);
}
