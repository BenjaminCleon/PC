#ifndef GENERATEUR_H
#define GENERATEUR_H

enum message
{
	Debut,
	Suivant,
	Pas,
	Premier
};

typedef enum message message;

extern int generateur_generate(message, ...);

#endif
