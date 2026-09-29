# Turok: Rage Wars decompilation

A matching decompilation of *Turok: Rage Wars* for the Nintendo 64.

> **This repository contains no game content, and never will.** Supply a cartridge image you dumped yourself. The build verifies it against the SHA256 below and refuses anything else. Everything here is derived from that dump and from the toolchain, never from leaked or previously decompiled source.

## Progress

<pre><code>all     [############--------]  62.00%  3,463,336 of 5,585,840 bytes</code><br><code>us      [############--------]  64.14%  709,800 of 1,106,684 bytes</code><br><code>us-rev1 [#############-------]  65.58%  743,412 of 1,133,680 bytes</code><br><code>eu      [############--------]  60.02%  670,352 of 1,116,812 bytes</code><br><code>eu-mul  [###########---------]  59.00%  658,060 of 1,115,364 bytes</code><br><code>de      [############--------]  61.23%  681,712 of 1,113,300 bytes</code></pre>

| us (NUS-NRWE-0, North America). First NTSC release (black cartridge). SHA256 0433043aaba2649bdd1fe717c4020550ac663c0362527aa082490f5977a3e46b |
|---|
| <pre><code>bytes     [############--------]  64.14%  709,800 of 1,106,684</code><br><code>functions [#################---]  86.31%  3,694 of 4,280</code></pre> |

| us-rev1 (NUS-NRWE-1, North America). Revised NTSC release (grey cartridge). SHA256 5dfbae59e4a3860b740ccbb28f33aad624315e30bfca6d60abd62d12a89e0089 |
|---|
| <pre><code>bytes     [#############-------]  65.58%  743,412 of 1,133,680</code><br><code>functions [#################---]  89.20%  3,882 of 4,352</code></pre> |

| eu (NUS-NRWP-0, Europe). PAL release. SHA256 d763cbbe485a5f9e1b7be97d5ac16735087e23d0bb62c05dc844e01b7e1156d1 |
|---|
| <pre><code>bytes     [############--------]  60.02%  670,352 of 1,116,812</code><br><code>functions [################----]  83.05%  3,615 of 4,353</code></pre> |

| eu-mul (NUS-NRWX-0, Europe). PAL multi-language release. SHA256 511f6c876586bf401faf01a270c67f26fcb7db55ed3f35759c71ab15a29de750 |
|---|
| <pre><code>bytes     [###########---------]  59.00%  658,060 of 1,115,364</code><br><code>functions [################----]  84.48%  3,581 of 4,239</code></pre> |

| de (NUS-NRWD-0, Germany). Censored German release. SHA256 9dc401252bacb2ad7412ef003f97f28cb225d76b3cc76f430fbc27fa05067ca8 |
|---|
| <pre><code>bytes     [############--------]  61.23%  681,712 of 1,113,300</code><br><code>functions [################----]  83.90%  3,643 of 4,342</code></pre> |

## Development & Contributions

For detailed instructions please see [DEVELOPMENT.md](DEVELOPMENT.md).

### AI Usage Disclaimer

AI is used in the decompilation process. Its use is limited to drafting candidate C and rearranging code that already matches, and its output is objectively verifiable by compiling against the ROM. Future work such as naming functions and describing what the code does will be led by human authors.

## License

The repository's own code is released under [CC0 1.0](LICENSE).

## Dependencies

- [N64DecompTools](https://github.com/melalawi/n64-decomp-tools), the toolkit that builds, proves and measures this decompilation.
- [splat](https://github.com/ethteck/splat) version 0.50.0.
- [m2c](https://github.com/matt-kempster/m2c) at `708d2d2cb2698f091a92492b328f73b24209f72d`.
- [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) at `059609d4aec73eb0650726772954e1ad575825f8`.
- [maspsx](https://github.com/mkst/maspsx) at `7686f845a181700534c83c0419183e38aeb3e49c`.
- [GCC 2.8.1 for mips-nintendo-nu64](https://github.com/pmret/gcc-papermario) at `d97824ffc7517675646960442b3f512a473e4404`, the compiler of toolchain `gcc-2.8.1`, assembled by SN ASN64 version 2.81.

