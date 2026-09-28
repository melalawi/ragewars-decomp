typedef struct WordPair {
    int first;
    int second;
} WordPair;

/** Swap two pairs of words. */
void func_80243804(WordPair *arg0, WordPair *arg1) {
    WordPair temporary = *arg0;
    *arg0 = *arg1;
    *arg1 = temporary;
}
