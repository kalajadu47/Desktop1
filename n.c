#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct s{
    int reg;
    int roll;
    char name[100];
    float mk;
};
void main(){
    FILE *fp=fopen("t.txt","r");
    FILE *ft=fopen("o.txt","w+");
    if(fp == NULL) {
      perror("Error opening file");}
    char ch;
    int  c=0,n=0;
    for(ch = fgetc(fp); ch != EOF;ch=fgetc(fp)){
        if(ch=='\n')
            c++;
    }
    struct s s1[c];
    int i;
    while((ch=fgetc(fp))!=EOF){
        i=0;
        fscanf(fp,"%d %d %s %lf",&s1[i].reg,&s1[i].roll,&s1[i].name,&s1[i].mk);
    }
    int j;
    struct s t;
    for (i=0; i<c-1; i++){
    for (j=i+1; j<c; j++){
      if (s1[i].roll > s1[j].roll){
         t=s1[i];
         s1[i] = s1[j];
         s1[j] = t;
      }
   }
   for(int k=0;i<c;i++){
        fprintf(ft,"%d %d %d %lf\n",&s1[i].reg,&s1[i].roll,&s1[i].name,&s1[i].mk);
   }
}

}
