//2.	WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight in kgs: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You have Normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } else {
        printf("You are Obese.\n");
    }
    return 0;
}