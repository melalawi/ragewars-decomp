#include "types.h"

/* Native dispatcher compares this row's event and actor kind before
 * the callback. The unresolved callback remains original extraction. */
typedef struct RwEventMatch { s32 event; s32 actorKind; } RwEventMatch;
RwEventMatch rw_menu_event_match_E5210_us_rev1 = {3590, 3};
