#include <stdio.h>
    int global_var = 10; 
    int main() { 
        int a, b;
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        int sum = a + b + global_var;
        printf("Sum (with global variable): %d\n", sum);
        return 0;
    }