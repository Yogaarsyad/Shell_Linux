#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: itungwoi [add|sub|mul|div] [angka1] [angka2]\n");
        return 1;
    }
    // Konversi input ke float
    float num1 = atof(argv[2]);
    float num2 = atof(argv[3]);
    
    // Penanganan error pembagian dengan nol
    if (strcmp(argv[1], "div") == 0 && num2 == 0) {
        printf("Error: Pembagian dengan nol!\n");
        return 1;
    }
    
    // Operasi matematika
    if (strcmp(argv[1], "add") == 0) {
        printf("Hasil: %.2f\n", num1 + num2);
    } else if (strcmp(argv[1], "sub") == 0) {
        printf("Hasil: %.2f\n", num1 - num2);
    } else if (strcmp(argv[1], "mul") == 0) {
        printf("Hasil: %.2f\n", num1 * num2);
    } else if (strcmp(argv[1], "div") == 0) {
        printf("Hasil: %.2f\n", num1 / num2);
    } else {
        printf("Operasi tidak valid!\n");
        return 1;
    }
    return 0;
}