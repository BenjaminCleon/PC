#include "suite.h"
#include "generateur.h"
#include <stdio.h>

void suite_e_suite(int longueur)
{
	generateur_generate(Debut);
	printf("(");
	while(longueur -- >= 0 )
	{
		printf("%d , ", generateur_generate(Suivant));
	}
	
	printf(")\n");
}
