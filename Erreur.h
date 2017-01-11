
#ifndef ERREUR_H
#define ERREUR_H

#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;


class Erreur
{
public:
	Erreur() = delete;
	Erreur(const string& auteur, const string& message) throw();
	void afficher() const throw();

private:
	string d_auteur;
	string d_message;
};
#endif
