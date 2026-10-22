/* A fixture with thread-local storage, which elf.library refuses. */
__thread int per_thread;
int get(void) { return per_thread; }
