#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <sys/wait.h>

char *takeInput();
void parseInput(char *input);
void landingPage();

// Fungsi utama yang menjalankan shell
int main() {
    landingPage();
    while (1) {  // Loop infinite untuk menerima input terus menerus
        char *input = takeInput();
        parseInput(input);
        free(input);
    }
    return 0;
}

void landingPage() {
    puts(
        " _____ _____  ___  ______________ _   _ _         _____ \n"
        "|  _  /  ___| |  \\/  |  _  |  _  \\ | | | |       |  _  |\n"
        "| | | \\ `--.  | .  . | | | | | | | | | | |       | |_| |\n"
        "| | | |`--. \\ | |\\/| | | | | | | | | | | |       \\____ |\n"
        "\\ \\_/ /\\__/ / | |  | \\ \\_/ / |/ /| |_| | |____  .___/ /\n"
        " \\___/\\____/  \\_|  |_/\\___/|___/  \\___/\\_____/  \\____/ \n"
        "\n"
        "Copyright @ Netlab DTE\n"
        "Type \"help\" to see the list of commands\n"
        "Type \"exit\" to quit the shell\n");
}

char *takeInput() {
    char *input;
    do {
        input = readline("netlab>> ");
    } while (input && strlen(input) == 0);
    return input;
}

// Fungsi untuk memproses input pengguna.
void parseInput(char *input) {
    if (strcmp(input, "exit") == 0) exit(0);
    if (!input || strlen(input) == 0) return;

    add_history(input);
    char *token = strtok(input, " ");
    if (!token) return;

   
    pid_t pid = fork();  // Membuat proses child
    if (pid == 0) {      // Proses child.
        char *args[256] = {NULL};
        int i = 0;

        if (strcmp(token, "help") == 0) {
            execl("./printHelp", "printHelp", NULL);
        } else if (strcmp(token, "print") == 0) {
            args[i++] = "./print";
        } else if (strcmp(token, "buatdong") == 0) {
            args[i++] = "./buatdong";
        } else if (strcmp(token, "bacadong") == 0) {
            args[i++] = "./bacadong";
        } else if (strcmp(token, "rahasiabanget") == 0) {
            args[i++] = "./rahasiabanget";
        } else if (strcmp(token, "pembacapikiran") == 0) {
            args[i++] = "./pembacapikiran";
        } else if (strcmp(token, "itungwoi") == 0) {
            args[i++] = "./itungwoi";
        } else {
            printf("Command not found: %s\n", token);
            exit(1);
        }

        while ((args[i++] = strtok(NULL, " ")));
        execvp(args[0], args);  // Ganti image proses dengan program eksternal.
        perror("exec failed");
        exit(1);
    } else {            // Proses parent.
        wait(NULL);     // Tunggu child selesai.
    }
}
