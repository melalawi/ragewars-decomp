typedef struct func_8022A82C_S1 func_8022A82C_S1;
typedef struct func_8022A82C_S2 func_8022A82C_S2;
typedef struct func_8022A82C_S3 func_8022A82C_S3;
struct func_8022A82C_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A82C_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};
struct func_8022A82C_S3 {
    char pad0[0x8F];
    unsigned char unk8F;
    char pad8F[0x90 - 0x8F - sizeof(unsigned char)];
    unsigned char unk90;
};

/** Find the first linked record whose nested flags include either type marker. */
void *func_8022A82C(char *object) {
    char *record = ((func_8022A82C_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_8022A82C_S2 *)(record))->unk5D8;
        if (((func_8022A82C_S3 *)(nested))->unk8F == 1 ||
            ((func_8022A82C_S3 *)(nested))->unk90 == 1) {
            return record;
        }
        record = ((func_8022A82C_S2 *)(record))->unk16E0;
    }
    return record;
}
