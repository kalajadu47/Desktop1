#include<stdio.h>
void main(){
    int i,s=0,n,f=1;
    printf("enter a new value to run the loop:\n");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        s=s+i;
        f=(i+1)*f;
    }
    printf("sum = %d\n",s);
    printf("fact= %d\n",f);
}