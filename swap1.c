#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Before swapping:\na=%d b=%d",a,b);
    a=a+b; //a=2 b=3 a+b=5, a=5
    b=a-b; //a=5 b=3 a-b=2, b=2
    a=a-b; //a=5 b=2 a-b=3, a=3
    printf("\nAfter swapping:\na=%d b=%d",a,b);
}