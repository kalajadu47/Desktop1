#include <stdio.h>

int main()
{
int x,y,z,sum=0;
   printf("Enter the number");
   scanf("%d",&x);
   while(x>0)
   {    
   y=x%10;
   z=y*y*y;
   sum=sum+z;
   x=x/10;
   }
   printf("sum is %d",sum);
   return 0;
}