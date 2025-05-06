#include <stdio.h>

int main() {
    puts(
        "Copyright @ Tri Yoga Arsyad - 2306161920\n"
        "-Use the shell at your own risk...\n"
        "List of Commands supported:\n"
        "> print {something}        : Print something\n"
        "> exit                     : Exit the shell\n"
        "> help                     : Show all commands\n"
        "> itungwoi {op} num1 num2  : Calculator (add|sub|mul|div)\n"
        "> buatdong {file} {content}: Create file with content\n"
        "> bacadong {file}          : Read file content\n"
        "> rahasiabanget {file} {msg}: Create encrypted file\n"
        "> pembacapikiran {file}    : Read encrypted file\n"
        "> waktushow                : Show current time\n"
        "> infosistem               : Show system information\n"
        "> listfile                 : List directory contents\n"
        "> buatdir {dirname}        : Create new directory\n"
        "> hapusdir {dirname}       : Remove directory\n"
        "> renamefile {old} {new}   : Rename file\n"
        "> carifile {pattern}       : Search files\n"
        "> lihatproses             : List running processes\n"
        "> matikanproses {PID}      : Kill process\n"
        "> hitungsize {file/dir}    : Show size\n"
    );
    return 0;
}