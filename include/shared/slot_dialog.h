#ifndef RAGEWARS_SHARED_SLOT_DIALOG_H
#define RAGEWARS_SHARED_SLOT_DIALOG_H
#include "basetypes.h"
typedef struct SlotDialog { s32 root, main, absent, unavailable, prompt, elapsed, state, ready; char text[128]; } SlotDialog;
#endif
