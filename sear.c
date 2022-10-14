#include<stdio.h>
int search(int arr[],int N,int x){
	int i;
	for(i=0;i<N;i++)
		if(arr[i]==x)
			return i;
	return -1;
}
void main(){
	printf("enter the size of array-\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter value for- %d\n",i);
        scanf("%d",&arr[i]);
    }
	int x;
    printf("enter no. to search-\n");
    scanf("%d",&x);
	int N=sizeof(arr)/sizeof(arr[0]);
	int result=search(arr,N,x);
	(result==-1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d",result);
}
