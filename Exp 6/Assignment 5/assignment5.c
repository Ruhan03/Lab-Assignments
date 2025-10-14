//5.	Develop a function REVERSE A NUMBER. Write a C program that invokes this function to find the reverse of a given NUMBER

#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }
    return reversed;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversed = reverseNumber(number);
    printf("The reverse of %d is %d\n", number, reversed);
    return 0;
}