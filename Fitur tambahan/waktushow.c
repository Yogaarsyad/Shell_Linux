#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Waktu saat ini: %02d:%02d:%02d\n", 
           tm.tm_hour, tm.tm_min, tm.tm_sec);
    return 0;
}