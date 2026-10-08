/* Actor handler sequence 10, slots 6..6.
 * func_80211020_de selects one of fourteen sequences, reads handlers with
 * stride four, calls each with the actor and resets on the first null.
 * Original callbacks carry a KSEG0-bias-free relocation; each named
 * target is an exact current function symbol. Missing neighbors stay raw. */
typedef int (*ActorSequenceHandler)(void *actor);
ActorSequenceHandler ragewars_actor_handler_run_CEAD8_us_rev1[1] = {
    0,
};
