#include "shared/indexed_table_object.h"

/* Clears the words at offsets 0x90 to 0x9C of an object, calls func_8044ED1C and func_802ABD04,
   and loads the two 0x75-entry tables D_800D3080 and D_800D2F94 into offsets 0xC8 and 0x1C8
   through func_802AC34C. */
extern char D_800D3080[];
extern char D_800D2F94[];
#if defined(VERSION_DE)
extern char D_800CDDDC[], D_800CDD24[];
#endif
extern void func_8044ED1C();
extern void func_802ABD04();
extern void func_802AC34C(void *, void *, s32, void *);


#if defined(VERSION_DE)
enum { TABLE_COUNT_117 = 92 };
#else
enum { TABLE_COUNT_117 = 117 };
#endif

void func_8044ECB0(char *object) {
    ((IndexedTableObject *)(object))->counts[0] = 0;
    ((IndexedTableObject *)(object))->counts[1] = 0;
    ((IndexedTableObject *)(object))->counts[2] = 0;
    ((IndexedTableObject *)(object))->counts[3] = 0;
    func_8044ED1C();
    func_802ABD04();
    func_802AC34C(object,
#if defined(VERSION_DE)
        D_800CDDDC,
#else
        D_800D3080,
#endif
        TABLE_COUNT_117, (char *)object + 0xC8);
    func_802AC34C(object,
#if defined(VERSION_DE)
        D_800CDD24,
#else
        D_800D2F94,
#endif
        TABLE_COUNT_117, (char *)object + 0x1C8);
}
