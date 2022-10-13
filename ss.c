#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int b;
    char po ;
    int ans  ;
    printf("enter a random number");
    scanf("%d", &a);
    printf("enter another random number");
    scanf("%d", &b);
    printf("Choose Operation");
    scanf("\n %c", &po);
    switch (po)
    {
    case '+':
        ans = a+b;
        printf("The result of the operation is : %d",ans);
        break;
    case '-':
        ans = a-b;
        printf("The result of the operation is : %d",ans);
        break; 
    case '*':
        ans = a*b;
        printf("The result of the operation is : %d",ans);
        break;
    case '/':
        ans = a/b;
        printf("The result of the operation is : %d",ans);
        break;
    
    default:
        printf("Error");
        
    }
    
   return 0 ;
    
}