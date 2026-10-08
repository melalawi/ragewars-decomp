/* Forty catalogue arena records. 8042AAD0 and 8042A7B4 use both
 * control IDs (secondary -1 means absent); 8042B1B8 and 8042ACD8
 * return the arena index at offset 12. The category at offset 8 matches
 * membership of the four cup lists, including each category's sentinel.
 * Retained original label: D_800E0F14_de; current VMA 800E4F64. */
struct CatalogueArenaRecord {
    int primary_control;
    int secondary_control;
    int cup_category;
    int arena_index;
};
struct CatalogueArenaRecord ragewars_catalogue_arena_records_us_rev1[40] = {
    {813, 815, 2, 0},
    {786, 816, 2, 1},
    {785, 860, 2, 2},
    {787, 835, 2, 3},
    {799, 801, 2, 4},
    {804, 788, 2, 5},
    {844, 841, 1, 6},
    {853, 858, 0, 7},
    {824, 827, 3, 8},
    {800, 817, 2, 9},
    {831, 829, 3, 10},
    {803, 859, 2, 11},
    {793, 798, 2, 12},
    {820, 834, 3, 13},
    {802, 805, 2, 14},
    {843, 846, 1, 15},
    {852, 855, 0, 16},
    {794, 796, 2, 17},
    {809, 806, 2, 18},
    {808, 811, 2, 19},
    {830, 832, 3, 20},
    {836, 839, 1, 21},
    {795, 797, 2, 22},
    {851, 854, 0, 23},
    {807, 810, 2, 24},
    {819, 822, 3, 25},
    {837, 840, 1, 26},
    {814, 812, 2, 27},
    {818, 821, 3, 28},
    {842, 845, 1, 29},
    {848, 833, 3, 30},
    {847, 849, 3, 31},
    {826, 823, 3, 32},
    {857, 856, 0, 33},
    {838, 850, 1, 34},
    {825, 828, 3, 35},
    {790, -1, 2, 0},
    {792, -1, 3, 0},
    {791, -1, 1, 0},
    {789, -1, 0, 0},
};
typedef char catalogue_arena_record_size[(sizeof(struct CatalogueArenaRecord) == 16) ? 1 : -1];
