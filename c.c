#include <stdio.h>
void main(){
  char op;
  double op1,op2;
  printf("Enter any operator (+, -, *, /):- ");
  scanf("%c",&op);
  printf("Enter two operands:- ");
  scanf("%lf %lf",&op1,&op2);
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
    default:printf("Error! operator is not correct");
  }
}