#include "span_1000/code_8020A95C.h"
/* Stores an id in the first free (-1) of the object's 64 id slots at 0x38 and flags the node with that
   id in the object's list at 0x24 as active. */




static inline Node *find_node(Obj_func_8020D220_de *obj, int id) {
    Node *node;

    for (node = obj->list; node != 0; node = node->next) {
        if (node->id == id) {
            return node;
        }
    }
    return 0;
}

void func_8020D220_de(Obj_func_8020D220_de *obj, int id) {
    int i;

    for (i = 0; i < 64; i++) {
        if (obj->ids[i] == -1) {
            obj->ids[i] = id;
            find_node(obj, id)->active = 1;
            return;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3680_4 = 0.5f;
const float unbake_rodata_800C3684_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C87E0_18[] = {0x0023F7ECU, 0x0023F81CU, 0x0023F848U, 0x0023F870U, 0x0023F89CU, 0x0023F8D4U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C37C8_4 = 1.0f;
const float unbake_rodata_800C37CC_4 = 0.17453295f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C373C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3740_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3744_4[] = {0x41, 0xC0, 0x00, 0x00};
const unsigned char unbake_rodata_800C3748_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C374C_4[] = {0x41, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C3750_4[] = {0x42, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C3754_3[] = {0x42, 0x40, 0x00};
const unsigned char unbake_rodata_800C3758_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C375C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3760_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3764_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3768_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C376C_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3770_4[] = {0x00, 0x00, 0x00, 0x18};
const unsigned char unbake_rodata_800C3774_4[] = {0x00, 0x00, 0x00, 0xFF};
const unsigned char unbake_rodata_800C3778_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C377C_4[] = {0x00, 0x00, 0x00, 0x96};
const unsigned char unbake_rodata_800C3780_48[] = {0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0xFF};
const float unbake_rodata_800C37C8_4 = 0.25f;
const float unbake_rodata_800C37CC_4 = 1.0f;
const float unbake_rodata_800C37D0_4 = 0.400000006f;
const float unbake_rodata_800C37D4_4 = (-1.0f);
const float unbake_rodata_800C37D8_4 = 1.0f;
const float unbake_rodata_800C37DC_4 = (-1.0f);
const float unbake_rodata_800C37E0_4 = 1.0f;
const float unbake_rodata_800C37E4_4 = 35.2000008f;
const float unbake_rodata_800C37E8_4 = 1.0f;
const float unbake_rodata_800C37EC_4 = 2.14748365e+09f;
const float unbake_rodata_800C37F0_4 = 2.0f;
const float unbake_rodata_800C37F4_4 = 0.03125f;
const float unbake_rodata_800C37F8_4 = 0.550000012f;
const float unbake_rodata_800C37FC_4 = 16.0f;
const float unbake_rodata_800C3800_4 = 255.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C36F0_18[] = {0x0023F7FCU, 0x0023F82CU, 0x0023F858U, 0x0023F880U, 0x0023F8ACU, 0x0023F8E4U};
#endif
