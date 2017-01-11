
#include"Erreur.h"


Erreur::Erreur(const string& auteur, const string& message) throw() :d_auteur{ auteur }, d_message{ message }
{
}

void Erreur::afficher() const throw()
{
	cout << "[Robot-" << d_auteur << "] : " << d_message << endl;
}
