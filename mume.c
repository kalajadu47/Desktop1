#include<stdio.h>
int odd(int a){
    return a%2==0;
}
void main(){
    printf("emter a no");
    int a;
    scanf("%d",&a);
    //a=(odd(a)==0)?printf("odd");:printf("even");
    if(odd(a)==0){
        printf("odd");
    }
    else{
        printf("even");
    }
}