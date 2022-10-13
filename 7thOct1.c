#include<stdio.h>

int main (){

int k=1;
int i;
int j;

for(i=1;i<=4;i++){
      
      for ( j = 1; j<=i; j++,k++)
      {
        printf ("%d ",k);
      }
      printf("\n");
      

}

    return 0;

}
