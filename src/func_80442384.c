/* Returns the address 0x190 bytes into the block at offset 0x20 of an object, or null when the
   object has no block. */
struct Object {
    char pad[0x20];
    char *block;
};

char *func_80442384(struct Object *object) {
    char *result = 0;

    if (object->block != 0) {
        result = object->block + 0x190;
    }
    return result;
}
