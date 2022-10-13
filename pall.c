#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int count = 0;
    int c;
    int r=0;
    printf("Enter a random Number -");
    scanf("%d",&a);
    int n = a;
    while(a>0){
        c = a%10;
        r = r*10+c;
        a = a/10;
    }
    if (n == r)
        printf("%d is a palindrome.",n);
    else
        printf("%d is not a palindrome.",n);

    return 0;
}
    
    
        
    
    
