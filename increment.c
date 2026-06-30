#include<stdio.h>
int main()
{
    int i,x,pre,post,prde,pode;
    printf("Enter the number as i=");
    scanf("%d",&i);
    printf("Enter the number as x=");
    scanf("%d",&x);
    post=i++;
    pre=++i;
    pode=x--;
    prde=--x;
    printf("The number after post increment=%d\n",post);
    printf("The number after pre increment=%d\n",pre);
    printf("The number after post decrement=%d\n",pode);
    printf("The number after pre decrement=%d\n",prde);
    return 0;
}