#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the 3 digit number:\n");
    scanf("%d",&a);
    b=a%10; //1
    c=(a/10)%10; //5
    d=a/100; //3
    e=b*100+c*10+d;
    printf("The reverse of this number is:\n%d",e);
    return 0;
}