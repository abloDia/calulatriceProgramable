#include "Entier.h"
#include<cmath>
#include<iostream>

bool caractereValide(char signeOperation)
{
	bool ok = false;
	if(signeOperation == '*' || signeOperation == '/')
	{
		
	}
	return ok;
}

Entier* traduireNombreEnEntier(Nombre* monNombre)
{
	Entier* monEntier = dynamic_cast<Entier*>(monNombre);
	return new Entier(monEntier->obtenirValeur());
}


Entier::Entier(int valeur): d_valeur{ valeur }{}



Entier* Entier::effectuerOperationBinaire(char signeOperation, Nombre* secondTerme) const
{
	if(secondTerme->estEntier())
	{
		Entier* secondTermeEnEntier = traduireNombreEnEntier(secondTerme);
		switch(signeOperation)
		{
			case '+': 
				return new Entier(d_valeur + secondTermeEnEntier->obtenirValeur());
				break;
				
			case '-':
				return new Entier(d_valeur - secondTermeEnEntier->obtenirValeur());
				break;		
				
			case '*':
				return new Entier(d_valeur * secondTermeEnEntier->obtenirValeur());
				break;
				
			case '/':
				return new Entier(d_valeur / secondTermeEnEntier->obtenirValeur());
				break;
		}
	}
	
	

}





Nombre* Entier::addition(Nombre* nb) const{
	Entier* ptEntier = dynamic_cast< Entier*>(nb);
	return new Entier(d_valeur+ptEntier->obtenirValeur());
}

Nombre* Entier::soustraction(Nombre* nb) const{

	Entier* ptEntier = dynamic_cast< Entier*>(nb);
	return new Entier(d_valeur - ptEntier->obtenirValeur());
}


Nombre* Entier::multiplication(Nombre* nb) const
{
	Entier* ptEntier = dynamic_cast< Entier*>(nb);
	return new Entier(d_valeur * ptEntier->obtenirValeur());
}

Nombre* Entier::division(Nombre *nb) const{
	
	Entier* ptEntier = dynamic_cast< Entier*>(nb);
	return new Entier(d_valeur / ptEntier->obtenirValeur());
}

Nombre* Entier::sinus() const
{
	return new Entier(sin(d_valeur));
}
Nombre* Entier::cosinus() const
{
	return new Entier(cos(d_valeur));

}
Nombre* Entier::tangente() const
{
	return new Entier(tan(d_valeur));
}

Nombre* Entier::sinusHyperbolique() const
{
	return new Entier(sinh(d_valeur));

}

Nombre* Entier::cosinusHyperbolique() const
{
	return new Entier(cosh(d_valeur));
}

Nombre* Entier::tangenteHyperbolique() const
{
	return new Entier(tanh(d_valeur));
}

int Entier::obtenirValeur() const {
	return d_valeur;
}

void Entier::afficherValeur() const
{	
	std::cout<<d_valeur;
}

