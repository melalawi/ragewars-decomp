#include "basetypes.h"

/* Replaces every occurrence of the second string in the first with the third, in place: while
   func_802A152C finds a match (returning the position just past it), it copies the text before
   the match into a 200-byte buffer, appends the replacement through func_802A12E8, appends the
   rest of the text, copies the buffer back and searches again. */

extern char *func_802A152C(char *, char *);
extern s32 func_802A1238(char *);
extern void func_802A12E8(char *, char *);

void func_8042EB94(char *text, char *find, char *replacement) {
    char buffer[200];
    char *match;
    s32 findLength;
    s32 length;
    s32 before;
    s32 copied;
    s32 i;
    s32 j;

    match = func_802A152C(text, find);
    findLength = func_802A1238(find);
    while (match != 0) {
        length = func_802A1238(text);
        before = match - text - findLength;
        i = 0;
        if (i < before) {
        copy_before:
            buffer[i] = text[i];
            i++;
            if (i < before) {
                goto copy_before;
            }
        }
        buffer[before] = 0;
        func_802A12E8(buffer, replacement);
        j = func_802A1238(buffer);
        i = before + findLength;
        if (i < length) {
        copy_after:
            buffer[j] = text[i];
            j++;
            i++;
            buffer[j] = 0;
            if (i < length) {
                goto copy_after;
            }
        }
        copied = func_802A1238(buffer);
        i = 0;
        if (i < copied) {
        copy_back:
            text[i] = buffer[i];
            i++;
            if (i < copied) {
                goto copy_back;
            }
        }
        text[copied] = 0;
        match = func_802A152C(text, find);
    }
}
