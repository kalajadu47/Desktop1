#include <stdio.h>
#include <math.h>

int main(){
    double l=log(10000.0);
    double c=ceil(16.2);
    double f=floor(-7.5)*pow(3.0 , 2.0);
    double ff=floor(21.8 * 0.8);
    double s=sqrt(ceil(fabs(-7.4)));
    printf("%lf\n",l);
    printf("%lf\n",c);
    printf("%lf\n",f);
    printf("%lf\n",ff);
    printf("%lf",s);
    return 0;

}