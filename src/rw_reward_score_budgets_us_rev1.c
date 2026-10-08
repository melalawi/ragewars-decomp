#include "types.h"

/* func_8041E81C_de / func_8041EB88_de index rank*5+count-1;
 * func_8041E720_de compares signed score against the first five ranks. */
s32 rw_reward_score_budgets_us_rev1[5][5] = {
    {5, 10, 15, 20, 25},
    {5, 15, 20, 30, 35},
    {10, 20, 30, 40, 50},
    {10, 30, 45, 60, 75},
    {20, 40, 60, 80, 100},
};
