#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter two sides of a triangle B and C: \n");
    double A , B , C;
    double Alpha;
    scanf("%d%d", &B , &C);
    printf("Enter Alpha: \n");
    scanf("%lf" , &Alpha);
    A = sqrt(B * B + C * C - 2 * B * C *(cos(180/Alpha)));
    printf("Side A = %d \n" , A);
    return 0;
}