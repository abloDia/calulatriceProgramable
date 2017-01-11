#ifndef NOMBRE_H
#define NOMBRE_H

class Nombre{

public:
	virtual Nombre* addition(Nombre* nb) const  =0;
	virtual Nombre* multiplication(Nombre* nb) const =0;
	virtual Nombre* division(Nombre* nb) const =0;
	virtual Nombre* soustraction(Nombre* nb) const = 0;

	virtual Nombre* sinus() const = 0;
	virtual Nombre* cosinus() const = 0;
	virtual Nombre* tangente() const = 0;

	virtual Nombre* sinusHyperbolique() const = 0;
	virtual Nombre* cosinusHyperbolique() const = 0;
	virtual Nombre* tangenteHyperbolique() const = 0;
	
	virtual void afficherValeur() const = 0;

	bool estReel() ;
	bool estEntier();
private:

};

#endif
