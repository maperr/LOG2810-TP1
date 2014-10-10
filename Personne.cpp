#include "Personne.h"

Personne::Personne()
{
	nom_ = "";
	nbreContact_ = 0;
}
Personne::Personne(string nom)
{
	nom_ = nom;
	nbreContact_ = 0;
}

void Personne::addContact(Personne* contact)
{
	contacts_.push_back(contact);
	nbreContact_++;
}
int Personne::getNbreContact()
{
	return contacts_.size();
}
Personne::~Personne()
{
}