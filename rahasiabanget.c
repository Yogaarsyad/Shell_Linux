#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enkripsi Caesar cipher dengan shift +3
void encrypt(char *text) {
    for (int i = 0; text[i]; i++) {
        // Enkripsi huruf kecil
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + (text[i] - 'a' + 3) % 26;
        }
        // Enkripsi huruf besar
        else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + (text[i] - 'A' + 3) % 26;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: rahasiabanget [namafile] [pesan]\n");
        return 1;
    }
    // Gabungkan semua argumen menjadi satu string
    char konten[1024] = "";
    for (int i = 2; i < argc; i++) {
        strcat(konten, argv[i]);
        strcat(konten, " ");
    }
    encrypt(konten);  // Enkripsi konten
    
    FILE *file = fopen(argv[1], "w");
    if (!file) {
        perror("Gagal membuat file");
        return 1;
    }
    fprintf(file, "%s", konten);
    fclose(file);
    printf("Encrypted content written to %s\n", argv[1]);
    return 0;
}