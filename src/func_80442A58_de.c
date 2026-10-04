#include "span_16E000/code_8044239C.h"
/* Steps a pointer back 0x554 bytes: callers pass the pointer held at offset 0x44 of an object and
   get back the start of the structure whose member at offset 0x554 it addresses. */
char *func_80442A58_de(char *member) {
    return member - 0x554;
}
