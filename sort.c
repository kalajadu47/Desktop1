#include <stdio.h>
int main(){
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter Numbers");
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%d\t",a[j]);
    }printf("\n");
   
    for (int o = 0; o < 5; o++)
    {
        for (int r = o; r < 6; r++)
        {
            if (a[o]>a[r])
        {
            int y = a[o];
            a[o] = a[r];
            a[r] = y;
      

        }

        }
        
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%d\t",a[j]);
    }printf("\n");
    int g;
    printf("Enter Number for which you want closest number to");
        scanf("%d",&g);
        for (int i = 0; i < 6; i++)
        {
            if (a[i]>g)
            {
                printf("The smallest number greater than chossen is %d",a[i]);
                break;
            }
        
            
        }
        printf("\n");
        for (int i = 5; i >= 0 ; i--)
        {
              if (a[i]<g)
            {
                printf("The greatest number smaller than chossen is %d",a[i]);
                break;
            }
          
            
        }
        
        
      
        

}