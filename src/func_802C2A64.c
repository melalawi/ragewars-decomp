/* _Putfld, drafted from ultralib src/libc/xprintf.c (2.0I libc is built -funsigned-char, so every
   char here is unsigned char). The cartridge keeps the conversion code in its incoming register
   and narrows it at each character use, so it arrives as the promoted int. The switch dispatches
   through the cartridge's jtbl_800CCD68 over '%' to 'x', whose unused entries reach the default;
   strlen is func_802C24F0, _Litob func_802C2ED0 and _Ldtob func_802C31B0. */
typedef unsigned int size_t;
typedef char *va_list;

#define va_arg(ap, type) \
    ({ char *__slot = (char *)(((int)(ap) + sizeof(type) - 1) & -(int)sizeof(type)); \
       (ap) = __slot + sizeof(type); *(type *)__slot; })

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

#define LDSIGN(x) (((unsigned short *)&(x))[0] & 0x8000)

extern void *jtbl_800CCD68[];
extern size_t func_802C24F0(const unsigned char *s);
extern void func_802C2ED0(_Pft *px, unsigned char code);
extern void func_802C31B0(_Pft *px, unsigned char code);

void func_802C2A64(_Pft *px, va_list *pap, int code, unsigned char *ac)
{
    px->n0 = px->nz0 = px->n1 = px->nz1 = px->n2 =
        px->nz2 = 0;

    /* switch (code), through the cartridge's jump table over '%' to 'x'. */
    {
        static void *keep_labels[0] __attribute__((section(".sdata"))) = {
            &&case_c, &&case_d, &&case_x, &&case_e, &&case_n, &&case_p, &&case_s, &&case_percent,
            &&case_default
        };
    }
    {
        unsigned int index = (unsigned char)code - '%';
        if (index >= 0x54) {
            goto case_default;
        }
        goto *jtbl_800CCD68[index];
    }
case_c:
    ac[px->n0++] = va_arg(*pap, int);
    return;
case_d:
    if (px->qual == 'l') {
        px->v.ll = va_arg(*pap, long);
    } else if (px->qual == 'L') {
        px->v.ll = va_arg(*pap, long long);
    } else {
        px->v.ll = va_arg(*pap, int);
    }

    if (px->qual == 'h') {
        px->v.ll = (short)px->v.ll;
    }

    if (px->v.ll < 0) {
        ac[px->n0++] = '-';
    } else if (px->flags & FLAGS_PLUS) {
        ac[px->n0++] = '+';
    } else if (px->flags & FLAGS_SPACE) {
        ac[px->n0++] = ' ';
    }

    px->s = (unsigned char *)&ac[px->n0];

    func_802C2ED0(px, (unsigned char)code);
    return;
case_x:
    if (px->qual == 'l') {
        px->v.ll = va_arg(*pap, long);
    } else if (px->qual == 'L') {
        px->v.ll = va_arg(*pap, long long);
    } else {
        px->v.ll = va_arg(*pap, int);
    }

    if (px->qual == 'h') {
        px->v.ll = (unsigned short)px->v.ll;
    } else if (px->qual == 0) {
        px->v.ll = (unsigned int)px->v.ll;
    }

    if (px->flags & FLAGS_HASH) {
        ac[px->n0++] = '0';

        if ((unsigned char)code == 'x' || (unsigned char)code == 'X') {
            ac[px->n0++] = code;
        }
    }

    px->s = (unsigned char *)&ac[px->n0];
    func_802C2ED0(px, (unsigned char)code);
    return;
case_e:
    px->v.ld = px->qual == 'L' ? va_arg(*pap, double) : va_arg(*pap, double);

    if (LDSIGN(px->v.ld))
        ac[px->n0++] = '-';
    else if (px->flags & FLAGS_PLUS)
        ac[px->n0++] = '+';
    else if (px->flags & FLAGS_SPACE)
        ac[px->n0++] = ' ';

    px->s = (unsigned char *)&ac[px->n0];
    func_802C31B0(px, (unsigned char)code);
    return;
case_n:
    if (px->qual == 'h') {
        *va_arg(*pap, unsigned short *) = px->nchar;
    } else if (px->qual == 'l') {
        *va_arg(*pap, unsigned long *) = px->nchar;
    } else if (px->qual == 'L') {
        *va_arg(*pap, unsigned long long *) = px->nchar;
    } else {
        *va_arg(*pap, unsigned int *) = px->nchar;
    }
    return;
case_p:
    px->v.ll = (long)va_arg(*pap, void *);
    px->s = (unsigned char *)&ac[px->n0];
    func_802C2ED0(px, 'x');
    return;
case_s:
    px->s = va_arg(*pap, unsigned char *);
    px->n1 = func_802C24F0(px->s);

    if (px->prec >= 0 && px->prec < px->n1) {
        px->n1 = px->prec;
    }
    return;
case_percent:
    ac[px->n0++] = '%';
    return;
case_default:
    ac[px->n0++] = code;
}
