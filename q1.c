#include<stdio.h>
void main(){
    printf("enter a no. to print pattern:-\n");
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}