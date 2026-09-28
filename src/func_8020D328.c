#include "basetypes.h"

s32 func_8020D328(void *arg0) {
    char *record = *(char **) ((char *) arg0 + 0x24);
    if (record != 0) {
        do {
            if (*(s32 *) (record + 0x28) == 1) {
                return 1;
            }
            record = *(char **) (record + 0x10);
        } while (record != 0);
    }
    return 0;
}
