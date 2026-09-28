#include "basetypes.h"

typedef struct LinkPair {
    void **first;
    void **second;
} LinkPair;

void *func_802596B4(LinkPair *arg0) {
    arg0->first[1] = (void *) arg0->second;
    arg0->second[0] = (void *) arg0->first;
    return arg0;
}
