/** Initialize the compact record fields written by the VRAM 0x802624A0 leaf. */
void func_802624A0(void *record) {
    *(short *)((char *)record + 4) = -1;
    *(short *)((char *)record + 6) = 0;
    *(int *)record = 0;
    *(short *)((char *)record + 8) = 0;
    *(unsigned char *)((char *)record + 0xA) = 0;
    *(unsigned char *)((char *)record + 0xB) = 1;
    *(int *)((char *)record + 0x10) = 0;
}
