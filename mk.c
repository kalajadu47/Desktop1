//prgrm to calc sum & avg of user def array
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
    int s;
    for(int j=0;j<n;j++){
        s+=a[j];
    }
    float avg=s*1.0/n;
    printf("sum = %d \nAverage= %f\n",s,avg);
} 