typedef struct func_80403B04_S1 func_80403B04_S1;
struct func_80403B04_S1 {
    char pad0[0x8];
    char unk8;
};

/** Advance a byte pointer by eight bytes. */
void *func_80403B04(void *value) {
    return &((func_80403B04_S1 *)(value))->unk8;
}
