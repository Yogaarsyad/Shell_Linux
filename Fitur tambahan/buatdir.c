#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: buatdir [nama_folder]\n");
        return 1;
    }
    mkdir(argv[1], 0777);
    printf("Direktori '%s' berhasil dibuat!\n", argv[1]);
    return 0;
}