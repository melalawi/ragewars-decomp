#include "span_1000/code_802BEDA0.h"
#include "types.h"
/* _VirtualToPhysicalTask, drafted from ultralib src/io/sptask.c; this library's bcopy is the
   destination-first copy func_802BD3A0_de. */





extern OSTask D_80148800;
extern void *func_802BD3A0_de(void *destination, const void *source, int count);
extern u32 func_802BBBC0_de(void *addr);

#define _osVirtualToPhysical(ptr)                  \
    if (ptr != 0) {                                \
        ptr = (void *)func_802BBBC0_de(ptr);          \
    } (void)0

OSTask *func_802B9D90_de(OSTask *intp)
{
    OSTask *tp;
    OSTask *task = &D_80148800;
    tp = task;
    func_802BD3A0_de(task, intp, sizeof(OSTask));

    _osVirtualToPhysical(task->t.ucode);
    _osVirtualToPhysical(task->t.ucode_data);
    _osVirtualToPhysical(task->t.dram_stack);
    _osVirtualToPhysical(task->t.output_buff);
    _osVirtualToPhysical(task->t.output_buff_size);
    _osVirtualToPhysical(task->t.data_ptr);
    _osVirtualToPhysical(task->t.yield_data_ptr);
    return tp;
}
