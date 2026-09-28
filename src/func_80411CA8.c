/* Returns the halfword at offset 0xE of the object held at offset 0x48C of record i in the
   1180-byte record table D_80153C28 points to; func_80411CE0 reads offset 0x10 of the same
   object. */
extern char *D_80153C28;

short func_80411CA8(int index) {
    return *(short *)(*(char **)(D_80153C28 + index * 1180 + 0x48C) + 0xE);
}
