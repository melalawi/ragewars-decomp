/* Actor handler sequence 2, slots 0..1.
 * func_80211020_de selects one of fourteen sequences, reads handlers with
 * stride four, calls each with the actor and resets on the first null.
 * Original callbacks carry a KSEG0-bias-free relocation; each named
 * target is an exact current function symbol. Missing neighbors stay raw. */
typedef int (*ActorSequenceHandler)(void *actor);
extern int func_8020EAE0_de(void *actor);
extern int func_80210248_eu(void *actor);
ActorSequenceHandler ragewars_actor_handler_run_CE840_us_rev1[2] = {
    (ActorSequenceHandler)((char *)func_8020EAE0_de - 0x80000000U),
    (ActorSequenceHandler)((char *)func_80210248_eu - 0x80000000U),
};
