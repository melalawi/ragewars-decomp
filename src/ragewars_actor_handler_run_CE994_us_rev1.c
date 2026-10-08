/* Actor handler sequence 6, slots 5..6.
 * func_80211020_de selects one of fourteen sequences, reads handlers with
 * stride four, calls each with the actor and resets on the first null.
 * Original callbacks carry a KSEG0-bias-free relocation; each named
 * target is an exact current function symbol. Missing neighbors stay raw. */
typedef int (*ActorSequenceHandler)(void *actor);
extern int func_8020FA10_de(void *actor);
ActorSequenceHandler ragewars_actor_handler_run_CE994_us_rev1[2] = {
    (ActorSequenceHandler)((char *)func_8020FA10_de - 0x80000000U),
    0,
};
