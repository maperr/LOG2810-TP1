#include "Personne.h"
#include <string>
using namespace std;
class Reseau
{
public:
	Reseau(int taille, string nom);
	string getNom();

private:
	bool** matriceIncidence_;
	int taille_;
	Personne* listPersonnes_;
	string nom_;
};