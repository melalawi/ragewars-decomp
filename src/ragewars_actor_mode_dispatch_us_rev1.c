/* Actor behavior selectors for the two active modes of each kind.
 * func_80209E80_de loads the selector at kind*8 + (mode-1)*4,
 * then dispatches selectors 0..8 through its behavior switch.
 * The final two all-zero candidate records remain raw and unclaimed. */
int D_800C87F0[20][2] = {
    {0, 4},
    {0, 3},
    {1, 0},
    {5, 5},
    {0, 3},
    {0, 2},
    {6, 6},
    {1, 0},
    {1, 8},
    {0, 3},
    {0, 8},
    {0, 8},
    {7, 7},
    {1, 4},
    {5, 5},
    {0, 3},
    {0, 8},
    {0, 8},
    {0, 8},
    {0, 8},
};
