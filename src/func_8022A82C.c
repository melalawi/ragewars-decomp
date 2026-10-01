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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5550_8 = 1000.0;
const unsigned int unbake_rodata_800C5558_40[] = {0x00297C34U, 0x00297C6CU, 0x00297CC0U, 0x00297CC0U, 0x00297C18U, 0x00297C18U, 0x00297C18U, 0x00297C18U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297C90U, 0x00297CA8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA820_24[] = {0x0029AFD8U, 0x0029B05CU, 0x0029B0E0U, 0x0029B164U, 0x0029B1F4U, 0x0029B1F4U, 0x0029B1F4U, 0x0029AEF8U, 0x0029AF68U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5680_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5694_4 = 81.9199982f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C54F8_18[] = {0x0029523CU, 0x002954A0U, 0x002959E4U, 0x002956F0U, 0x00295C38U, 0x00295D50U};
#endif
