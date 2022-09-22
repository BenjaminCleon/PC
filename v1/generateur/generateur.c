#include "generateur.h"
#define INITIAL_VALUE 0 // Instruction pour le pré-processeur ( directive )

int generateur_generate(void)
{
   // val est une v.l de classe statique
   static int val = INITIAL_VALUE;
   return val++;
}
