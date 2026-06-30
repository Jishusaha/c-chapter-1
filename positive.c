#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==0)
    printf("It is zero");
    else if(num>0)
    printf("It is positive number");
    else
    printf("It is negative number");
    return 0;
}