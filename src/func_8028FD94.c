/** Return the byte address named by an indexed word offset from the base. */
char *func_8028FD94(int *arg0, int arg1) {
    int *entry = arg0 + arg1;
    return (char *)arg0 + entry[1];
}
