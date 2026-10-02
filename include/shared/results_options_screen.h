#ifndef RAGEWARS_SHARED_RESULTS_OPTIONS_SCREEN_H
#define RAGEWARS_SHARED_RESULTS_OPTIONS_SCREEN_H
#include "shared/menu_widget.h"
typedef struct ResultsOptionsScreen { char pad0[0x970]; union { MenuWidget *root; void *parent; }; } ResultsOptionsScreen;
#endif
