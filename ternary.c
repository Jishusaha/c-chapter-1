#include<stdio.h>
int main()
{
    int a,b,m;
    printf("Enter the 1st number:");
    scanf("%d",&a); //a=6
    printf("Enter the 2nd number:");
    scanf("%d",&b); //b=7
    m=a>b?a:b;
    printf("the maximum value between %d and %d is:%d",a,b,m);
    return 0;
}