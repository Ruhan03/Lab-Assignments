#include<stdio.h>
 int main(){
    int l,b,area,perimeter;

    printf("Enter Lenght and Breath");
    scanf("%d %d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Perimeter of Rectangle is %d\n",perimeter);
    printf("Area of Rectangle is %d",area); 
    return 0;
 }