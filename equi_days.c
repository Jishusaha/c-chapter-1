#include<stdio.h>
int main()
{
    int d,m,d1,d2,y;
    printf("Enter the total number of days:\n");
    scanf("%d",&d);
    y=d/365;
    d1=d%365;
    m=d1/30;
    d2=d1%30;
    printf("Equivalent year:%d\n",y);
    printf("Equivalent month:%d\n",m);
    printf("Equivalent days:%d\n",d2);
}