#include <stdio.h>

int main(){
    float F , C;
    
    printf("Enter Farenheit: \n");
    scanf("%f" , &F);
    C = ( F - 32 ) * 5/9;
    printf("Celcius: %f \n" , C);
    return 0;
}