#include <stdio.h>
#define s -99
int main() {
    int n, i,sum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(i=1;n!=s;sum+=i){
        printf("enter no.-\n");
        scanf("%d",&n);
        printf("sum= %d",sum);
    }
    printf("sum= %d",sum);
    return 0;
}