/* _VirtualToPhysicalTask, drafted from ultralib src/io/sptask.c; this library's bcopy is the
   destination-first copy func_802C2490. */
#include "basetypes.h"

typedef struct {
    u32 type;
    u32 flags;
    u64 *ucode_boot;
    u32 ucode_boot_size;
    u64 *ucode;
    u32 ucode_size;
    u64 *ucode_data;
    u32 ucode_data_size;
    u64 *dram_stack;
    u32 dram_stack_size;
    u64 *output_buff;
    u64 *output_buff_size;
    u64 *data_ptr;
    u32 data_size;
    u64 *yield_data_ptr;
    u32 yield_data_size;
} OSTask_t;

typedef union {
    OSTask_t t;
    long long force_structure_alignment;
} OSTask;

extern OSTask D_8014EA90;
extern void *func_802C2490(void *destination, const void *source, int count);
extern u32 func_802C0CB0(void *addr);

#define _osVirtualToPhysical(ptr)                  \
    if (ptr != 0) {                                \
        ptr = (void *)func_802C0CB0(ptr);          \
    } (void)0

OSTask *func_802BEE80(OSTask *intp)
{
    OSTask *tp;
    OSTask *task = &D_8014EA90;
    tp = task;
    func_802C2490(task, intp, sizeof(OSTask));

    _osVirtualToPhysical(task->t.ucode);
    _osVirtualToPhysical(task->t.ucode_data);
    _osVirtualToPhysical(task->t.dram_stack);
    _osVirtualToPhysical(task->t.output_buff);
    _osVirtualToPhysical(task->t.output_buff_size);
    _osVirtualToPhysical(task->t.data_ptr);
    _osVirtualToPhysical(task->t.yield_data_ptr);
    return tp;
}
