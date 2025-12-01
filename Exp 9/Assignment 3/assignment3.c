//3.	Open a file, read its content line by line, and display each line on the console.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}