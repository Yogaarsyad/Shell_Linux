#include <stdio.h>

int main() {
    puts(
        "Copyright @ Netlab DTE\n"
        "-Use the shell at your own risk...\n"
        "List of Commands supported:\n"
        ">print {something} : Print something\n"
        ">exit : Exit the shell\n"
        ">help : Show all commands in shell\n"
        ">itungwoi {add|sub|mul|div} num1 num2 : Do some Calculation\n"
        ">buatdong {filename} {content} : Write to a file\n"
        ">bacadong {filename} : Read from a file\n"
        ">rahasiabanget {filename} {content} : Write to a file (encrypted)\n"
        ">pembacapikiran {filename} : Read from a file (encrypted)\n"
    );
    return 0;
}

