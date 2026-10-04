#include "common/types.h"
#include "span_16E000/code_8041DBA0.h"
#include "span_16E000/types.h"
#include "types.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
#include "types.h"

/* Steps the model of the join request the screen D_800E39C0 edits (index at 0x14) back on event 1
   unless func_802999A0_de reports 0x16: calls func_8029973C_de, finds the request's place in the 3 by 17
   model table D_800E381C through func_8041EC44_de, walks back through its variants and, before the
   first, to the last variant of the previous model (wrapping to the last), skipping entries whose
   id is -1, then stores the variant at 0x4 and 0xC and the id at 0x0 of the 28-byte request in
   D_80153F80, copies the name of the entry the found id selects in that variant row to 0x10, redraws through func_8041E408_de and plays sound
   0xE81. Returns zero. */







extern struct func_80204468_S3 *D_800DF970;
extern struct TextEntry D_800DF7CC[][17];
extern struct Request_func_8041E100_de D_8014DCF0[];
extern void func_8029973C_de();
extern s32 func_802999A0_de(s32);
extern s32 func_8041EC44_de(s32, s32);
extern void func_802A025C_de(char *, char *);
extern void func_8041E408_de(s32);
extern void func_8025DF34_de(s32);

s32 func_8041E100_de(void *arg0, void *arg1, void *arg2, s32 event) {
    s32 variant;
    s32 model;
    s32 id;

    if (event != 1) {
        return 0;
    }
    func_8029973C_de();
    if (func_802999A0_de(0) == 0x16) {
        return 0;
    }
    variant = D_8014DCF0[D_800DF970->unk14].variant;
    model = func_8041EC44_de(variant, D_8014DCF0[D_800DF970->unk14].id);
    do {
        variant--;
        if (variant < 0) {
            variant = 2;
            model--;
            if (model < 0) {
                model = 16;
            }
        }
        id = D_800DF7CC[variant][model].id;
    } while (id == -1);
    D_8014DCF0[D_800DF970->unk14].variant = variant;
    D_8014DCF0[D_800DF970->unk14].id = id;
    func_802A025C_de(D_8014DCF0[D_800DF970->unk14].name, 
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        D_800DF7CC[variant][id].text[D_80152789]
#else
        *D_800DF7CC[variant][id].text
#endif
    );
    D_8014DCF0[D_800DF970->unk14].variantC = variant;
    func_8041E408_de(D_800DF970->unk14);
    func_8025DF34_de(0xE81);
    return 0;
}
