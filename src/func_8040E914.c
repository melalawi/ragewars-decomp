/* Resets the state and copies the two configured values after initialization. */
extern void func_8040CB30(void);
extern int D_800E2AB0;
extern int D_800E2AB4;


typedef struct State {
    int field0;
    int field4;
    int field8;
    int fieldC;
} State;

extern State D_80153810;

void func_8040E914(void) {

    State *state;

    func_8040CB30();
    state = &D_80153810;
    state->field8 = 0;
    state->field0 = 0;
    state->field4 = D_800E2AB0;
    state->fieldC = D_800E2AB4;
}
