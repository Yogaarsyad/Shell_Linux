#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Dekripsi Caesar cipher dengan shift -3
void decrypt(char *text) {
    for (int i = 0; text[i]; i++) {
        // Dekripsi huruf kecil
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + (text[i] - 'a' - 3 + 26) % 26;
        }
        // Dekripsi huruf besar
        else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + (text[i] - 'A' - 3 + 26) % 26;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: pembacapikiran [namafile]\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("File tidak ditemukan");
        return 1;
    }
    char konten[1024];
    fgets(konten, 1024, file);  // Baca seluruh konten file
    decrypt(konten);             // Dekripsi konten
    printf("Rahasianya: %s\n", konten);
    fclose(file);
    return 0;
}