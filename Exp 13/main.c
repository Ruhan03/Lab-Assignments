#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? ((float)(a) / (b)) : 0)

int main() {
    int a=20, b=10;

    printf("Addition: %d\n", ADD(a, b));
    printf("Subtraction: %d\n", SUB(a, b));
    printf("Multiplication: %d\n", MUL(a, b));
    printf("Division: %.2f\n", DIV(a, b));

    return 0;
}
