#ifndef OPERATION_H
#define OPERATION_H


#include "Enum.h"
#include "Nombre.h"
class Operation{
public:
	Operation(TypeOperation type);
	virtual Nombre* appliqueOperation() =0;
	virtual void modifierNombre(Nombre* uniqueTerme) = 0;
	virtual void modifierNombres(Nombre* premierTerme, Nombre* secondTerme) = 0;

protected:
	TypeOperation d_type;

};

#endif
