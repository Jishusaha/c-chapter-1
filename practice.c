#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s,area;
    // Input the sides of the triangle
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);
    // Calculate the semi-perimeter
    s=(a+b+c)/2;
    // Check if the sides form a valid triangle
    if (a+b>c && a+c>b && b+c>a)
    {
        // Calculate the area using the formula
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        // Display the result
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
