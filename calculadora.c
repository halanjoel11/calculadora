#include <stdio.h>
//----------------------------------------------------------------------------------------------------
void suma(float num1 , float num2){
    float sum;
  sum = num1+num2;
  printf("El resultado es: %.2f\n",sum);
}
//----------------------------------------------------------------------------------------------------
void resta(float num1 , float num2){
    float res;
  res = num1-num2;
  printf("El resultado es: %.2f\n",res);
}
//----------------------------------------------------------------------------------------------------
void multi(float num1 , float num2){
    float mul;
  mul = num1*num2;
  printf("El resultado es: %.2f\n",mul);
}
//----------------------------------------------------------------------------------------------------
void divi(float num1 , float num2){
    float div;
  div = num1/num2;
  printf("El resultado es: %.2f\n",div);
}
//----------------------------------------------------------------------------------------------------
void menu(){
  int num1, num2, op;
  printf("Ingrese num1: ");
  scanf("%d", &num1);
  printf("Ingrese num2: ");
  scanf("%d", &num2);
  printf("Elija la operacion que desea\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n");
  scanf("%d", &op);
  
    switch(op) {
      case 1:
           suma(num1 , num2);
        break;
      case 2:
           resta(num1 , num2);
        break;
      case 3:
           multi(num1, num2);
        break;
      case 4:
           divi(num1, num2);
        break;
    }
}
//----------------------------------------------------------------------------------------------------
int main() {
  menu();
  return 0;
}