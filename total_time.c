#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter the number of hours:\n");
    scanf("%d",&h);
    printf("Enter the number of minute:\n");
    scanf("%d",&m);
    printf("Enter the number of second:\n");
    scanf("%d",&s);
    printf("The total time in seconds is:\n%d",(s+(h*3600)+(m*60)));
    return 0;
}