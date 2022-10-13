#include<stdio.h>
void main(){
    int a;
    double f,c;
    printf("enter either 1 for f to C or 2 for C to f:\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1: printf("enter faranheight:-\n");
            scanf("%lf",&f);
            c=((f-32)*5)/9;
            printf("celcius= %lf \n",c);
            break;
    case 2: printf("enter celcius:-\n");
            scanf("%lf",&c);
            f=(c*9/5)+32;
            printf("faren = %lf \n",f);
            break;
    default: printf("wromg selection.... sorry");
    }
}