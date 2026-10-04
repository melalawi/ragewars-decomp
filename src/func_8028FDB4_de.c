#include "span_1000/code_8028FD24.h"
/** Return the byte address named by an indexed word offset from the base. */
char *func_8028FDB4_de(int *arg0, int arg1) {
    int *entry = arg0 + arg1;
    return (char *)arg0 + entry[1];
}
