# Method

## What counts

The unit is the **function interval**: from a function symbol to the next symbol (main segment), or one
`asm` subsegment of the split (the segment loaded at 0x80400000). `config.toml` defines both.

- **C share** = bytes of intervals whose authored C links and reproduces the cartridge, over all
  function-interval bytes. It is the only figure, and it is taken from the built image every time.
- There is no second figure. Hand-written assembly the build reproduces is not added to the
  numerator, and inter-object padding is not taken off the denominator. Filler inside an interval is
  a boundary to repair, not bytes to take off the denominator.

`make progress` measures the built image; no number is recorded in the repository.

## Hand-written assembly

An interval is declared hand-written only when its assembly uses an instruction C cannot produce
(`mfc0`, `mtc0`, `eret`, TLB and cache operations) and it has no C. Every non-C interval using one must be
declared. Difficulty is never a reason.

## Boundaries

Many unmatched intervals are not whole functions: a symbol starting on alignment filler, a body followed by
zero or stale words (each equal to the word 0x1000 later), a fragment such as a lone epilogue, one function
split in two, or a jump table outside the placeable block. `classify` names these; they are fixed in the
split and symbols, not in C.

## Selection and landing

The build links every authored object into a trial image, keeps the functions whose bytes (and resident
tables and literals) match, and relinks everything else from extracted assembly, so one wrong draft never
breaks the ROM. Every command that rebuilds or judges the tree holds one kernel lock; drafting takes none.
Candidates queue and land in batches: a whole-image gate costs the same for one function as for fifty.
`make check` judges the tree on each landing. Each checker's own control -- the one that plants its
defect in a temporary tree and requires the refusal -- lives in the toolkit beside the checker, and
runs there; this repository carries no controls of its own and no Python at all.

## The compiler

Recorded in `docs/toolchain.md`, which is written by hand against the machine record at
`config.toml [toolchain].survey`, `data/toolchain-evidence.json`: what the build pins, what the
survey of each cartridge's text counted region by region, and what none of it establishes. Nothing
renders that document, so every number in it is copied from the evidence file and is to be checked
against it by whoever changes either.

## Findings

- A nop between float multiplies is common to `-mfix4300` output but also appears in ordinary matching C, so it is only a hint.
- The code at 0x80200500–0x802017FF releases the stack before an empty return delay slot at every
  site that has a frame, where the rest of the text releases it in the slot. The counts, and what
  they do and do not say about who produced it, are in `docs/toolchain.md`.
