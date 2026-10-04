#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "span_1000/code_8026D4F0.h"
#include "span_1000/types.h"
#include "types.h"







extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80253838_de(s32, void *);
extern s32 func_802540F4_de(s32, void **, s32, void *, s32);
extern s32 func_8028FE28_de(s32 *, s32, s32);
extern s32 func_8028FE3C_de(s32, s32, s32, s32 *);

extern void func_80253754_de(s32, void *);

extern char D_0026D7F4;
extern char D_800C3DA8_de;
extern char D_800C3DC0_de;
extern char D_800C3DD4_de;





void func_8024F108_de(void *arg0) {
    void *sp28;
    void **resource;
    s32 key;
    s32 found;
    s32 index;

    index = ((func_8024BE70_S1 *)(arg0))->unk1;
    if (index != ((func_8022FD9C_Record *)(arg0))->unk54) {
        resource = func_8025193C_de(0, ((Access_s32_50 *)(arg0))->field,
                                ((Access_s32_50 *)(arg0))->field, 0x18,
                                0, 0, 0, &D_800C3DA8_de + 4, 1);
        if (resource != 0) {
            key = func_8028FE28_de(*resource, ((Access_s32_50 *)(arg0))->field, 1);
            func_80253838_de(0, resource);
            found = func_802540F4_de(0, &sp28, key, &D_800C3DC0_de, 1);
            if (found != 0) {
                ((func_8022FD9C_S4 *)(arg0))->unk58 = func_8028FE3C_de((s32)sp28, key,
                                                    index % *(s32 *)sp28,
                                                    &((Access_s32_5C *)(arg0))->field);
                ((func_8022FD9C_Record *)(arg0))->unk54 = index;
                func_80253838_de(0, (void *)found);
            }
        }
    }
    if (((func_8022FD9C_S4 *)(arg0))->unk58 != 0) {
        resource = func_8025193C_de(0, ((func_8022FD9C_S4 *)(arg0))->unk58,
                                ((func_8022FD9C_S4 *)(arg0))->unk58, ((Access_s32_5C *)(arg0))->field,
                                0, 0, &D_0026D7F4, &D_800C3DD4_de, 0);
    } else {
        resource = 0;
    }
    if (resource != 0) {
        func_8026E1F8_de(resource);
        func_80253754_de(0, resource);
    }
}
