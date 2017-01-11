#ifndef OPERATIONUNAIRE_H
#define OPERATIONUNAIRE_H


#include "Operation.h"
#include"Nombre.h"

class OperationUnaire :public Operation {

public:
	OperationUnaire(TypeOperation type);
	virtual Nombre* appliqueOperation();
	virtual void setNombre(Nombre* nombre) override;
	virtual void setNombres(Nombre* nombre1, Nombre* nombre2) override;

private:
	 Nombre* d_nombre;
};

#endif
