#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    FILE* f;
    char c;
    f=fopen("data.txt","r");
    if(NULL==f){
        printf("bruh nothing..");
        f=fopen("data.txt","w+");
        fprintf(f, "%s %s %s %d", "We", "are", "in", 2012);
        do{
            c=fgetc(f);
            printf("%c",c);
        }while (c!=EOF);
        fclose(f);
    }else
    {
        do{
            c=fgetc(f);
            printf("%c",c);
        }while (c!=EOF);
        fclose(f);
    }
    
}