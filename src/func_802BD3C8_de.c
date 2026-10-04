#include "span_1000/code_802C224C.h"
/** Find a byte in a zero-terminated string. */
unsigned char *func_802BD3C8_de(unsigned char *string, unsigned char value) {
    while (*string != value) {
        if (*string == 0) {
            return 0;
        }
        ++string;
    }
    return string;
}
