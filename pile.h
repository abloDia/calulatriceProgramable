#ifndef PILE_H
#define PILE_H
#include <iostream>
#include <vector>
#include "Nombre.h"

class pile {
public:
   	 
	static pile& obtenirInstance();
	static void libererInstance();
	Nombre* dernierNombre() const;
	void ajouterNombre(Nombre* x);
	void viderCorrectementPile();
	bool estCorrectementVide();
	bool estTotalementVide();
	void enleveDernierNombre(Nombre* x);
	void enleveDeuxDerniersNombres(Nombre* x, Nombre* y);
	int taillePile() const;
	void afficher() const;
	
private:
    pile();
	~pile() = default;
	pile(const pile&) = delete;
	pile& operator=(const pile&) = delete;
	std::vector<Nombre*> d_nombres;
	static pile* pileUnique;
};

#endif
