#include <stdio.h>
int main() {
    int n, left_shift, right_shift;
    printf("Enter an integer: ");
    scanf("%d", &n);

    left_shift = n << 1;  
    right_shift = n >> 1; 

    printf("Left shift of %d by 1 is: %d\n", n, left_shift);
    printf("Right shift of %d by 1 is: %d\n", n, right_shift);

    return 0;
}