#include <stdio.h>
void main(){
  char op;
  double op1,op2;
  printf("Enter any operator (+, -, *, /,mod):- ");
  scanf("%c",&op);
  printf("Enter two operands:- ");
  scanf("%lf %lf",&op1,&op2);
  int a=(int)op1,b=(int)op2;
  switch(op){
    case '+':
      printf("%.1lf + %.1lf = %.1lf",op1,op2,op1+op2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf",op1,op2,op1-op2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf",op1,op2,op1*op2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf",op1,op2,op1/op2);
      break;
    case '%':
      printf("%d mod %d = %d",a,b,a%b);
      break;
    default:printf("Error");
  }
}