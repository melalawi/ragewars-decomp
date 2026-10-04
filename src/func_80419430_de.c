#include "span_16E000/code_804194A8.h"


extern void *func_802A15E4_de(int);
extern void func_802B6CBC_de(void *, void *);
extern struct Command *D_8010C574;

void func_80419430_de(void *source) {
    void *allocation = func_802A15E4_de(0x40);
    struct Command *command;

    func_802B6CBC_de(source, allocation);
    command = D_8010C574++;
    command->words[0] = 0xDA380003;
    command->words[1] = (unsigned)allocation;
}
