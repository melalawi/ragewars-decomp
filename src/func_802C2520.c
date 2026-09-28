/* _Printf, drafted from the ultralib libc xprintf source (2.0I libc is built -funsigned-char, so every
   char here is unsigned char): fchar, fbit, "hlL", spaces and zeroes are
   the cartridge's own tables, strchr is func_802C24B8 and _Putfld is func_802C2A64. */
typedef unsigned int size_t;
typedef char *va_list;

#define va_arg(ap, type) \
    ({ char *__slot = (char *)(((int)(ap) + 3) & -4); type __value = *(type *)__slot; (ap) = __slot + 4; __value; })

typedef struct {
    union {
        long long ll;
        double ld;
    } v;
    unsigned char *s;
    int n0;
    int nz0;
    int n1;
    int nz1;
    int n2;
    int nz2;
    int prec;
    int width;
    size_t nchar;
    unsigned int flags;
    unsigned char qual;
} _Pft;

#define FLAGS_SPACE 1
#define FLAGS_PLUS 2
#define FLAGS_MINUS 4
#define FLAGS_HASH 8
#define FLAGS_ZERO 16

extern const unsigned char D_800CCD40[6];          /* fchar: ' ', '+', '-', '#', '0', '\0' */
extern const unsigned int D_800CCD48[6];  /* fbit */
extern const unsigned char D_800CCD60[];           /* "hlL" */
extern unsigned char D_800D92E0[33];               /* spaces */
extern unsigned char D_800D9304[33];               /* zeroes */
extern unsigned char *func_802C24B8(const unsigned char *s, int c);
extern void func_802C2A64(_Pft *px, va_list *pap, unsigned char code, unsigned char *ac);

#define isdigit(x) ((x >= '0' && x <= '9'))

#define ATOI(dst, src)                   \
    for (dst = 0; isdigit(*src); ++src)  \
    {                                    \
        if (dst < 999)                   \
            dst = dst * 10 + *src - '0'; \
    }

#define MAX_PAD ((sizeof(D_800D92E0) - 1))
#define PAD(s, n)                                             \
    if (0 < (n))                                              \
    {                                                         \
        int i, j = (n);                                       \
        for (; 0 < j; j -= i)                                 \
        {                                                     \
            i = MAX_PAD < (unsigned int)j ? (int)MAX_PAD : j; \
            PUT(s, i);                                        \
        }                                                     \
    }
#define PUT(s, n)                                \
    if (0 < (n))                                 \
    {                                            \
        if ((arg = (*pfn)(arg, s, n)) != 0)      \
            x.nchar += (n);                      \
        else                                     \
            return x.nchar;                      \
    }

int func_802C2520(void *pfn(void *, const unsigned char *, size_t), void *arg, const unsigned char *fmt, va_list ap)
{
    _Pft x;

    /* A one-trip loop around the body gives the cartridge's register allocation. */
    do {
        x.nchar = 0;

        /* The outer loop is a label and a jump: nothing is hoisted out of it in the cartridge. */
next:
        {
            const unsigned char *s;
            unsigned char c;
            const unsigned char *t;
            unsigned char ac[32];
            const unsigned char *fchar;
            const unsigned int *fbit;
            s = fmt;

            for (c = *s; c != 0 && c != '%';) {
                c = *++s;
            }

            PUT(fmt, s - fmt);

            if (c == 0) {
                return x.nchar;
            }

            fmt = ++s;

            x.flags = 0;
            fchar = D_800CCD40;
            fbit = D_800CCD48;
            for (; (t = func_802C24B8(fchar, *s)) != 0; s++) {
                x.flags |= fbit[t - fchar];
            }

            if (*s == '*') {
                x.width = va_arg(ap, int);

                if (x.width < 0) {
                    x.width = -x.width;
                    x.flags |= FLAGS_MINUS;
                }
                s++;
            } else
                ATOI(x.width, s);

            if (*s != '.') {
                x.prec = -1;
            } else if (*++s == '*') {
                x.prec = va_arg(ap, int);
                ++s;
            } else
                for (x.prec = 0; isdigit(*s); s++) {
                    if (x.prec < 999)
                        x.prec = x.prec * 10 + *s - '0';
                }

            x.qual = func_802C24B8(D_800CCD60, *s) ? *s++ : '\0';

            if (x.qual == 'l' && *s == 'l') {
                x.qual = 'L';
                ++s;
            }

            func_802C2A64(&x, &ap, *s, ac);
            x.width -= x.n0 + x.nz0 + x.n1 + x.nz1 + x.n2 + x.nz2;

            {
                if (!(x.flags & FLAGS_MINUS)) {
                    int i, j;
                    if (0 < (x.width)) {
                        i, j = x.width;
                        for (; 0 < j; j -= i) {
                            i = MAX_PAD < (unsigned int)j ? (int)MAX_PAD : j;
                            PUT(D_800D92E0, i);
                        }
                    }
                }

                PUT(ac, x.n0);
                PAD(D_800D9304, x.nz0)

                PUT(x.s, x.n1);
                PAD(D_800D9304, x.nz1);

                PUT(x.s + x.n1, x.n2);
                PAD(D_800D9304, x.nz2);

                if (x.flags & FLAGS_MINUS) {
                    PAD(D_800D92E0, x.width);
                }
            }
            fmt = s + 1;
        }
        goto next;
    } while (0);
}
