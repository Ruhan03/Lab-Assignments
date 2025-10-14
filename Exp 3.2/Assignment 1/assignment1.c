#include<stdio.h>
int main()
{
    int n,i,positive=0,negative=0,zero=0;
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int num;
        printf("Enter number %d: ",i+1);
        scanf("%d",&num);
        if(num>0)
            positive++;
        else if(num<0)
            negative++;
        else
            zero++;
    }
    printf("Count of Positive numbers: %d\n",positive);
    printf("Count of Negative numbers: %d\n",negative);
    printf("Count of Zeroes: %d\n",zero);
    return 0;
}