/* A disabled debug print: takes a target, a format and variable arguments and does nothing beyond
   spilling the variable arguments to their home slots. Matched like the variadic stub func_80268274:
   the leftover float test of its compiled-out body makes the compiler fill the return delay slot
   with the last argument spill. */
void func_8041A5A0(void *target, const char *format, ...)
{
    float enabled;

    enabled = 1.0f;
    if (enabled) {
    }
}
