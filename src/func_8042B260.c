/* Calls func_8042B284 and then func_8042A994 with 0. */
extern void func_8042B284();
extern void func_8042A994(int);

void func_8042B260(void) {
    func_8042B284();
    func_8042A994(0);
}
