#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80271B18.h"
#include "types.h"








void func_80272BCC_de(void *arg0, void *arg1, void *arg2) {
    char *m = (char *)arg0;
    char *v = (char *)arg1;
    char *out = (char *)arg2;

    ((func_8024C864_S1 *)(out))->unk0 = (((func_80272BA8_S2 *)(m))->unk0 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272BA8_S2 *)(m))->unk4 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272BA8_S2 *)(m))->unk8 * ((func_8024C864_S1 *)(v))->unk8);
    ((func_8024C864_S1 *)(out))->unk4 = (((func_80272BA8_S2 *)(m))->unk10 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272BA8_S2 *)(m))->unk14 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272BA8_S2 *)(m))->unk18 * ((func_8024C864_S1 *)(v))->unk8);
    ((func_8024C864_S1 *)(out))->unk8 = (((func_80272BA8_S2 *)(m))->unk20 * ((func_8024C864_S1 *)(v))->unk0)
                       + (((func_80272BA8_S2 *)(m))->unk24 * ((func_8024C864_S1 *)(v))->unk4)
                       + (((func_80272BA8_S2 *)(m))->unk28 * ((func_8024C864_S1 *)(v))->unk8);
}
