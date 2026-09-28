/* _Litob, drafted from ultralib src/libc/xlitob.c: converts the integer in px->v.ll to digits in
   base 8, 10 or 16 for _Putfld, right-aligned in a 24-byte buffer, then pads with leading zeros
   for the precision or a zero-flagged width. libc is built -funsigned-char, so every char is
   unsigned char. The cartridge calls no lldiv: its loop divides with __divdi3 and __moddi3 into
   one lldiv_t on the stack, which an inline lldiv returning its quotient and remainder as one
   constructor reproduces. ldigs is D_800D9330, udigs D_800D9344 and memcpy func_802C2490. */
typedef unsigned int size_t;

typedef struct {
    long long quot;
    long long rem;
} lldiv_t;

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

#define FLAGS_MINUS 4
#define FLAGS_ZERO 16
#define BUFF_LEN 0x18

extern unsigned char D_800D9330[];
extern unsigned char D_800D9344[];
extern void *func_802C2490(void *dst, const void *src, size_t size);

static inline lldiv_t lldiv(long long num, long long denom)
{
    return (lldiv_t) { num / denom, num % denom };
}

void func_802C2ED0(_Pft *px, unsigned char code)
{
    unsigned char buff[BUFF_LEN];
    const unsigned char *digs;
    int base;
    int i;
    unsigned long long ullval;

    digs = (code == 'X') ? D_800D9344 : D_800D9330;

    base = (code == 'o') ? 8 : ((code != 'x' && code != 'X') ? 10 : 16);
    i = BUFF_LEN;
    ullval = px->v.ll;

    if ((code == 'd' || code == 'i') && px->v.ll < 0) {
        ullval = -ullval;
    }

    if (ullval != 0 || px->prec != 0) {
        buff[--i] = digs[ullval % base];
    }

    px->v.ll = ullval / base;

    while (px->v.ll > 0 && i > 0) {
        lldiv_t qr;

        qr = lldiv(px->v.ll, base);
        px->v.ll = qr.quot;
        buff[--i] = digs[qr.rem];
    }

    px->n1 = BUFF_LEN - i;

    func_802C2490(px->s, buff + i, px->n1);

    if (px->n1 < px->prec) {
        px->nz0 = px->prec - px->n1;
    }

    if (px->prec < 0 && (px->flags & (FLAGS_ZERO | FLAGS_MINUS)) == FLAGS_ZERO) {
        if ((i = px->width - px->n0 - px->nz0 - px->n1) > 0) {
            px->nz0 += i;
        }
    }
}
