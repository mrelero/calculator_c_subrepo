#include "operations.h"


OPR_iSoma(int iNum1, int iNum2){
   return iNum1 + iNum2;
}



int OPR_iProduto(int iNum1, int iNum2){
   return iNum1 * iNum2;
}

int OPR_iPotencia(int iNum1, int iExp){
   int iAux;
   int iMult;
   iAux = 1;
   for(iMult = 1; iMult <= iExp; iMult++){
      iAux = iNum1 * iAux;
   }
   return iAux;
}