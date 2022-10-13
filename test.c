#include<stdio.h>
#include<math.h>
#define PI 3.14
void areac(double);
int main(){
    double r;
    scanf("Enter Radius %lf ", &r);
    areac(r);
    return 0;
}
void areac(double r){
    double area;
    area = PI*r*r;
    printf("Area of circle %lf", area);
}