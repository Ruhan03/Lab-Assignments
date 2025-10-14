/*
5.	Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
            Example of Ramanujan number: 1729
           12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
*/

#include <stdio.h>
#include <math.h>
#define LIMIT 10000
int isRamanujan(int num) {
    int count = 0;
    for (int a = 1; a <= cbrt(num); a++) {
        for (int b = a; b <= cbrt(num); b++) {
            if (a * a * a + b * b * b == num) {
                count++;
                if (count > 1) return 1; 
            }
        }
    }
    return 0;
}

int main() {
    printf("Ramanujan numbers up to %d are:\n", LIMIT);
    for (int i = 1; i <= LIMIT; i++) {
        if (isRamanujan(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}