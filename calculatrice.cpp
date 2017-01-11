	#include "Calculatrice.h"
	
	
	Calculatrice::Calculatrice() 
	{}
	
	Calculatrice* Calculatrice::calculatriceUnique = 0;
	
	Calculatrice& Calculatrice::obtenirInstance()
	{
		if(calculatriceUnique == 0)
		{
			calculatriceUnique = new Calculatrice;
		}
		return *calculatriceUnique;
	}
	
	void Calculatrice::libererInstance()
	{
		if(calculatriceUnique != 0)
		{
			delete calculatriceUnique;
			calculatriceUnique = 0;
		}	
	}
	
	bool Calculatrice::appliquerOperationSurPile( Operation& operation)
	{
		pile* maPile;
		maPile->obtenirInstance();
		
		OperationBinaire* op = dynamic_cast<OperationBinaire*>(&operation);
		
		if (op == 0)
		{ 
			maPile->enleveDernierNombre();
			operation.setNombre(maPile->obtenirX());
			maPile->ajouterNombre(operation.appliqueOperation());
		}
		else
		{
			maPile->enleveDeuxDerniersNombres();
			operation.setNombres(maPile->obtenirX(),maPile->obtenirY());
			maPile->ajouterNombre(operation.appliqueOperation());
		}
		
		return true;
		
	}
	

