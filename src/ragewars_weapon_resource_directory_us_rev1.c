/* Weapon resource descriptors selected by weapon kind.
 * 8020FDB0 reads the class through each descriptor; 8022E3C4
 * reads its resource-pointer lists. Targets retain their extracted labels.
 * The following raw null word is outside this 22-entry claim. */
struct WeaponInfo;
extern struct WeaponInfo D_800CB68C;
extern struct WeaponInfo D_800CB7AC;
extern struct WeaponInfo D_800CB80C;
extern struct WeaponInfo D_800CB86C;
extern struct WeaponInfo D_800CB8CC;
extern struct WeaponInfo D_800CB92C;
extern struct WeaponInfo D_800CB98C;
extern struct WeaponInfo D_800CB9EC;
extern struct WeaponInfo D_800CBA4C;
extern struct WeaponInfo D_800CBAAC;
extern struct WeaponInfo D_800CBB0C;
extern struct WeaponInfo D_800CBB6C;
extern struct WeaponInfo D_800CBBCC;
extern struct WeaponInfo D_800CBC2C;
extern struct WeaponInfo D_800CBC8C;
extern struct WeaponInfo D_800CBCEC;
extern struct WeaponInfo D_800CB6EC;
extern struct WeaponInfo D_800CB74C;
extern struct WeaponInfo D_800CBD4C;
extern struct WeaponInfo D_800CBDAC;
extern struct WeaponInfo D_800CBE0C;
extern struct WeaponInfo D_800CBE6C;

struct WeaponInfo *D_800D052C[22] = {
    &D_800CB68C,
    &D_800CB7AC,
    &D_800CB80C,
    &D_800CB86C,
    &D_800CB8CC,
    &D_800CB92C,
    &D_800CB98C,
    &D_800CB9EC,
    &D_800CBA4C,
    &D_800CBAAC,
    &D_800CBB0C,
    &D_800CBB6C,
    &D_800CBBCC,
    &D_800CBC2C,
    &D_800CBC8C,
    &D_800CBCEC,
    &D_800CB6EC,
    &D_800CB74C,
    &D_800CBD4C,
    &D_800CBDAC,
    &D_800CBE0C,
    &D_800CBE6C,
};
