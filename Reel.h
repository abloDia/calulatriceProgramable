#ifndef REEL_H
#define REEL_H

#include "Nombre.h"

class Reel :public Nombre{
public:
	Reel(float valeur);
	virtual Nombre* addition(Nombre* nb) const ;
	virtual Nombre* multiplication(Nombre* nb) const;
	virtual Nombre* division(Nombre* nb) const;
	virtual Nombre* soustraction(Nombre* nb) const ;

	virtual Nombre* sinus() const override;
	virtual Nombre* cosinus() const override;
	virtual Nombre* tangente() const override;

	virtual Nombre* sinusHyperbolique() const override;
	virtual Nombre* cosinusHyperbolique() const override;
	virtual Nombre* tangenteHyperbolique() const override;

	virtual void afficherValeur() const override;
	float obtenirValeur() const;
private:
	float d_valeur;
};

#endif



