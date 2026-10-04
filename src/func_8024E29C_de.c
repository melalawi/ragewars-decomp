#include "common/types.h"
#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
typedef struct Owner Owner;



/** Return bit two of the nested state word. */
unsigned int func_8024E29C_de(char *object) {
    return (((struct func_8029A9E0_S1 *) ((Owner *) object)->track)->unk4 >> 2) & 1;
}
