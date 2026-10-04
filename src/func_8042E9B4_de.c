#include "span_16E000/code_8042D1BC.h"
#include "types.h"

/* Replaces every occurrence of the second string in the first with the third, in place: while
   func_802A052C_de finds a match (returning the position just past it), it copies the text before
   the match into a 200-byte buffer, appends the replacement through func_802A02E8_de, appends the
   rest of the text, copies the buffer back and searches again. */

extern char *func_802A052C_de(char *, char *);
extern s32 func_802A0238_de(char *);
extern void func_802A02E8_de(char *, char *);

void func_8042E9B4_de(char *text, char *find, char *replacement) {
    char buffer[200];
    char *match;
    s32 findLength;
    s32 length;
    s32 before;
    s32 copied;
    s32 i;
    s32 j;

    match = func_802A052C_de(text, find);
    findLength = func_802A0238_de(find);
    while (match != 0) {
        length = func_802A0238_de(text);
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
        func_802A02E8_de(buffer, replacement);
        j = func_802A0238_de(buffer);
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
        copied = func_802A0238_de(buffer);
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
        match = func_802A052C_de(text, find);
    }
}
