//prgrm to count oddd and even ele in array
#include<stdio.h>
void main(){
    printf("enter the size of array-\n");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter value for- %d\n",i);
        scanf("%d",&a[i]);
    }
    int flag=0,o=0;
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            flag++;
        }
        else{
            o++;
        }
    }
    printf("even ele count= %d\n",flag);
    printf("odd no. count = %d\n",o);
}