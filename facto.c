#include<stdio.h>
void main(){
    int i,f=1,n;
    printf("enter a new value to run the loop:\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
       f*=i;
    }
    printf("fact = %d",f);
}
