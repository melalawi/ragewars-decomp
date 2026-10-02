#ifndef RAGEWARS_SHARED_PAK_FILE_SYSTEM_H
#define RAGEWARS_SHARED_PAK_FILE_SYSTEM_H
#include "basetypes.h"
/* Opaque SDK controller-pak state, including its 0x68-byte storage stride. */
typedef struct ControllerPakFileSystem { char storage[0x68]; } ControllerPakFileSystem;
#endif
