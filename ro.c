#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first variable:");
    scanf("%d",&a);
    printf("\nEnter the second varible:");
    scanf("%d",&b);
    printf("%d<%d=%d\n",a,b,a<b);
    printf("%d<=%d=%d\n",a,b,a<=b);
    printf("%d>%d=%d\n",a,b,a>b);
    printf("%d>=%d=%d\n",a,b,a>=b);
    printf("%d==%d=%d",a,b,a==b);
    return 0;
}