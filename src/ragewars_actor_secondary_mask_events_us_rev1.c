/* func_802170A0_de walks mask/event pairs with stride eight, tests each
 * mask, then passes the signed event ID to func_8024DBC0_de. The terminating
 * mask is emitted separately; its unused neighboring word stays raw. */
struct ActorMaskEvent { unsigned int mask; int event_id; };
struct ActorMaskEvent D_800C90F8_de[1] = {
    {1U << 0, 2200},
};
