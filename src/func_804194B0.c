struct Command {
    unsigned words[2];
};

extern void *func_802A25E4(int);
extern void func_802BBD8C(void *, void *);
extern struct Command *D_80110634;

void func_804194B0(void *source) {
    void *allocation = func_802A25E4(0x40);
    struct Command *command;

    func_802BBD8C(source, allocation);
    command = D_80110634++;
    command->words[0] = 0xDA380003;
    command->words[1] = (unsigned)allocation;
}
