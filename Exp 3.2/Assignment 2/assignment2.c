#include <stdio.h>
int main() {    
    int product,x;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&x);
    for (int i = 1; i <= 10; i++) {
        product = x*i;
        printf("%d x %d = %d\n",x,i,product);
    }
    return 0;
}