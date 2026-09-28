#include "basetypes.h"
s32 func_80260684(s32 arg0) {
    return (arg0 & 0xF0000000) | ((arg0 & 0x0FFFFFFF) * 8);
}
