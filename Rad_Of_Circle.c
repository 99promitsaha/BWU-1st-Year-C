/* This one is Radius of Circle */

#include <stdio.h>
#include <math.h>
int main()
{
    float r;
    printf("Enter the radius of the circle ");

    scanf("%f", &r);
    
    float area = 3.14*r*r;

    printf("%s%f", "The area of the triangle is ", area);
    return (0);
}