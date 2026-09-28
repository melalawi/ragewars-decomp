/* Resource manager thread setup and loop: fills a 0x200-byte stack with a marker, creates and starts the
 * thread object at D_80103720 (entry D_23CA14, stack top D_80103B50), then forever receives request
 * messages and dispatches on the request type to func_8023C1E0, func_8023CE8C, func_8023CCC4 or
 * func_8023CDC4. */
#include "basetypes.h"

typedef struct {
    s16 type;
} Request;

extern char D_80103950[];
extern char D_80103254[];
extern char D_23CA14[];
extern void *func_802A101C(void *, s32, u32);
extern void func_802BFD80(void *, s32, void *, void *, void *, s32);
extern void func_802C0840(void *);
extern s32 func_802C0390(void *, Request **, s32);
extern void func_8023C1E0(Request *);
extern void func_8023CE8C(Request *);
extern void func_8023CCC4(Request *);
extern void func_8023CDC4(Request *);

void func_8023C914(void) {
    Request *request;

    func_802A101C(D_80103950, 0x62, 0x200);
    func_802BFD80(D_80103950 - 0x230, 0x62, D_23CA14, 0, D_80103950 + 0x200, 0x94);
    func_802C0840(D_80103950 - 0x230);
    for (;;) {
        func_802C0390(D_80103254, &request, 1);
        switch (request->type) {
        case 0:
            func_8023C1E0(request);
            break;
        case 1:
            func_8023CE8C(request);
            break;
        case 3:
            func_8023CDC4(request);
            break;
        case 2:
            func_8023CCC4(request);
            break;
        }
    }
}
