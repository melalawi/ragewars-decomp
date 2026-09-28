/* Passes the first non-null handle among entries 0 to count of the object's twenty-byte table at
   0xFC28 to func_80284544 together with the object. */
typedef struct {
    int unk0;
    void *handle;
    char pad8[0xC];
} Entry;

extern void func_80284544(char *obj, void *handle);

void func_80284640(char *obj, unsigned char count) {
    int i;

    for (i = 0; i <= count; i++) {
        Entry *e = (Entry *)(obj + i * sizeof(Entry) + 0xFC28);
        if (e->handle != 0) {
            func_80284544(obj, e->handle);
            return;
        }
    }
}
