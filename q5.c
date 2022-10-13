#include <stdio.h>
void main() {
  int i, n;
  int t1=0,t2=1;
  int nt=t1+t2;
  printf("Enter no. of terms- \n");
  scanf("%d",&n);
  printf("Fibonacci Series: %d %d ",t1,t2);
  for (i=3;i<=n;++i) {
    printf("%d ",nt);
    t1=t2;
    t2=nt;
    nt=t1+t2;
  }
}