// 1.	Write a program to create a new file c.txt and write text into it.

#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("c.txt", "w");  

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    fprintf(fp, "Exp 9.\n");
    fputs("orewa mada mada tsuyoku nareru roronoa zoro ashura bakkei enma!\n", fp);

    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}
