#include<stdio.h>
int main()
    {
        int a,b,c;
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);
        printf("Before swapping:\na=%d b=%d",a,b);
        c=a;
        a=b;
        b=c;
        printf("\nAfter swapping:\na=%d b=%d",a,b);
        return 0;
    }