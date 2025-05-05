#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: buatdong [namafile] [konten]\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "w");  // Buka file untuk ditulis
    if (!file) {
        perror("Gagal membuat file");
        return 1;
    }
    // Tulis konten ke file (argumen ke-2 dan seterusnya)
    for (int i = 2; i < argc; i++) {
        fprintf(file, "%s ", argv[i]);
    }
    fclose(file);
    printf("Berhasil menulis ke %s\n", argv[1]);
    return 0;
}