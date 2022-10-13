#include <stdio.h>

int main()
{
int x,y,z,temp,sum=0;
   printf("Enter the number");
   scanf("%d",&x);
   temp=x;
   while(x>0)
   {    
   y=x%10;
   z=y*y*y;
   sum=sum+z;
   x=x/10;
   }
   if(temp==sum)
   {
    printf("IS AMSTRONG NUMBER");
   }
   else{
    printf("not amstrong");
   }
   return 0; 
}