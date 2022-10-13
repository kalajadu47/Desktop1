#include <stdio.h>
void main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an no.- ");
    scanf("%d", &n);
    if (n < 0){
        printf("wrong input");
    }
    else {
        for(i=1;i<=n;++i){
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}
