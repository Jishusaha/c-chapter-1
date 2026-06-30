#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter 1st number:");
    scanf("%f",&a);
    printf("\nEnter 2nd number:");
    scanf("%f",&b);
    printf("\nEnter 3rd number:");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("Average of three number:%f",avg);
    return 0;
}