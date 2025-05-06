#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *dir = opendir("/proc");
    struct dirent *entry;
    
    printf("%-10s %s\n", "PID", "Nama Proses");
    while ((entry = readdir(dir)) != NULL) {
        if (atoi(entry->d_name) != 0) {
            printf("%-10s ", entry->d_name);
            // Baca nama proses dari /proc/[PID]/comm
        }
    }
    closedir(dir);
    return 0;
}