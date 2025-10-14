#include <stdio.h>
void printVariable() {
   // printf("Trying to access local_var: %d\n", local_var);
}
int main() {
    int local_var = 20; 
    printf("Local variable inside main: %d\n", local_var);
    printVariable();
    return 0;
}