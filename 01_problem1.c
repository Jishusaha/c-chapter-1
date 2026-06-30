#include<stdio.h>
 int main(){
    int l,b,r,p,area,ar;
    printf("Enter the length,breadth & radius:\n");
    scanf("%d%d%d", &l,&b,&r);
    area=l*b;
    ar=3.14*r*r;
    p=2*(l+b);
    printf("The perimeter of the rectangle:%d\n",p);
    printf("The area of rectangle:%d\n",area);
    printf("The area of the circle:%d\n",ar);
    return 0;
 }