#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: print [pesan]\n");
        return 1;
    }
    printf("ini diprint: ");
    // Gabungkan semua argumen setelah command
    for (int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}