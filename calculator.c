#include "math_operations_h/operations.h"
#include <stdio.h>


enum OperationsEnum {
   SOMA,

   MAX_OPERATIONS

};


int main (void){
   enum OperationsEnum eSelect;
   int iNumber1;
   int iNumber2;
   while (1)
   {
      printf("Selecione uma Opção: \n 0 - Somar 2 Numeros \n %d - Sair\n", MAX_OPERATIONS);
      scanf_s("%d", &eSelect);
      switch (eSelect)
      {
      case SOMA:

         printf("Digite Numero 1:\n");
         scanf_s("%d", &iNumber1);
         printf("Digite Numero 2:\n");
         scanf_s("%d", &iNumber2);
         printf("Soma igual: %d \n", OPR_iSoma(iNumber1, iNumber2));
         break;
      case MAX_OPERATIONS:
      default:
         return 1;
      }

   }
   return;
}