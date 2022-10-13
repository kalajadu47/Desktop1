#include<stdio.h>
void main(){
    printf("enter a no. till sum -\n");
    int n,i;
    long long unsigned int s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("sum= %llu ",s);
}