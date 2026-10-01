# Hand-written assembly

These intervals were never compiled from C. Each issues a privileged coprocessor 0
operation that no C compiler emits from standalone source, which is how each was identified:
the instruction is read out of this cartridge's own disassembly, not assumed from a name. That
code is Nintendo's libultra, which shipped as hand-written assembly in the SDK, so there is no C
source to recover.

Nothing here is exempt from anything. No goal reads this file, and no declaration in the build
excuses an interval from being counted: every interval below is unmatched, counted as unmatched,
and open to anyone who wants to try it. The progress figure counts matched C against the
cartridge's own code and has never borrowed a byte from this list.

The split decides which intervals exist, so each cartridge's list is its own. A function present
in one column and absent from another is a different split, not a different game.

## What each cartridge carries

| Cartridge | Intervals |
|---|---|
| `us` | 28 |
| `us-rev1` | 33 |
| `eu` | 33 |
| `eu-x` | 34 |
| `de` | 32 |

121 distinct intervals across the five splits, 160 interval-and-cartridge pairs in the table below.
By the instruction each was identified from: `mfc0` 59, `mtc0` 32, `cache` 29, `tlbr` 1. Their
privileged instruction words, counted once per interval, total 459.

Every count in this section is derived from the table below and is reproduced by counting it.

## The intervals

`.` means the cartridge's split has no such interval. `instruction` is the privileged operation
the interval was identified from; `words` is how many privileged instruction words it holds.

| Function | `us` | `us-rev1` | `eu` | `eu-x` | `de` | instruction | words |
|---|---|---|---|---|---|---|---|
| `func_80200400` | yes | yes | yes | yes | yes | `mfc0` | 17 |
| `func_80200488` | . | yes | . | . | . | `mfc0` | 10 |
| `func_80202268` | yes | yes | yes | yes | . | `mtc0` | 2 |
| `func_8020238C` | yes | yes | yes | yes | yes | `cache` | 1 |
| `func_802023A8` | yes | yes | yes | yes | yes | `cache` | 1 |
| `func_802023C4` | yes | yes | yes | yes | yes | `mfc0` | 1 |
| `func_802023D0` | yes | yes | yes | yes | yes | `mtc0` | 1 |
| `func_802023DC` | yes | yes | yes | yes | yes | `mfc0` | 8 |
| `func_80202460` | yes | . | yes | yes | yes | `mfc0` | 10 |
| `func_802028D0` | . | yes | . | . | . | `mfc0` | 6 |
| `func_8020293C` | yes | . | yes | yes | yes | `mfc0` | 6 |
| `func_80202994` | yes | yes | . | . | . | `mfc0` | 33 |
| `func_802AD2A0` | yes | . | . | . | . | `mfc0` | 10 |
| `func_802AD320` | yes | . | . | . | . | `mfc0` | 7 |
| `func_802AD35C` | yes | . | . | . | . | `mtc0` | 6 |
| `func_802AD368` | . | . | . | . | yes | `mfc0` | 10 |
| `func_802AD3F0` | . | . | . | . | yes | `mfc0` | 7 |
| `func_802AD42C` | . | . | . | . | yes | `mtc0` | 6 |
| `func_802AD608` | . | . | yes | . | . | `mfc0` | 10 |
| `func_802AD648` | . | . | . | yes | . | `mfc0` | 10 |
| `func_802AD690` | . | . | yes | . | . | `mfc0` | 7 |
| `func_802AD6CC` | . | . | yes | . | . | `mtc0` | 6 |
| `func_802AD6D0` | . | . | . | yes | . | `mfc0` | 7 |
| `func_802AD70C` | . | . | . | yes | . | `mtc0` | 6 |
| `func_802AD824` | yes | . | . | . | . | `mtc0` | 2 |
| `func_802AD8F4` | . | . | . | . | yes | `mtc0` | 2 |
| `func_802ADB94` | . | . | yes | . | . | `mtc0` | 2 |
| `func_802ADBD4` | . | . | . | yes | . | `mtc0` | 2 |
| `func_802B2440` | . | yes | . | . | . | `mfc0` | 10 |
| `func_802B24C0` | . | yes | . | . | . | `mfc0` | 7 |
| `func_802B24FC` | . | yes | . | . | . | `mtc0` | 6 |
| `func_802B26E4` | . | . | yes | . | . | `tlbr` | 1 |
| `func_802B29C4` | . | yes | . | . | . | `mtc0` | 2 |
| `func_802BAF64` | . | . | . | yes | . | `mfc0` | 1 |
| `func_802BBC68` | . | . | . | . | yes | `mfc0` | 11 |
| `func_802BBF08` | . | . | yes | . | . | `mfc0` | 11 |
| `func_802BBF48` | . | . | . | yes | . | `mfc0` | 11 |
| `func_802BC29C` | yes | . | . | . | . | `mfc0` | 1 |
| `func_802BC570` | . | . | . | . | yes | `mtc0` | 3 |
| `func_802BC810` | . | . | yes | . | . | `mtc0` | 3 |
| `func_802BC850` | . | . | . | yes | . | `mtc0` | 3 |
| `func_802BCE30` | yes | . | . | . | . | `mfc0` | 1 |
| `func_802BCE50` | yes | . | . | . | . | `mfc0` | 1 |
| `func_802BCE60` | yes | . | . | . | . | `mfc0` | 2 |
| `func_802BCE80` | yes | . | . | . | . | `mfc0` | 2 |
| `func_802BCEA0` | yes | . | . | . | . | `cache` | 4 |
| `func_802BCEFC` | . | . | . | . | yes | `mfc0` | 1 |
| `func_802BCF1C` | . | . | . | . | yes | `mfc0` | 1 |
| `func_802BCF2C` | . | . | . | . | yes | `mtc0` | 3 |
| `func_802BCF40` | yes | . | . | . | . | `cache` | 2 |
| `func_802BCF50` | . | . | . | . | yes | `mfc0` | 2 |
| `func_802BCF6C` | . | . | . | . | yes | `cache` | 3 |
| `func_802BCFB0` | yes | . | . | . | . | `mfc0` | 9 |
| `func_802BCFE4` | . | . | . | . | yes | `cache` | 1 |
| `func_802BD008` | . | . | . | . | yes | `cache` | 1 |
| `func_802BD054` | . | . | . | . | yes | `cache` | 1 |
| `func_802BD078` | . | . | . | . | yes | `mfc0` | 9 |
| `func_802BD080` | yes | . | . | . | . | `mtc0` | 1 |
| `func_802BD0A0` | yes | . | . | . | . | `mfc0` | 2 |
| `func_802BD14C` | . | . | . | . | yes | `mtc0` | 1 |
| `func_802BD150` | yes | . | . | . | . | `mtc0` | 1 |
| `func_802BD160` | yes | . | . | . | . | `mfc0` | 7 |
| `func_802BD170` | . | . | . | . | yes | `mfc0` | 2 |
| `func_802BD198` | . | . | yes | . | . | `mfc0` | 1 |
| `func_802BD1B0` | yes | . | . | . | . | `cache` | 2 |
| `func_802BD1BC` | . | . | yes | . | . | `mfc0` | 1 |
| `func_802BD1CC` | . | . | yes | . | . | `mfc0` | 2 |
| `func_802BD1D8` | . | . | . | yes | . | `mfc0` | 1 |
| `func_802BD1F0` | . | . | yes | . | . | `mfc0` | 2 |
| `func_802BD1FC` | . | . | . | yes | . | `mfc0` | 1 |
| `func_802BD20C` | . | . | yes | yes | . | `mfc0` | 3 |
| `func_802BD220` | yes | . | . | . | yes | `mtc0` | 1 |
| `func_802BD230` | . | . | . | yes | yes | `mfc0` | 2 |
| `func_802BD24C` | . | . | . | yes | . | `cache` | 3 |
| `func_802BD274` | . | . | . | . | yes | `cache` | 1 |
| `func_802BD284` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD2A8` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD2C4` | . | . | . | yes | yes | `cache` | 1 |
| `func_802BD2E8` | . | . | . | yes | yes | `cache` | 1 |
| `func_802BD2F4` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD318` | . | . | yes | . | . | `mfc0` | 9 |
| `func_802BD334` | . | . | . | yes | . | `cache` | 1 |
| `func_802BD358` | . | . | . | yes | . | `mfc0` | 9 |
| `func_802BD3E8` | . | . | yes | . | . | `mtc0` | 1 |
| `func_802BD410` | . | . | yes | . | . | `mfc0` | 2 |
| `func_802BD428` | . | . | . | yes | . | `mtc0` | 1 |
| `func_802BD450` | . | . | . | yes | . | `mfc0` | 2 |
| `func_802BD4B8` | . | . | yes | . | . | `mtc0` | 1 |
| `func_802BD4D0` | . | . | yes | . | . | `mfc0` | 7 |
| `func_802BD4F8` | . | . | . | yes | . | `mtc0` | 1 |
| `func_802BD510` | . | . | . | yes | . | `mfc0` | 7 |
| `func_802BD514` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD554` | . | . | . | yes | . | `cache` | 1 |
| `func_802BD564` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD588` | . | . | yes | . | . | `cache` | 1 |
| `func_802BD5A4` | . | . | . | yes | . | `cache` | 1 |
| `func_802BD5C8` | . | . | . | yes | . | `cache` | 1 |
| `func_802BFD74` | . | yes | . | . | . | `mfc0` | 1 |
| `func_802C0D58` | . | yes | . | . | . | `mfc0` | 10 |
| `func_802C1078` | . | . | . | yes | . | `cache` | 2 |
| `func_802C145C` | . | yes | . | . | . | `mfc0` | 1 |
| `func_802C1660` | . | yes | . | . | . | `mtc0` | 3 |
| `func_802C1FF0` | . | yes | . | . | . | `mfc0` | 1 |
| `func_802C2010` | . | yes | . | . | . | `mfc0` | 1 |
| `func_802C2020` | . | yes | . | . | . | `mfc0` | 2 |
| `func_802C2040` | . | yes | . | . | . | `mfc0` | 2 |
| `func_802C2060` | . | yes | . | . | . | `cache` | 4 |
| `func_802C2100` | . | yes | . | . | . | `cache` | 2 |
| `func_802C2170` | . | yes | . | . | . | `mfc0` | 9 |
| `func_802C2240` | . | yes | . | . | . | `mtc0` | 1 |
| `func_802C2260` | . | yes | . | . | . | `mfc0` | 2 |
| `func_802C2310` | . | yes | . | . | . | `mtc0` | 1 |
| `func_802C2320` | . | yes | . | . | . | `mfc0` | 7 |
| `func_802C2370` | . | yes | . | . | . | `cache` | 2 |
| `func_802C23E0` | . | yes | . | . | . | `cache` | 1 |
| `func_802C5E88` | . | yes | . | . | . | `cache` | 2 |
| `func_80445F34` | . | . | . | . | yes | `mtc0` | 2 |
| `func_80446B7C` | . | yes | . | . | . | `mtc0` | 2 |
| `func_80447190` | . | . | yes | . | . | `mtc0` | 2 |
| `func_804472C0` | . | . | . | yes | . | `mtc0` | 2 |
| `func_80457EEC` | . | . | . | . | yes | `mtc0` | 2 |

## If you think one of these is C

Then show it. Write the source, put it through the queue, and let the bytes decide. There is no
list to be taken off and no declaration to amend: the only thing that has ever settled an
interval here is whether the linked image reproduces the cartridge.
