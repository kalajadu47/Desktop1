#include<stdio.h>
int main()
{
  int i,j,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=0;i<=a;i++)
  {
    printf("\n");
    for(j=0;j<=i;j++)
    {
      printf("%d ",j);
    }
  }
   printf("\n");
    for(i=a-1;i>=0;i--)
    {
    for(j=0;j<=i;j++)
    {
      printf("%d ",j);
    }
     printf("\n");
  }
  return 0;
}