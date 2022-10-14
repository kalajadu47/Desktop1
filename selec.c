// Selection sort in C
#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size) {
  for(int step=0;step<size-1;step++) {
    int min=step;
    for(int i=step+1;i<size;i++) {
        //change < or > to sort acc.
      if(array[i]<array[min])
        min=i;
    }
    swap(&array[min],&array[step]);
  }
}
void printArray(int array[],int size) {
  for(int i=0;i<size;++i) {
    printf("%d  ",array[i]);
  }
  printf("\n");
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
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(arr, size);
}