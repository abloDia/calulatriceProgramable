#ifndef OPERATIONBINAIRE_H
#define OPERATIONBINAIRE_H

#include "Operation.h"
#include"Nombre.h"

class OperationBinaire :public Operation {

public:
	OperationBinaire( TypeOperation type);
	virtual Nombre* appliqueOperation() ;
	virtual void modifierNombres (Nombre* premierTerme, Nombre* secondTerme) override;
	virtual void modifierNombre(Nombre* uniqueTerme) override;

private:
	 Nombre* d_premierTerme;
	 Nombre* d_secondTerme;
};

#endif
