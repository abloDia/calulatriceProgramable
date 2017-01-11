#include "Reel.h"
#include "Entier.h"
#include "Erreur.h"
#include<iostream>


Reel::Reel(float valeur) :d_valeur{ valeur }{}



Nombre* Reel::addition(Nombre* nb)const  {

	if (nb->estEntier())
	{
		Entier* ptEntier = dynamic_cast< Entier*>(nb);
		return new Reel(d_valeur+ptEntier->obtenirValeur());

	}

	else{

		Reel* ptReel = dynamic_cast< Reel*>(nb);
		return new Reel(d_valeur + ptReel->obtenirValeur());
	}
}
Nombre* Reel::soustraction(Nombre* nb) const 
{
		if (nb->estEntier())
	{
		Entier* ptEntier = dynamic_cast< Entier*>(nb);
		return new Reel(d_valeur-ptEntier->obtenirValeur());

	}

	else{

		Reel* ptReel = dynamic_cast< Reel*>(nb);
		return new Reel(d_valeur - ptReel->obtenirValeur());
	}
}

Nombre* Reel::multiplication(Nombre* nb) const{
	if(nb->estEntier())
	{
		Entier* ptEntier = dynamic_cast< Entier*>(nb);
		return new Reel(d_valeur * ptEntier->obtenirValeur());

	}

	else{

		Reel* ptReel = dynamic_cast< Reel*>(nb);
		return new Reel(d_valeur * ptReel->obtenirValeur());
	}
}
Nombre* Reel::division(Nombre* nb) const{
	if (nb->estEntier())
	{
		Entier* ptEntier = dynamic_cast< Entier*>(nb);
		return new Reel(d_valeur / ptEntier->obtenirValeur());

	}

	else{

		Reel* ptReel = dynamic_cast< Reel*>(nb);
		return new Reel(d_valeur / ptReel->obtenirValeur());
	}
}

Nombre* Reel::sinus() const 
{
	return new Reel(sin(d_valeur));
}
Nombre* Reel::cosinus() const
{
	return new Reel(cos(d_valeur));
}
Nombre* Reel::tangente() const
{
	return new Reel(tan(d_valeur));
}

Nombre* Reel::sinusHyperbolique() const
{
	return new Reel(sinh(d_valeur));

}
Nombre* Reel::cosinusHyperbolique() const
{
	return new Reel(cosh(d_valeur));
}
Nombre* Reel::tangenteHyperbolique() const
{
	return new Reel(tanh(d_valeur));
}



float Reel::obtenirValeur() const{
	return d_valeur;
}

void Reel::afficherValeur() const
{
	cout<<d_valeur;
}


