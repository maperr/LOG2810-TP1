#include <vector>
#include <string>
using namespace std;
class Personne
{
public:
	Personne();
	Personne(string nom);
	void addContact(Personne* contact);
	string getNom();
	int getNbreContact();
	~Personne();


private:
	string nom_;
	vector<Personne*> contacts_;
	int nbreContact_;

};

