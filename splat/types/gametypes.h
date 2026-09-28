/* Shared Rage Wars GAME types recovered from landed decompilations.
 *
 * Distinct from `vectors.h` (pure math value types) and from `actor.h`
 * (the large recovered Actor). This file holds game-domain records that more
 * than one function is expected to use.
 *
 * Promotion bar, applied by the round-7 asset lane and worth keeping: a layout
 * earns a place here only if it is a genuine shared game struct. A
 * function-local stack frame does NOT qualify, however carefully recovered --
 * promoting a one-off is worse than not promoting it, because every future lane
 * then has to consider a name none of them can use. Two candidates were
 * REJECTED on exactly that basis: `DrawInfo` (base at 0x8, value10 at 0x10) and
 * a `Working` frame (vectors at 0x00/0x10/0x20/0x30/0x44, scalar at 0x198),
 * both single-function frames from `func_8024BA6C` and `func_8024DBB0`.
 *
 * Vector fields are expressed as `Vector3f` rather than re-declared inline --
 * that is the whole point of having a corpus.
 */

typedef struct {
    /* 0x00 */ s32 field_00;
    /* 0x04 */ Vector3f vector_04;
    /* 0x10 */ Vector3f vector_10;
    /* 0x1C */ u16 value_1C;
    /* 0x1E */ u16 value_1E;
    /* 0x20 */ u16 id_20;
    /* 0x22 */ u16 id_22;
    /* 0x24 */ s16 angle_24;
    /* 0x26 */ u8 value_26;
    /* 0x27 */ u8 value_27;
} SpawnDef;
