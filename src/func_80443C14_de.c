#include "span_16E000/code_804434BC.h"
/* Marks the attached actor visible, clears its subpart visibility bits, and applies the paused-state flag. */



extern int D_80142834[];
void func_80443C14_de(Object_func_80443C14_de *object) {
 if(object->parent) object->parent->unk85C=1;
 object->actor->flags1c0 |= 0x01800000;
 object->actor->flags1c0 &= 0xFEFFFFFF;
 object->actor->flags58 |= 0x01800000;
 object->actor->flags210 &= 0xFE7FFFFF;
 object->actor->flags238 &= 0xFE7FFFFF;
 object->actor->flags260 &= 0xFE7FFFFF;
 if(D_80142834[0]) {object->actor->flags120 |= 0x01000000; return;}
 object->actor->flags120 &= 0xFEFFFFFF;
}
