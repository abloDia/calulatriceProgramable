
#include"Erreur.h"


Erreur::Erreur(const string& message) throw() :d_message{ message }
{
}

void Erreur::afficher() const throw()
{
	cout << "Erreur :" << d_message << endl;
}


