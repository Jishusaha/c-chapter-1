#include<stdio.h>
int main()
{
    int a,b,c,t,m;
    printf("Enter the 1st number:");
    scanf("%d",&a); //a=3
    printf("\nEnter the 2nd number:");
    scanf("%d",&b); //b=4
    printf("\nEnter the 3rd number:");
    scanf("%d",&c); //c=5
    t=(a>b)?a:b; //t=4
    m=(t>c)?t:c; //m=5
    printf("The maximum value between %d,%d and %d is:\t%d",a,b,c,m);
    return 0;
}