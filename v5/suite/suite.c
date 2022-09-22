#include "suite.h"
#include "generateur.h"
#include <stdio.h>

void suite_e_suite(int longueur)
{
	generateur_go_to_beginning();
	printf("(");
	while(longueur -- >= 0 )
	{
		printf("%d , ", generateur_get_next());
	}
	
	printf(")\n");
}
