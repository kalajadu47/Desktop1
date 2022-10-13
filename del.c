#include <stdio.h>
int main(){
    int  a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Numbers");
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t",a[j]);
    }printf("\n");
    int p ;
    printf("enter the position to be deleted");
    scanf("%d",&p);
    if (p >= 5)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else {
        for (int i = p-1; i < 5; i++)
        {
            a[i]= a[i+1];
        }
        
    } 
     for (int j = 0; j < 4; j++)
    {
        printf("%d\t",a[j]);
    }printf("\n");

     int z ;
    printf("enter the position to be inserted");
    scanf("%d",&z);
    int y ;
    printf("enter What to enter");
    scanf("%d",&y);
        for (int i = 5; i >= z; i--)
        {
            a[i]= a[i-1];
        }
    a[z-1]=y;
     for (int j = 0; j < 5; j++)
    {
        printf("%d\t%d\n",j,a[j]);
    }printf("\n");
    return 0;  
}  
    
    
