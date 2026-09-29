/* Updates the selected byte in the aligned word addressed by arg0. */
typedef signed int s32;
typedef struct { s32 value; } Word;
void func_80200AD8(s32 arg0, s32 arg1) {
    int temp_ff;
    s32 word_2;
    Word *word_3;
    int new_var3_2;
    s32 shift = (~arg0 & 3) * 8;
    int shift_ff;
    int temp;
    Word *word = (Word *) (arg0 & ~3);
    int new_var5_2;
    word_2 = (*word).value;
    shift_ff = 0xFF << shift;
    word_3 = word;
    new_var5_2 = shift_ff;
    do {
        ;
    } while (0);
    new_var3_2 = ~new_var5_2;
    temp_ff = (arg1 & 0xFF) << shift;
    word_3->value = (word_2 & new_var3_2) | temp_ff;
}
