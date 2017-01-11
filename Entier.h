#ifndef ENTIER_H
#define ENTIER_H
#include<string>

#include "Nombre.h"

class Entier :public Nombre  {
public:
	Entier(int valeur);
	int obtenirValeur() const;
	virtual Nombre* addition(Nombre* nb) const override;
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
	
	Entier* effectuerOperationBinaire(char signeOperation, Nombre* secondTerme) const;
	Entier* effectuerOperationUnaire(const std::string& nomOperation) const;
	



private:
	int d_valeur;
};

#endif