/* Marks the attached actor visible, clears its subpart visibility bits, and applies the paused-state flag. */
typedef struct Actor {
 char pad[0x58]; int flags58;
 char pad5c[0xC4]; int flags120;
 char pad124[0x9C]; int flags1c0;
 char pad1c4[0x4C]; int flags210;
 char pad214[0x24]; int flags238;
 char pad23c[0x24]; int flags260;
} Actor;
typedef struct {char pad[0x85C];int active;} Parent;
typedef struct {char pad[0xC];Actor *actor;char pad10[0xC];Parent *parent;} Object;
extern int D_801468F4[];
void func_80443D84(Object *object) {
 if(object->parent) object->parent->active=1;
 object->actor->flags1c0 |= 0x01800000;
 object->actor->flags1c0 &= 0xFEFFFFFF;
 object->actor->flags58 |= 0x01800000;
 object->actor->flags210 &= 0xFE7FFFFF;
 object->actor->flags238 &= 0xFE7FFFFF;
 object->actor->flags260 &= 0xFE7FFFFF;
 if(D_801468F4[0]) {object->actor->flags120 |= 0x01000000; return;}
 object->actor->flags120 &= 0xFEFFFFFF;
}
