#ifndef RAGEWARS_MOVEMENTACTOR_H
#define RAGEWARS_MOVEMENTACTOR_H

/* movementactor.h -- the collision/movement-query sub-actor driven by the
 * ground/wall/ceiling collision dispatch chain: func_80242540 (kind switch)
 * -> func_80241F14 (kind 1) / func_80241B9C (kind 2), plus the structurally
 * identical func_80242278. All four are LANDED and byte-exact (re-verified
 * this pass via `decomp.py diff`/`asm`), and every CONFIRMED field below was
 * read back out of their recompiled MIPS THIS PASS.
 *
 * THIS IS NOT `Actor` in actor.h, and that is proven rather than assumed:
 * offset 0x0 here is a 4-byte pointer (`lw $19,0($17)` in func_80242540.c;
 * `lw $7,0($17)` in func_80242278.c), while `Actor`'s offset 0x0 is a 1-byte
 * load (`lbu $3,0($17)` in func_80216288.c). Two landed, byte-exact functions
 * cannot both be right about the same offset of the same object being 1 byte
 * and 4 bytes. They are two different structs that each happen to be spelled
 * "Actor" locally in their own source files. See rw-movementactor.md and
 * rw-struct-map.md section 1 for the full argument.
 *
 * PROVENANCE PER FIELD (see rw-movementactor.md for the instruction-level
 * citations this pass added):
 *   CONFIRMED = read this pass in a LANDED (src/us-rev1/func_*.c exists),
 *               byte-exact function's recompiled MIPS (`decomp.py asm`).
 *               Some entries chain TWO landed functions: a landed call site
 *               that passes a literal actor-relative address, into a landed
 *               callee that performs real FPU arithmetic on that exact
 *               pointer (e.g. func_80242540.c -> func_80271FD8.c). Both
 *               halves are independently byte-exact, so the chain is as
 *               solid as a single-function citation.
 *   CONFIRMED (width only) = a landed store/load proves the field is N bytes
 *               wide via a plain GPR lw/sw (a raw struct-copy or a zero-
 *               store), which cannot distinguish int vs. float/pointer kind.
 *   THEORY    = reasoned from an UNMATCHED function's raw asm (access width,
 *               GPR-vs-FPU, consecutive-slot grouping, loop-bound/stride, or
 *               a global-pointer dereference pattern matching this object's
 *               known shape). Falsification note given inline per field.
 *   UNKNOWN   = `pad`. No function anywhere in the corpus (landed or
 *               unmatched) was found touching this offset this pass. This is
 *               NOT the same claim as "known padding" -- it is an admission
 *               that nobody has looked, carried forward honestly rather than
 *               silently upgraded to a guess.
 *
 * Same SAFETY property as `Actor`: a wrong width/sign/float-ness here can
 * only make a function MISS the byte-exact gate, never corrupt a landed
 * match, because `land` always re-verifies byte-exactness independently.
 *
 * Every field sits at an EXPLICIT byte offset via `char padN[gap]` filler --
 * never the compiler's own alignment math.
 */

/* The embedded collision-query record at MovementActor+0xB0. Outer size
 * (0xDC bytes) is CONFIRMED via a copy-loop bound in func_80241B9C.c:
 *   addu $3,$18,176        ; dest = actor + 0xB0
 *   move $2,$19             ; src = query (the Query* parameter)
 *   addu $4,$19,208          ; loop end = query + 0xD0
 *   .L5: lw $8/9/10/11,0/4/8/12($2); sw $8/9/10/11,0/4/8/12($3);
 *        addu $2,$2,16; bne $2,$4,.L5; addu $3,$3,16
 *   (then a 12-byte tail copy: lw/sw $8/9/10 at 0/4/8)
 * Total copied = 0xD0 + 0xC = 0xDC bytes: `actor->saved_query = *query;`
 *
 * Interior resolved THIS PASS (previously completely unexamined) using two
 * more landed functions that write/read specific Query-relative offsets
 * with real instructions: func_80242540.c and func_80242278.c both build a
 * *local* `Query query;` (or push one onto the frame) and initialize its
 * fields with literal-offset stores that must be real (byte-exact) offsets;
 * func_80241718.c takes a `Query*`-shaped argument and performs genuine FPU
 * arithmetic (sub.s/mul.s/div.s) on two of its Vec3-shaped sub-fields. Since
 * `actor->saved_query = *query;` is a flat bit-for-bit struct copy, every
 * offset confirmed on the local/stack `query` object applies identically to
 * the embedded `saved_query` copy.
 */
typedef struct MovementActorQuery {
    /* 0x00 */ s32   word0;    /* CONFIRMED s32 (func_80241B9C.c: `sw $2,0($19)`,
                                   query->word0 = 3; also tested via `slti`/`blez`
                                   against 0/3 in unmatched func_8023D370.s -- small
                                   discrete state code, values seen: 0,1,2,3,6,7,9) */
    /* 0x04 */ s32   word4;    /* CONFIRMED s32 width (func_80242540.c: `sw $0,60($sp)`,
                                   query base = $sp+56, so 60-56=4; zero-store).
                                   Reinterpreted as f32 elsewhere (func_80242278.c:
                                   `*(f32 *)&query.word4`) but never touched by a real
                                   FPU instruction in any witness -- same
                                   "kind unresolved" caveat as RW_Actor's 0x1C/0x20/0x24. */
    /* 0x08 */ s32   word8;    /* CONFIRMED s32 (func_80242540.c: `sw $16,64($sp)`,
                                   $16=1, 64-56=8; func_80242278.c: `sw $4,40($sp)`,
                                   query base=$sp+32, 40-32=8, $4=2. Also read back
                                   and rewritten by unmatched func_8023D370.s at
                                   Query+0x08 (abs 0xB8) as a small result/state code:
                                   values 1,2,3,6,7,9 observed) */
    /* 0x0C */ s32   wordC;    /* CONFIRMED s32 (func_80242540.c: `sw $0,68($sp)`,
                                   68-56=0xC; func_80242278.c: `sw $0,44($sp)`,
                                   44-32=0xC) */
    /* 0x10 */ s32   word10;   /* CONFIRMED s32 (func_80242540.c: `sw $0,72($sp)`,
                                   72-56=0x10; func_80242278.c: `sw $0,48($sp)`,
                                   48-32=0x10) */
    /* 0x14 */ s32   count;    /* THEORY s32 (unmatched func_8023D370.s: `lw $4,0xC4($20)`
                                   read at MovementActor+0xC4 = Query+0x14, then used
                                   as `slt $2,$3,$4` / loop upper bound for a
                                   min-search over point-shaped data starting further
                                   into the query -- classic "count of valid entries"
                                   shape. Falsify: decompile func_8023D370 and check
                                   whether $4 is genuinely used as an array bound
                                   rather than some unrelated scalar. */
    /* 0x18 */ f32   point_x;  /* CONFIRMED f32 (func_80241718.c: `lw $2,24($4)` (arg0
                                   is the Query* parameter) feeds `sub.s`/`mul.s` --
                                   real FPU arithmetic on a byte-exact function) */
    /* 0x1C */ f32   point_y;  /* CONFIRMED f32 (func_80241718.c: `l.s $f0,28($4)` is
                                   the degenerate-normal fallback return value, and the
                                   same offset is loaded again as `lw $3,28($4)` into
                                   the point Vec3 used in the main arithmetic path) */
    /* 0x20 */ f32   point_z;  /* CONFIRMED f32 (func_80241718.c: `lw $7,32($4)`, used
                                   in `sub.s`/`mul.s` real FPU arithmetic) */
    /* 0x24 */ char  pad_00[0x24]; /* UNKNOWN -- no landed function reaches this span.
                                   THEORY (not promoted to named fields): unmatched
                                   func_8023D370.s contains a min-y search loop reading
                                   floats at MovementActor+0xD8+0xC*k (i.e. somewhere
                                   around Query+0x28 onward, stride 0xC, bounded by
                                   `count` above) -- consistent with an array of extra
                                   Vec3-shaped query points living in this gap, but the
                                   exact per-element offset/stride was not pinned with
                                   enough confidence to name individual fields. Falsify:
                                   decompile func_8023D370 and read the loop precisely. */
    /* 0x48 */ f32   normal_x; /* CONFIRMED f32 (func_80241718.c: `lw $2,72($4)`, used
                                   in real FPU arithmetic; 72 decimal = 0x48) */
    /* 0x4C */ f32   normal_y; /* CONFIRMED f32 (func_80241718.c: `lw $3,76($4)`,
                                   compared via `c.eq.s $f1,$f0` against 0.0 -- real
                                   FPU compare, gates the whole function) */
    /* 0x50 */ f32   normal_z; /* CONFIRMED f32 (func_80241718.c: `lw $7,80($4)`, used
                                   in real FPU arithmetic) */
    /* 0x54 */ void *context;  /* CONFIRMED pointer, DUAL WITNESS with two DIFFERENT
                                   pointee kinds depending on caller: func_80242540.c
                                   `sw $20,140($sp)` stores `input` here (query base+
                                   0x54=$sp+140, 140-56=0x54); func_80242278.c
                                   `sw $19,116($sp)` stores `owner` here (query base+
                                   0x54=$sp+32, 116-32=0x54). Both are landed, both
                                   are plain 4-byte pointer stores at the SAME offset,
                                   so this is a real field, not a conflict -- generic
                                   "context" name chosen because the two landed
                                   witnesses disagree on what it points to. Do not
                                   rename to `input` or `owner`; either would be wrong
                                   in the other caller's path. */
    /* 0x58 */ s32   index;    /* CONFIRMED s32 (func_80242540.c: `sw $2,144($sp)`,
                                   $2=-1, 144-56=0x58; func_80242278.c: `sw $2,120($sp)`,
                                   120-32=0x58, $2=-1 -- both witnesses initialize it
                                   to -1) */
    /* 0x5C */ char  pad_01[0x80]; /* UNKNOWN, except one THEORY point inside it: */
    /* 0xCC  (inside pad_01) */    /* THEORY f32 -- unmatched func_8023D370.s reads/
                                   writes MovementActor+0x17C (=Query+0xCC) via lwc1/
                                   swc1 in a self-referential decay pattern
                                   (`f1 = D_800Cxxxx - query_val; store back`), several
                                   times across the function with different global
                                   constants each time -- consistent with a per-call
                                   cooldown/blend timer read from and written back into
                                   the query record. Not carved out as a named field
                                   because pad_01 above already claims the byte range
                                   and only this one 4-byte slice inside it has any
                                   evidence; see rw-movementactor.md for the exact
                                   instruction list. Falsify: decompile func_8023D370
                                   and check whether 0x17C is truly re-read/re-written
                                   as a scalar float rather than part of some other
                                   access pattern. */
} MovementActorQuery; /* sizeof == 0xDC, CONFIRMED (copy-loop bound) */

typedef struct MovementActor {
    /* 0x000 */ void *owner;             /* CONFIRMED pointer (func_80242278.c:
                                             `lw $7,0($17)`; func_80242540.c:
                                             `lw $19,0($17)`) */
    /* 0x004 */ char  pad_00[0x8];       /* UNKNOWN -- no function in the corpus
                                             (landed or unmatched) was found touching
                                             offsets 0x004-0x00B this pass. */
    /* 0x00C */ f32   fieldC;            /* CONFIRMED f32 (func_80242278.c:
                                             `value = *(f32*)(owner->entries+0x1C)
                                             + actor->fieldC;` compiles to real `add.s`) */
    /* 0x010 */ s32   unk_010;           /* THEORY s32 (unmatched func_802450BC.s,
                                             base=D_800E2830 dereferenced: `lw $2,0x10($3)`
                                             then `sw $0,0x10($3)` -- read-then-reset-to-
                                             zero pattern, consistent with a one-shot
                                             flag/counter. Falsify: decompile
                                             func_802450BC and check the read's use. */
    /* 0x014 */ char  pad_01[0x8];       /* UNKNOWN -- no function touches 0x014-0x01B. */
    /* 0x01C */ f32   unk_01C;           /* THEORY f32 (unmatched func_802450BC.s:
                                             `lwc1 $f0,0x1C($3)` / `swc1 $f0,0x1C($3)` --
                                             real FPU load+store, same base register as
                                             the other confirmed-adjacent MovementActor
                                             fields in that function (0x3C flags,
                                             0x60/0x64 move). Falsify: any landed
                                             function reaching 0x01C with a conflicting
                                             width/kind. */
    /* 0x020 */ char  pad_02[0x4];       /* UNKNOWN -- no function touches 0x020-0x023. */
    /* 0x024 */ s32   unk_024;           /* THEORY s32 (unmatched func_8023D370.s:
                                             `lw $2,0x24($20); beqz $2,...` -- gates a
                                             large conditional block, boolean-shaped) */
    /* 0x028 */ char  pad_03[0x4];       /* UNKNOWN -- no function touches 0x028-0x02B. */
    /* 0x02C */ s32   unk_02C;           /* THEORY, KIND CONFLICT NOTED: unmatched
                                             func_8023D370.s reads it as a plain GPR
                                             boolean (`lw $2,0x2C($20); beqz $2,...`,
                                             gates several blocks -- used this way
                                             SEVEN times in that one function); unmatched
                                             func_802450BC.s reads the SAME offset as a
                                             float (`lwc1 $f1,0x2C($3)`). Both are
                                             unmatched, neither is landed, so this is an
                                             open conflict, not a resolved field --
                                             declared s32 (majority usage) but flagged
                                             loudly. Falsify: land either witness and
                                             read back the real instruction. */
    /* 0x030 */ s32   unk_030;           /* THEORY s32 counter (unmatched func_8023D370.s:
                                             `lw $2,0x30($20); beqz ...; addiu $2,$2,-1;
                                             sw $2,0x30($20)` -- decrement-if-nonzero,
                                             classic cooldown-timer idiom) */
    /* 0x034 */ s32   unk_034;           /* THEORY, KIND CONFLICT NOTED (same shape as
                                             0x02C): func_8023D370.s decrements it as an
                                             s32 counter (`lw $2,0x34($20); addiu $2,$2,-1;
                                             sw $2,0x34($20)`); func_802450BC.s reads the
                                             same offset as float (`lwc1 $f0,0x34($3)`).
                                             Declared s32 (majority usage), flagged. */
    /* 0x038 */ s32   unk_038;           /* THEORY s32 flag (unmatched func_8023D370.s:
                                             `lw $2,0x38($20); beqz $2,...`) */
    /* 0x03C */ s32   flags;             /* CONFIRMED s32 (func_80241B9C.c/func_80241F14.c:
                                             `lw $2,60($18)` / `ori $2,$2,0x0008` /
                                             `sw $2,60($18)`; also `ori ...,0x0020` and
                                             `ori ...,0x0060` elsewhere in the same
                                             function. Bit 0x1000 also confirmed toggled
                                             in unmatched func_8023D370.s: `xori $2,$2,0x1000`
                                             at MovementActor+0x3C -- corroborating, not
                                             landed-proof, for that specific bit) */
    /* 0x040 */ void *field40;           /* CONFIRMED pointer (func_80242278.c:
                                             `lw $3,64($17)` compared via `beq`/`bne`
                                             against `la $2,D_80104338` (a global's
                                             address), then `lb $2,4($3)` dereferences
                                             byte+4 of the pointee; func_80242540.c:
                                             `lw $3,64($17)` then `lw $2,0($3)` derefs
                                             word 0 of the pointee and ANDs with
                                             0x40000 -- this is the `*actor->flags &
                                             0x40000` gate in that file's own (locally
                                             mis-named) typedef; it is the SAME field as
                                             func_80242278.c's `field40`, not a separate
                                             "flags pointer") */
    /* 0x044 */ f32   previous_x;        /* CONFIRMED WIDTH (4B), KIND THEORY-f32.
                                             func_80242540.c: `lw $8,68($17)` /
                                             `sw $8,68($17)` (plain GPR copy: `actor->
                                             previous = input->position;`) -- width-only
                                             like RW_Actor's position1 fields. KIND
                                             upgraded to THEORY-f32 (not CONFIRMED)
                                             because this exact 12-byte block is never
                                             independently passed through a real FPU
                                             instruction in any witness this pass,
                                             unlike its neighbor `position` below (which
                                             IS FPU-proven). Falsify: any landed function
                                             passing &actor->previous through a Vec3-arg
                                             FPU-touching callee. */
    /* 0x048 */ f32   previous_y;        /* CONFIRMED WIDTH, KIND THEORY-f32 (same
                                             evidence, offset 72) */
    /* 0x04C */ f32   previous_z;        /* CONFIRMED WIDTH, KIND THEORY-f32 (same
                                             evidence, offset 76) */
    /* 0x050 */ f32   position_x;        /* CONFIRMED f32. func_80242540.c passes
                                             `&actor->position` (computed as `addiu
                                             $4,$17,80`) as arg0 to func_80271FD8, which
                                             is ALSO landed and byte-exact and performs
                                             `arg0->x = arg1->x - arg2->x` with real
                                             `l.s`/`sub.s`/`s.s` on that exact pointer.
                                             Chaining two landed, byte-exact functions
                                             (call site + callee body) is as solid as a
                                             single-function citation. */
    /* 0x054 */ f32   position_y;        /* CONFIRMED f32, same call-chain evidence
                                             (offset 84). Also independently touched by
                                             unmatched func_80206DD4.s as a real float
                                             (`lwc1`/`swc1 ...,0x54($17)`) -- corroborating. */
    /* 0x058 */ f32   position_z;        /* CONFIRMED f32, same call-chain evidence
                                             (offset 88). Also independently touched by
                                             unmatched func_80206DD4.s as a real float
                                             (`lwc1`/`swc1 ...,0x58($17)`). */
    /* 0x05C */ f32   move_x;            /* CONFIRMED f32 (func_80241B9C.c: `l.s
                                             $f0,92($18)` + `c.lt.s`; func_80242278.c:
                                             `l.s $f0,92($17)` + `c.eq.s`. ALSO the
                                             destination of func_80242540.c's
                                             func_80271FD8 call above: `addu $6,$17,92`
                                             is arg2 = &actor->move_x, i.e. the SAME
                                             real-FPU-proven call chain applies here too:
                                             actor->move = input->position - actor->delta
                                             is the literal computation, per
                                             func_80271FD8.c's body.) */
    /* 0x060 */ f32   move_y;            /* CONFIRMED f32 (func_80241B9C.c: `l.s
                                             $f0,96($18)` + `c.lt.s $f24,$f0`, gates the
                                             whole function: `if (actor->move_y > 0.0f)`;
                                             func_80242278.c: same, `l.s $f0,96($17)`) */
    /* 0x064 */ f32   move_z;            /* CONFIRMED f32 (func_80241B9C.c: `l.s
                                             $f0,100($18)`; func_80242278.c: `l.s
                                             $f0,100($17)` + `c.eq.s`) */
    /* 0x068 */ char  pad_04[0xC];       /* UNKNOWN -- no function touches 0x068-0x073. */
    /* 0x074 */ f32   field74_x;         /* THEORY f32×3 (unmatched func_8023D370.s:
                                             `lw $8,0x74($20)` / `lw $9,0x78($20)` /
                                             `lw $10,0x7C($20)`, copied as a unit to a
                                             "saved copy" region past 0x18C -- see
                                             field198_x below. Width-only GPR evidence,
                                             kind inferred Vec3 by grouping+semantic
                                             mirror with `position`/`previous`.) */
    /* 0x078 */ f32   field74_y;         /* THEORY (same evidence, offset 0x78) */
    /* 0x07C */ f32   field74_z;         /* THEORY (same evidence, offset 0x7C) */
    /* 0x080 */ f32   field80;           /* THEORY f32 (unmatched func_8023D370.s:
                                             `lwc1 $f2,0x80($20)` used in a real
                                             `c.le.s` FPU compare against a computed
                                             threshold -- genuine FPU evidence, just not
                                             from a landed function) */
    /* 0x084 */ char  pad_05[0x18];      /* UNKNOWN -- no function touches 0x084-0x09B. */
    /* 0x09C */ f32   field9C;           /* THEORY f32 (unmatched func_80206DD4.s:
                                             `lwc1 $f1,0x9C($17)`) */
    /* 0x0A0 */ s32   fieldA0_x;         /* THEORY s32×3, width-only (unmatched
                                             func_80206DD4.s: `lw $8,0xA0($17)` /
                                             `lw $9,0xA4($17)` / `lw $10,0xA8($17)`,
                                             copied as a unit -- GPR only, kind unknown) */
    /* 0x0A4 */ s32   fieldA0_y;         /* THEORY (same evidence, offset 0xA4) */
    /* 0x0A8 */ s32   fieldA0_z;         /* THEORY (same evidence, offset 0xA8) */
    /* 0x0AC */ char  pad_06[0x4];       /* UNKNOWN -- no function touches 0x0AC-0x0AF. */
    /* 0x0B0 */ MovementActorQuery saved_query; /* CONFIRMED outer size 0xDC (copy-loop
                                             bound, func_80241B9C.c); interior resolved
                                             this pass, see MovementActorQuery above. */
    /* 0x18C */ char  pad_07[0xC];       /* UNKNOWN -- no function touches 0x18C-0x197.
                                             (This is the point the prior pass stopped
                                             at; everything from here down is new this
                                             pass, THEORY-only, from a single unmatched
                                             witness -- func_8023D370.s -- so treat the
                                             struct's true extent past 0x18C as
                                             unconfirmed until a landed function reaches
                                             it.) */
    /* 0x198 */ s32   field198_x;        /* THEORY s32×3, width-only (unmatched
                                             func_8023D370.s: copies `position`
                                             (0x50/0x54/0x58) into 0x198/0x19C/0x1A0 as a
                                             unit, several times across the function --
                                             looks like a "last known good position"
                                             snapshot taken before a risky movement
                                             resolve, restored later via `func_80271FA4`
                                             calls on the same three offsets) */
    /* 0x19C */ s32   field198_y;        /* THEORY (same evidence, offset 0x19C) */
    /* 0x1A0 */ s32   field198_z;        /* THEORY (same evidence, offset 0x1A0) */
    /* 0x1A4 */ s32   field1A4_x;        /* THEORY s32×3, width-only (unmatched
                                             func_8023D370.s: copies `field74`
                                             (0x74/0x78/0x7C) into 0x1A4/0x1A8/0x1AC as a
                                             unit, same "snapshot" pattern as field198) */
    /* 0x1A8 */ s32   field1A4_y;        /* THEORY (same evidence, offset 0x1A8) */
    /* 0x1AC */ s32   field1A4_z;        /* THEORY (same evidence, offset 0x1AC) */
    /* struct continues past 0x1B0; no function in the corpus (landed or
       unmatched) was found touching any offset beyond 0x1AC this pass. The
       0xB0-0x18C span's own interior tail (Query pad_01 above, 0x80 of it)
       is ALSO still mostly unknown -- see MovementActorQuery's pad_01 note.
       NOTE: func_8023D370.s separately touches MovementActor+0x180..0x188
       (a THIRD Vec3, inside saved_query's still-unknown pad_01 tail, i.e.
       Query+0xD0..0xD8) with the same copy-to-0x198-region pattern as
       field74/position above -- meaning saved_query's tail may be reused as
       general-purpose scratch space by at least one caller, not exclusively
       query state. Flagged, not resolved: see rw-movementactor.md. */
} MovementActor; /* sizeof >= 0x1B0 (THEORY-extended); CONFIRMED-only floor is
                     0x18C via the four landed witnesses. */

#endif /* RAGEWARS_MOVEMENTACTOR_H */
