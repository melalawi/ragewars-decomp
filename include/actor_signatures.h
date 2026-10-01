/* actor_signatures.h -- forward-declared, m2c-context-only prototypes
 * for currently-UNMATCHED functions confirmed (by reading each
 * function's own entry prologue)
 * to receive an Actor* in the exact parameter position shown. Every
 * other parameter's type is m2c's OWN baseline inference (unchanged) --
 * only the Actor-struct-shaped parameter is retyped, so m2c's drafts
 * for these functions resolve struct field access instead of emitting
 * M2C_FIELD(...)/M2C_UNK placeholders.
 *
 * These are DECLARATIONS ONLY (m2c context, never compiled into the
 * ROM): once a function here actually lands, its real matched
 * src/us-rev1/func_*.c definition is authoritative and this line
 * becomes redundant (harmless to leave -- see the type-context-layer
 * task's forward-declaration-safety check: cpp+pycparser tolerate a
 * stale/duplicate declaration here without erroring; verified before
 * committing this file).
 */

void func_8020AF9C(void *arg0, Actor *arg1);
void func_80217D74(void *arg0, Actor *arg1);
void func_80217F4C(void *arg0, Actor *arg1, s32 arg2);
void func_8021A9A4(Actor *arg0, s32 arg1);
void func_8021AF6C(Actor *arg0, s32 arg1);
void func_8021BFBC(Actor *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8021C440(Actor *arg0, void *arg1, s32 arg2, s32 arg3);
void func_8021D750(Actor *arg0);
void func_8021EED8(Actor *arg0, void *arg1);
void func_80220EB0(Actor *arg0);
void func_802243E4(Actor *arg0, void *arg1);
void func_802246E8(Actor *arg0, void *arg1);
void func_80224C28(Actor *arg0, void *arg1);
void func_80224F38(Actor *arg0, void *arg1);
void func_802251B8(Actor *arg0, void *arg1);
void func_8022591C(Actor *arg0, void *arg1);
void func_802266E4(Actor *arg0);
void func_802297F0(Actor *arg0, f32 arg1);
void func_8022A94C(Actor *arg0);
void func_8022C100(Actor *arg0);
void func_8022D030(Actor *arg0, void *arg1);
void func_8022D280(Actor *arg0);
void func_8022D2F8(Actor *arg0);
void func_8022DF98(Actor *arg0);
void func_8022ED38(Actor *arg0);
s32 func_802327E4(Actor *arg0);
s32 func_80232BC0(Actor *arg0, void *arg2);
s32 func_802AC96C(Actor *arg0, void *arg1);
s32 func_802ACBCC(Actor *arg0, void *arg1);
