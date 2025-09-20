//1.WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>
    int main() {
        int a, b, c;
        printf("Enter the sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && b + c > a && c + a > b) {
            if (a == b && b == c) {
                printf("The triangle is Equilateral.\n");
            } else if (a == b || b == c || c == a) {
                printf("The triangle is Isosceles.\n");
            } else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
                printf("The triangle is Right-angled.\n");
            } else {
                printf("The triangle is Scalene.\n");
            }
        } else {
            printf("The triangle is not valid.\n");
        }
        return 0;
    }