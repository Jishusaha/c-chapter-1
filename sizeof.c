#include<stdio.h>
int main()
{
    int a=30,r1,r2,r3,r4;
    float b=4.6;
    double c=74.35;
    char ch='e';
    r1=sizeof(a);
    r2=sizeof(b);
    r3=sizeof(c);
    r4=sizeof(ch);
    printf("%d bytes\n",r1);
    printf("%d bytes\n",r2);
    printf("%d bytes\n",r3);
    printf("%d bytes\n",r4);
    return 0;

}