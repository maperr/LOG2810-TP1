#include "Reseau.h"

Reseau::Reseau(int taille, string nomReseau)
{
	nom_ = nomReseau;
	matriceIncidence_ = new bool*[taille];
	for(int i = 0 ; i < taille ; i++)
	{
		matriceIncidence_[i] = new bool[taille];
	}

}