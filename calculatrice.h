#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include "pile.h"
#include "OperationUnaire.h"
#include "OperationBinaire.h"

class Calculatrice {

public:
	static Calculatrice& obtenirInstance();
	static void libererInstance();
	
	bool appliquerOperationSurPile( Operation& p);

private:
	Calculatrice();
	static Calculatrice* calculatriceUnique;
};

#endif
