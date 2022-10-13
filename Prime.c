#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    printf("Enter First number -");
    scanf("%d",&a);
    printf("Enter Last Number -");
    scanf("%d",&b);
    for (int i = a; i <= b; i++)
    {
        int f =1;
        for (int j = 2; j < i; j++)
        {
            if (i%j ==0)
            {
                f=0;
                break;
            }
            
        }
        if (f==1)
        {
            printf("%d\n",i);
        }
        
        
    }
    
}