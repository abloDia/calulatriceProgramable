#ifndef OPERATION_H
#define OPERATION_H


#include "Enum.h"
#include "Nombre.h"
class Operation{
public:
	Operation(TypeOperation type);
	virtual Nombre* appliqueOperation() =0;
	virtual void setNombre(Nombre* nombre) = 0;
	virtual void setNombres(Nombre* nombre1, Nombre* nombre2) = 0;

protected:
	TypeOperation d_type;

};

#endif
