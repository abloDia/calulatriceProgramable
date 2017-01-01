#ifndef OPERATIONUNAIRE_H
#define OPERATIONUNAIRE_H


#include "Operation.h"
#include"Nombre.h"
class OperationUnaire : public Operation {

public:
	OperationUnaire(TypeOperation type);
	virtual Nombre* appliqueOperation();
	virtual void modifierNombres(Nombre* premierTerme, Nombre* secondTerme) override;
	virtual void modifierNombre(Nombre* uniqueTerme) override;

private:
	 Nombre* d_uniqueTerme;
};

#endif
