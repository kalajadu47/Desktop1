#include <stdio.h>

int main()
{
    double radius, circumference;
    float pi = 3.14;

    printf("\n Enter the radius of circle:");
    scanf("%lf", &radius);

    circumference = 2 * pi* radius;
    printf("Circumference of circle : %lf", circumference);

    return (0);
}
