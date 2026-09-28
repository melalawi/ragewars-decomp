# Contributing

Read [DEVELOPMENT.md](DEVELOPMENT.md) first: it says what you supply, how to verify it, and what the
goals are. The commands below need the decompilation toolkit on `PATH`; `decomp --help` and
`matchkit --help` list everything either one can do.

## The rule

Real C only. A function lands when its C compiles with the pinned compiler to the exact bytes of its
interval **and** you can say in one sentence what it does. The checks refuse:

- machine code retyped as data (instruction words in an array), even when the bytes match;
- inline assembly, including a keyword assembled with `##`;
- padding counted as C: an interval ending in filler is a boundary problem, not a C problem.

## One function, start to finish

```sh
matchkit next --drafters 1 --per 5 --tier T --write   # disjoint work; prints the assignment id
matchkit classify func_X                # skip anything not routed "drafter"
matchkit similar func_X                 # matched twins: start from their C
matchkit m2c func_X > work/func_X.c     # or draft by hand from the assembly
matchkit try --assignment ID work/func_X.c   # no lock; every run is a TRIED row in the ledger
matchkit permute work/func_X.c --state work/func_X.permute.json # only when a few words differ
```

A candidate is compared against the interval its filename names, so the file must be called
`<function>.c`. `matchkit try draft.c` is refused for that reason.

Every command takes `--project <root>` and `--version <id>`. Run from this directory and both can be
left out: the project root is found here, and the cartridge is the one `config.toml` declares as
`[project].reference`. Pass `--version` to work on any of the others.

A byte-identical `try` is where drafting ends: hand the candidate and the comparison `try` wrote
under `artifacts/candidate-trials/` to a landing.

The first `/* comment */` of a candidate is its note: one sentence on what the function does. Notes
describe evidence only; they name no people and no files outside the repository.

`try` works in its own directory, so any number of drafts can be tried at once. It reports the
differing words and writes `artifacts/candidate-trials/func_X.compared.txt`; `--cflags "-mfix4300"`
adds options for that trial only. After `make`, each function's assembly is in
`artifacts/<version>/extracted/asm/nonmatchings/func_X.s`.

## Landing

A landing goes through the queue, and the queue is what `make check` accounts sources against: it
refuses any file under `[source].scan` that neither matches its baseline in
`data/source-ownership.json` nor carries an event in `<[state].queue>/ledger.jsonl`, by name. Every
goal runs inside the exclusive landing lock -- make re-runs itself under it -- so a landing, a gate
and a measurement never interleave, while drafting takes no lock and never waits.

`decomp land` is what places a candidate and accounts for it. Do not run `make` yourself while
drafting; the landing runs it for you, inside the lock:

```sh
decomp land submit artifacts/drafts/func_X/func_X.c   # queue it, note and all
decomp land status                                    # what is queued and assigned
decomp land run                                       # place a batch, gate it, record it
```

`submit` refuses a candidate with no note, one the split does not name, or one whose exact bytes
have no byte-identical TRIED row in the ledger (run `matchkit try` on it first). `run` judges each
queued candidate with the same trial on every cartridge that shares the function, before placing
anything: one that is not identical on the cartridge it was submitted for goes to
`<queue>/rejected/` with its measurement, recorded against the function as a failed attempt, and so
does one the build refuses when it is the only one placed. The other cartridges' results are
recorded beside it. `[gate].batch` (the toolkit's policy) says how many one gate judges. What is left has to pass the whole gate; if it does not, every candidate goes back to the
queue and the tree is exactly what it was. What lands is recorded in the ledger and in
`data/attempts.json`, which is the record `next` reads land rates from.

Work on one function at a time, in a directory of your own, and edit no file another draft is using.
Skip a function `classify` does not route to `drafter`, and say why in the failure note.

A function that did not reproduce within the stop (`[stop.draft].trials` TRIED rows in one assignment,
from the toolkit's policy) is handed back without placing anything. The measurement recorded is the
closest trial's, read from the ledger; nobody types it:

```sh
decomp land record-failure func_X --assignment ID --candidate work/func_X.c \
    --note "the cartridge leaves the delay slot empty."
matchkit report --assignment ID          # the generated account of the assignment
```

## Routes from `classify`

| Route | Meaning | What to do |
|---|---|---|
| drafter | an ordinary C function | draft it |
| boundary | filler, a fragment or a mid-function entry | leave it for a boundary repair |
| merge | one function split in two | leave it for a boundary repair |
| rodata | tables or literals outside the placeable block | leave it for a rodata fix |
| symbols | a data symbol is missing | add the symbol, then draft |
| compiler | code the pinned compiler does not emit (e.g. an empty return delay slot) | record it; don't fight the C |
| asm | hand-written assembly | try it anyway; there is no declaration to file, and `docs/handwritten-assembly.md` records only what has been found so far |

## Forms that have reproduced bytes

Each of these closed a measured difference on this compiler. `try` is what decides whether one helps
here; none of them is a rule.

- Float literals at full precision; placement at the cartridge address is automatic: `x * 0.0174532925f`.
- Globals declared as arrays to fix load order: `extern s32 D_800E1000[];` read as `D_800E1000[0]`.
- `static inline` helpers, and reuse of helpers already landed in other files.
- Struct-typed globals instead of raw offsets: `gCamera.pos.x`, not `*(f32 *)(D_x + 0x10)`.
- Locals holding constants or table addresses: `Entry *table = D_800C9000;`.
- `ABS`/`MIN`/`MAX` macros; an inline `MIN` inside `MAX` avoids a split branch.
- A fresh block-scoped `Gfx *` per display-list command.
- Brute-forcing a switch's case-to-table mapping when cases share bodies.
- Permuter output that keeps behaviour, such as an empty `do {} while (0)` or a duplicated store.
  Permuter scores are hints; a byte-identical `try` is the only verdict.

Two constraints that are the toolchain's, not a preference:

- The pinned assembler does not support string literals; use an `extern char` array.
- A nop between float multiplies suggests `-mfix4300`; an empty return delay slot is not this
  compiler's output, so classify it rather than chase it.

A per-object compiler option goes under that cartridge's `[cartridge.toolchain.object_options]` in
`config.toml`, and only when the unchanged public reference source compiles byte-identical under it.
