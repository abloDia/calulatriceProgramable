#ifndef OPERATIONBINAIRE_H
#define OPERATIONBINAIRE_H

#include "Operation.h"
#include"Nombre.h"

class OperationBinaire :public Operation {

public:
	OperationBinaire( TypeOperation type);
	virtual Nombre* appliqueOperation() ;
	virtual void setNombres(Nombre* nombre1, Nombre* nombre2) override;
	virtual void setNombre(Nombre* nombre1) override;

private:
	 Nombre* d_nombre1;
	 Nombre* d_nombre2;
};

#endif
