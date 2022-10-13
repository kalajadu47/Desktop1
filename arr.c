#include <stdio.h>
int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Numbers");
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t",a[j]);
    }printf("\n");
    for (int p = 4; p >= 0; p--)
    {
        printf("%d\t",a[p]);
    }
    for (int o = 0; o < 4; o++)
    {
        for (int r = o; r < 5; r++)
        {
            if (a[o]>a[r])
        {
            int y = a[o];
            a[o] = a[r];
            a[r] = y;
      

        }

        }
        
    }
      printf("%d",a[4]);
    
    printf("\n");
    for (int q = 0; q < 5; q++)
    {
        for (int f = 2; f < a[q]; f++)
        {
            
            if (a[q]%f==0)
            {
                printf("%d it is not a prime number",a[q]);
                printf("\n");
                break;
            }
            else{
                printf("%d It is a prime number",a[q]);
                printf("\n");
                continue;
        }
        }
        
        
    }
    
    
}