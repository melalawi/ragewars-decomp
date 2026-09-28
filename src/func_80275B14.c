/* Decodes a packed header into its runtime form: copies the two leading shorts and the word at 0x10,
   and for each of three channels resolves a 16-byte-scaled offset against base and a 32-byte-scaled
   offset against extra, leaving the latter null when it is 0xFFFF. */
typedef struct {
    unsigned short unk0;
    unsigned short unk2;
    unsigned short first[3];
    unsigned short second[3];
    int unk10;
} Packed;

typedef struct {
    short unk0;
    short unk2;
    void *first[3];
    void *second[3];
    int unk1C;
} Header;

void func_80275B14(Header *dst, Packed *src, char *base, int unused, char *extra) {
    int i;

    dst->unk0 = src->unk0;
    dst->unk2 = src->unk2;
    dst->unk1C = src->unk10;
    for (i = 0; i < 3; i++) {
        dst->first[i] = base + src->first[i] * 16;
        if (src->second[i] == 0xFFFF) {
            dst->second[i] = 0;
        } else {
            dst->second[i] = extra + src->second[i] * 32;
        }
    }
}
