#include "operations.h"

#define TRUE   1
#define FALSE  0

OPR_iSoma(int iNum1, int iNum2, int iNum3){
   return iNum1 + iNum2 + iNum3;
}



int OPR_iProduto(int iNum1, int iNum2){
   return iNum1 * iNum2;
}

long OPR_iPotencia(long lNum1, long lExp){
   long lAux;
   long lMult;
   lAux = 1;
   for(lMult = 1; lMult <= lExp; lMult++){
      lAux = lNum1 * lAux;
   }
   return lAux;
}

extern long OPR_lFatorial(long lNumber){
   long lAux;
   long lIndex;
   lAux = 1;
   for(lIndex = 1; lIndex <= lNumber; lIndex++){
      lAux = lIndex * lAux;
   }

   return lAux;
}

extern int OPR_iModulo(int iNumber){

   if(iNumber < 0){
      return (iNumber * -1);
   }

   return iNumber;
}

extern int OPR_iIsOdd(int iNumber){

   if(iNumber%2 == 0){
      return FALSE;
   }

   return TRUE;
}

extern float OPR_fDiv(float fNumerador, float fDenominador){
   return fNumerador / fDenominador;
}


extern long OPR_l10Exp(int iExp){
   long lAux;
   int iMult;
   lAux = 1;
   for (iMult = 1; iMult <= iExp; iMult++) {
      lAux = 10 * lAux;
   }
   return lAux;
}


extern int OPR_iCube(int iNumber){
   return iNumber * iNumber * iNumber;
}

extern int OPR_i2x(int iNumber){
   
   return 2 * iNumber;
}


extern int OPR_iSumArray(int *piArray, int iLenght){
   int iIndex;
   int iAux = 0;
   for(iIndex = 0; iIndex < iLenght; iIndex++){
      iAux = iAux + piArray[iIndex];
   }
   
   return iAux;
}

extern float OPR_iInvert(float fNumber){
   return 1 / fNumber;
}