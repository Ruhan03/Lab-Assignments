//2.	Open an existing file and read its content character by character, and then close the file.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("c.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // Prints each character to console
    }

    fclose(fp);
    return 0;
}