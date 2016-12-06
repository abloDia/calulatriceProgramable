#ifndef REEL_H
#define REEL_H
#include<array>
#include "Nombre.h"

class Reel : public Nombre{
public:
	Reel(float valeur);
	
	virtual Nombre* addition(Nombre* nb)const override;
	virtual Nombre* multiplication(Nombre* nb) const override;
	virtual Nombre* division(Nombre* nb) const override;
	virtual Nombre* soustraction(Nombre* nb) const override;

	virtual Nombre* sinus() const override;
	virtual Nombre* cosinus() const override;
	virtual Nombre* tangente() const override;

	virtual Nombre* sinusHyperbolique() const override;
	virtual Nombre* cosinusHyperbolique() const override;
	virtual Nombre* tangenteHyperbolique() const override;

	virtual void afficherValeur() const override;
	
	Reel* traduireNombreEnReel(Nombre* monNombre);
	Reel* effectuerOperationBinaire(char signeOperation, Nombre* secondTerme) const;
	Reel* effectuerOperationUnaire(const std::string& nomOperation) const;
	
	float obtenirValeur() const;
	
	
private:
	float d_valeur;
};

#endif


