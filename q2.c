#include<stdio.h>
void main(){
    printf("enter a no. to print pattern:-\n");
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}