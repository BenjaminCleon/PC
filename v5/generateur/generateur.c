#include <stdio.h>
#include <stdarg.h>

#include "generateur.h" // Implémente l'interface publique
#define INITIAL_VALUE 1
#define INITIAL_STEP  1

static int init_val    = INITIAL_VALUE;
static int current_val = INITIAL_VALUE;
static int step        = INITIAL_STEP ;

void generateur_define_first(int new_first_value)
{
	init_val = new_first_value;
}

void generateur_define_step(int new_step)
{
	step = new_step;
}

void generateur_go_to_beginning(void)
{
	current_val = init_val;	
}

int generateur_get_next(void)
{
	int n = current_val;
	current_val += step;
	return n;
} 
