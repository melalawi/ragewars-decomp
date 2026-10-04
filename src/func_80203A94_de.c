#include "common/types.h"
#include "span_1000/code_80201ACC.h"
typedef struct Owner Owner;



/** Return the nested record's field, or a fallback constant when zero. */
int func_80203A94_de(void *arg0) {
    int temp = ((struct MenuRules *) ((Owner *) arg0)->track)->locked;
    if (temp != 0) {
        return temp;
    }
    return 0x2F44;
}
