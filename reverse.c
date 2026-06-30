#include<stdio.h>
int main()
{
    int p,q,r,a;
    printf("Enter a two digit number:\n");
    scanf("%d",&p);
    q=p/10; //2
    r=p%10; //1
    a=r*10+q;
    printf("The reverse of this number:\n%d",a);
    return 0;
}