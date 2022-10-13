#include<stdio.h>

int main()
{
    int a;
    int b;

printf("Enter first number: ");
scanf("%d",&a);

printf("Enter second number:");
scanf("%d",&b);

a > b? printf("%d is greater than %d\n", a, b) : printf("%d is smaller than %d\n", a, b);

}
