#include<stdio.h>
int main()
{
    float h,m,s;
    printf("Enter the number of seconds:\n");
    scanf("%f",&s);
    h=s/3600;
    m=s/60;
    printf("The total time in hour:%f",h);
    printf("\nThe total time in minute:%f",m);
    printf("\nThe total time in second:%f",s);
    return 0;
}