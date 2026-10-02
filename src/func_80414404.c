/* Calls the per-version setup entry and then func_802A1E34. */
extern void func_8029E8A8(void);
extern void func_8029D7E8_auto(void);
extern void func_8029D8A8(void);
extern void func_8029D9C8(void);
extern void func_8029D9F8(void);
extern void func_802A1E34(void);

void func_80414404(void) {
#if defined(VERSION_US)
    func_8029D7E8_auto();
#elif defined(VERSION_DE)
    func_8029D8A8();
#elif defined(VERSION_EU)
    func_8029D9C8();
#elif defined(VERSION_EU_X)
    func_8029D9F8();
#else
    func_8029E8A8();
#endif
    func_802A1E34();
}
