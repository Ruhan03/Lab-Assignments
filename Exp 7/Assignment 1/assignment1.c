/*1.	Write a C program that uses functions to perform the following operations: 
a.	Reading a complex number. 
b.	Writing a complex number. 
c.	Addition and subtraction of two complex numbers 
Note: represent complex number using a structure. 
*/

#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
void readComplex(struct Complex *c) {
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c->real, &c->imag);
}
void writeComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
int main() {
    struct Complex c1, c2, sum, difference;

    printf("Reading first complex number:\n");
    readComplex(&c1);
    printf("Reading second complex number:\n");
    readComplex(&c2);

    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);

    printf("First ");
    writeComplex(c1);
    printf("Second ");
    writeComplex(c2);
    printf("Sum ");
    writeComplex(sum);
    printf("Difference ");
    writeComplex(difference);

    return 0;
}