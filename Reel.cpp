#include "Nombre.h"
#include "Reel.h"
#include "Erreur.h"
#include<iostream>
#include<cmath>

Reel* Reel::traduireNombreEnReel(Nombre* monNombre)
{
	Reel* monReel = dynamic_cast<Reel*>(monNombre);
	return new Reel(monReel->obtenirValeur());
}

Reel* Reel::effectuerOperationBinaire(char signeOperation, Nombre* secondTerme) const
{
	Reel* secondTermeEnReel = secondTermeEnReel->traduireNombreEnReel(secondTerme);
	switch(signeOperation)
	{
		case '+': 
			return new Reel(d_valeur + secondTermeEnReel->obtenirValeur());
			break;
			
		case '-':
			return new Reel(d_valeur - secondTermeEnReel->obtenirValeur());
			break;		
			
		case '*':
			return new Reel(d_valeur * secondTermeEnReel->obtenirValeur());
			break;
			
		case '/':
			return new Reel(d_valeur / secondTermeEnReel->obtenirValeur());
			break;
	}
}

Reel* Reel::effectuerOperationUnaire(const std::string& nomOperation) const
{
	if(nomOperation == "sinus")
		return new Reel(sin(d_valeur));
	
	if(nomOperation == "cosinus")
		return new Reel(cos(d_valeur));
		
	if(nomOperation == "tangente")
		return new Reel(tan(d_valeur));
	
	if(nomOperation == "sinusHyperbolique")
		return new Reel(sinh(d_valeur));
	
	if(nomOperation == "cosinusHyperbolique")
		return new Reel(cosh(d_valeur));
		
	if(nomOperation == "tangenteHyperbolique")
		return new Reel(tanh(d_valeur));
}



Reel::Reel(float valeur) :d_valeur{ valeur }{}

Nombre* Reel::addition(Nombre* secondTerme) const 
{
	effectuerOperationBinaire('+', secondTerme);
}

Nombre* Reel::soustraction(Nombre* secondTerme) const 
{
	effectuerOperationBinaire('-',secondTerme);
}

Nombre* Reel::multiplication(Nombre* secondTerme) const
{
	effectuerOperationBinaire('*',secondTerme);
}

Nombre* Reel::division(Nombre* secondTerme) const
{
	effectuerOperationBinaire('/',secondTerme);
}

Nombre* Reel::sinus() const 
{
	effectuerOperationUnaire("sinus");
}

Nombre* Reel::cosinus() const
{
	effectuerOperationUnaire("cosinus");
}
Nombre* Reel::tangente() const
{
	effectuerOperationUnaire("tangente");
}

Nombre* Reel::sinusHyperbolique() const
{
	effectuerOperationUnaire("sinusHyperbolique");
}

Nombre* Reel::cosinusHyperbolique() const
{
	effectuerOperationUnaire("cosinusHyperbolique");
}

Nombre* Reel::tangenteHyperbolique() const
{
	effectuerOperationUnaire("tangenteHyperbolique");
}

float Reel::obtenirValeur() const{
	return d_valeur;
}

void Reel::afficherValeur() const
{
	cout<<d_valeur;
}


