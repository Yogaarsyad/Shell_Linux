#include <stdio.h>
#include <sys/utsname.h>

int main() {
    struct utsname sys;
    uname(&sys);
    printf("Sistem Operasi: %s\n", sys.sysname);
    printf("Versi Kernel: %s\n", sys.release);
    return 0;
}