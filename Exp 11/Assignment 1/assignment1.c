#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int and_result = n1 & n2;
    int or_result = n1 | n2;
    int not_n1 = ~n1;
    int not_n2 = ~n2;

    printf("Bitwise AND of %d and %d is: %d\n", n1, n2, and_result);
    printf("Bitwise OR of %d and %d is: %d\n", n1, n2, or_result);
    printf("Bitwise NOT of %d is: %d\n", n1, not_n1);
    printf("Bitwise NOT of %d is: %d\n", n2, not_n2);

    return 0;
}