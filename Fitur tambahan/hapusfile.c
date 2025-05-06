#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: hapusfile [nama_file]\n");
        return 1;
    }
    unlink(argv[1]);
    printf("File '%s' terhapus!\n", argv[1]);
    return 0;
}