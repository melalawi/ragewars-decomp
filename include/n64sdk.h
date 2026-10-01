/* n64sdk.h -- real Nintendo 64 SDK ("Ultra64"/GBI) type declarations.
 *
 * m2c type-context layer used by the repository build: these
 * are NOT guesses. They are transcribed field-for-field from the actual SDK
 * headers vendored read-only at reference/n64sdk/u64inc/{os.h,gbi.h} (the
 * same SN Systems-era Ultra64 SDK this ROM's toolchain targets -- see
 * the pinned compiler digest). Giving m2c these definitions lets a
 * drafted function that touches a display list, a matrix, a vertex buffer,
 * or a controller pad read out as `dl->words.w0` / `pad->stick_x` instead of
 * an opaque `M2C_FIELD(x, s32 *, 0)` / `M2C_UNK` cast.
 *
 * Primitive types (u8/s8/u16/s16/u32/s32/u64/s64/f32/f64) are m2c
 * built-ins (see m2c/c_types.py:add_builtin_typedefs) -- not redeclared here.
 *
 * Only fields actually needed for type-shape recovery are kept; SDK macros
 * (gSPxxx/gDPxxx call-site builders) are deliberately NOT transcribed here --
 * this file supplies TYPES for m2c's context reader, not a build-time SDK.
 */

/* ---- reference/n64sdk/u64inc/os.h : controller pad state ---- */

typedef struct {
    u16 type;    /* Controller Type */
    u8  status;  /* Controller status */
    u8  errno;
} OSContStatus;

typedef struct {
    u16 button;
    s8  stick_x; /* -80 <= stick_x <= 80 */
    s8  stick_y; /* -80 <= stick_y <= 80 */
    u8  errno;
} OSContPad;

/* ---- reference/n64sdk/u64inc/gbi.h : RSP/RDP display-list types ---- */

/* Vertex (color-shaded form). */
typedef struct {
    s16 ob[3];  /* x, y, z */
    u16 flag;
    s16 tc[2];  /* texture coord */
    u8  cn[4];  /* color & alpha */
} Vtx_t;

/* Vertex (normal-shaded form; same layout, `cn` reinterpreted). */
typedef struct {
    s16 ob[3];  /* x, y, z */
    u16 flag;
    s16 tc[2];  /* texture coord */
    s8  n[3];   /* normal */
    u8  a;      /* alpha */
} Vtx_tn;

typedef union {
    Vtx_t  v;   /* use for colors */
    Vtx_tn n;   /* use for normals */
    s64    force_structure_alignment;
} Vtx;

/* 4x4 matrix, fixed point s15.16: first 8 words integer part, last 8 words
 * fraction part (see guMtxF2L in the vendored libultra source). */
typedef s32 Mtx_t[4][4];

typedef union {
    Mtx_t m;
    s64   force_structure_alignment;
} Mtx;

/* Viewport. */
typedef struct {
    s16 vscale[4]; /* scale, 2 bits fraction */
    s16 vtrans[4]; /* translate, 2 bits fraction */
} Vp_t;

typedef union {
    Vp_t vp;
    s64  force_structure_alignment;
} Vp;

/* Triangle face (three vertex-buffer indices). */
typedef struct {
    u8 flag;
    u8 v[3];
} Tri;

/* Lighting. */
typedef struct {
    u8 col[3];  /* diffuse light value (rgba) */
    s8 pad1;
    u8 colc[3]; /* copy of diffuse light value (rgba) */
    s8 pad2;
    s8 dir[3];  /* direction of light (normalized) */
    s8 pad3;
} Light_t;

typedef struct {
    u8 col[3];  /* ambient light value (rgba) */
    s8 pad1;
    u8 colc[3]; /* copy of ambient light value (rgba) */
    s8 pad2;
} Ambient_t;

typedef struct {
    s32 x1, y1, x2, y2; /* texture offsets for highlight 1/2 */
} Hilite_t;

typedef union {
    Light_t l;
    s64     force_structure_alignment[2];
} Light;

typedef union {
    Ambient_t l;
    s64       force_structure_alignment[1];
} Ambient;

typedef struct {
    Ambient a;
    Light   l[7];
} Lightsn;

typedef struct {
    Ambient a;
    Light   l[1];
} Lights0;

typedef struct {
    Ambient a;
    Light   l[1];
} Lights1;

typedef struct {
    Ambient a;
    Light   l[2];
} Lights2;

typedef struct {
    Ambient a;
    Light   l[3];
} Lights3;

typedef struct {
    Ambient a;
    Light   l[4];
} Lights4;

typedef struct {
    Ambient a;
    Light   l[5];
} Lights5;

typedef struct {
    Ambient a;
    Light   l[6];
} Lights6;

typedef struct {
    Ambient a;
    Light   l[7];
} Lights7;

typedef struct {
    Light l[2];
} LookAt;

typedef union {
    Hilite_t h;
    s32      force_structure_alignment[4];
} Hilite;

/* Display-list command word pair, and the raw (untyped) view of one. */
typedef struct {
    u32 w0;
    u32 w1;
} Gwords;

/* Individual RSP/RDP command shapes (bitfield layouts, all 64 bits wide --
 * transcribed verbatim from gbi.h). */
typedef struct {
    s32 cmd : 8;
    u32 par : 8;
    u32 len : 16;
    u32 addr;
} Gdma;

typedef struct {
    s32 cmd : 8;
    s32 pad : 24;
    Tri tri;
} Gtri;

typedef struct {
    s32 cmd : 8;
    s32 pad1 : 24;
    s32 pad2 : 24;
    u8  param : 8;
} Gpopmtx;

typedef struct {
    s32 cmd : 8;
    s32 pad0 : 8;
    s32 mw_index : 8;
    s32 number : 8;
    s32 pad1 : 8;
    s32 base : 24;
} Gsegment;

typedef struct {
    s32 cmd : 8;
    s32 pad0 : 8;
    s32 sft : 8;
    s32 len : 8;
    u32 data : 32;
} GsetothermodeL;

typedef struct {
    s32 cmd : 8;
    s32 pad0 : 8;
    s32 sft : 8;
    s32 len : 8;
    u32 data : 32;
} GsetothermodeH;

typedef struct {
    u8 cmd;
    u8 lodscale;
    u8 tile;
    u8 on;
    u16 s;
    u16 t;
} Gtexture;

typedef struct {
    s32 cmd : 8;
    s32 pad : 24;
    Tri line;
} Gline3D;

typedef struct {
    s32 cmd : 8;
    s32 pad1 : 24;
    s16 pad2;
    s16 scale;
} Gperspnorm;

typedef struct {
    s32 cmd : 8;
    u32 fmt : 3;
    u32 siz : 2;
    u32 pad : 7;
    u32 wd : 12;
    u32 dram;
} Gsetimg;

typedef struct {
    s32 cmd : 8;
    u32 muxs0 : 24;
    u32 muxs1 : 32;
} Gsetcombine;

typedef struct {
    s32 cmd : 8;
    u8  pad;
    u8  prim_min_level;
    u8  prim_level;
    u32 color;
} Gsetcolor;

typedef struct {
    s32 cmd : 8;
    s32 x0 : 10;
    s32 x0frac : 2;
    s32 y0 : 10;
    s32 y0frac : 2;
    u32 pad : 8;
    s32 x1 : 10;
    s32 x1frac : 2;
    s32 y1 : 10;
    s32 y1frac : 2;
} Gfillrect;

typedef struct {
    s32 cmd : 8;
    u32 fmt : 3;
    u32 siz : 2;
    u32 pad0 : 1;
    u32 line : 9;
    u32 tmem : 9;
    u32 pad1 : 5;
    u32 tile : 3;
    u32 palette : 4;
    u32 ct : 1;
    u32 mt : 1;
    u32 maskt : 4;
    u32 shiftt : 4;
    u32 cs : 1;
    u32 ms : 1;
    u32 masks : 4;
    u32 shifts : 4;
} Gsettile;

typedef struct {
    s32 cmd : 8;
    u32 sl : 12;
    u32 tl : 12;
    s32 pad : 5;
    u32 tile : 3;
    u32 sh : 12;
    u32 th : 12;
} Gloadtile;

typedef Gloadtile Gloadblock;
typedef Gloadtile Gsettilesize;
typedef Gloadtile Gloadtlut;

typedef struct {
    u32 cmd : 8;  /* command */
    u32 xl : 12;  /* X coordinate of upper left */
    u32 yl : 12;  /* Y coordinate of upper left */
    u32 pad1 : 5;
    u32 tile : 3; /* tile descriptor index */
    u32 xh : 12;  /* X coordinate of lower right */
    u32 yh : 12;  /* Y coordinate of lower right */
    u32 s : 16;   /* S texture coord at top left */
    u32 t : 16;   /* T texture coord at top left */
    u32 dsdx : 16;
    u32 dtdy : 16;
} Gtexrect;

/* Textured rectangles are 128 bits, not 64. */
typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
} TexRect;

/* This union is the fundamental type of the display list: exactly 64 bits. */
typedef union {
    Gwords         words;
    Gdma           dma;
    Gtri           tri;
    Gline3D        line;
    Gpopmtx        popmtx;
    Gsegment       segment;
    GsetothermodeH setothermodeH;
    GsetothermodeL setothermodeL;
    Gtexture       texture;
    Gperspnorm     perspnorm;
    Gsetimg        setimg;
    Gsetcombine    setcombine;
    Gsetcolor      setcolor;
    Gfillrect      fillrect;     /* also used for setscissor */
    Gsettile       settile;
    Gloadtile      loadtile;     /* also used for loadblock */
    Gsettilesize   settilesize;
    Gloadtlut      loadtlut;
    s64            force_structure_alignment;
} Gfx;
