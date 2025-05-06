#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *d = opendir(".");
    struct dirent *dir;
    
    printf("Isi direktori:\n");
    while ((dir = readdir(d)) != NULL) {
        printf("- %s\n", dir->d_name);
    }
    closedir(d);
    return 0;
}