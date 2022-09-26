#include "math_operations_h/operations.h"
#include <stdio.h>


enum OperationsEnum {
   SOMA,
   PRODUTO,
   EXP,
   FATORIAL,
   MODULO,
   INVERT,

   MAX_OPERATIONS

};


int main (void){
   enum OperationsEnum eSelect;
   int iNumber1;
   int iNumber2;
   int iNumber3;
   while (1)
   {
      printf("Selecione uma Operacao: \n 0 - Somar 3 Numeros \n 1 - Produto \n 2 - Exponencial \n 3 - Fatorial \n 4 - Modulo \n 5 - Invert \n %d - Sair\n", MAX_OPERATIONS);
      scanf_s("%d", &eSelect);
      switch (eSelect)
      {
      case SOMA:

         printf("Digite Numero 1:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Numero 2:\n");
         scanf_s("%d", &iNumber2);
         printf("Digite Numero 3:\n");
         scanf_s("%d", &iNumber3);
         printf("Soma igual: %d \n", OPR_iSoma(iNumber1, iNumber2, iNumber3));
         break;
      case PRODUTO:

         printf("Digite Numero 1:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Numero 2:\n");
         scanf_s("%d", &iNumber2);
         printf("Produto igual: %d \n", OPR_iProduto(iNumber1, iNumber2));
         break;
      case EXP:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Expoente:\n");
         scanf_s("%d", &iNumber2);
         printf("Exponencial igual: %d \n", OPR_iPotencia(iNumber1, iNumber2));
         break;
      case FATORIAL:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Fatorial igual: %d \n", OPR_lFatorial(iNumber1));
         break;
      case MODULO:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Modulo igual: %d \n", OPR_iModulo(iNumber1));
         break;
      case INVERT:
         printf("Digite Numero:\n");
         scanf_s("%d", &iNumber1);
         printf("Invert igual: %f \n", OPR_iInvert((float)iNumber1));
         break;
      case MAX_OPERATIONS:
      default:
         return 1;
      }

   }
   return;
}