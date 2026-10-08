#include "types.h"
/* Four player-panel scissor rectangles. Primary draw callbacks
 * func_8041FC50_de and func_8043A890_de index these signed word
 * coordinates at stride16 and feed left/top/right/bottom to RDP
 * scissor commands. Both loops stop after four players. */
typedef struct RwScissorRect { s32 left, top, right, bottom; } RwScissorRect;
RwScissorRect rw_menu_player_scissor_rects_us_rev1[4] = {
    {18, 15, 52, 94},
    {232, 15, 267, 94},
    {18, 128, 52, 206},
    {232, 128, 267, 206},
};
