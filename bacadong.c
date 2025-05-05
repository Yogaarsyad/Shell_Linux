#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: bacadong [namafile]\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");  // Buka file untuk dibaca
    if (!file) {
        perror("File tidak ditemukan");
        return 1;
    }
    char c;
    // Baca dan tampilkan isi file per karakter
    while ((c = fgetc(file)) != EOF) {  // Perbaiki kondisi loop
        putchar(c);
    }
    fclose(file);
    return 0;
}