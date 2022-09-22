#include "suite.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   int n = argc > 1 ? atoi(argv[1]) : 0;
   char *ns;
   
   printf("des suites de symbole(s): \n");
   while(n--)suite_e_suite(n);
   
   printf("\n");
   
   return EXIT_SUCCESS;
}
