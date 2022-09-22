#include "suite.h"
#include "generateur.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   int n = argc > 1 ? atoi(argv[1]) : 0;
   
   generateur_generate(Pas, -4);
   generateur_generate(Premier, n);
   printf("Des suites arithmétiques: \n");
   while(n-- > 0)
   {
   	suite_e_suite(n);
   	putchar('\n');
   }
   
   printf("\n");
   
   return EXIT_SUCCESS;
}
