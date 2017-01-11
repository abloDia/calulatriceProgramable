#include "OperationBinaire.h"
#include "Erreur.h"

OperationBinaire::OperationBinaire( TypeOperation type) : Operation{ type }
{
	
}

Nombre* OperationBinaire::appliqueOperation() 
{
	std::string messageErreur = "parametre d'operation non valide";
	switch (d_type)
	{
		case AJOUT: 
			return d_premierTerme->addition(d_secondTerme);
			break;
			
		case SOUS: 
			return d_premierTerme->soustraction(d_secondTerme);
			break;
			
		case MUL: 
			return d_premierTerme->multiplication(d_secondTerme);
			break;
			
		case DIV: 
			return d_premierTerme->division(d_secondTerme);
			break;
			
		case PUISS: 
			return nullptr;
			break;
			
		case MOD: 
			return nullptr;
			break;
			
		case SIN: 
			throw Erreur(messageErreur);
			return nullptr;
			break;
		
		case SIN_H:
			throw Erreur(messageErreur);
			return nullptr;
			break;
		
		case COS:
			throw Erreur(messageErreur);
			return nullptr;
			break;
		
		case COS_H:
			throw Erreur(messageErreur);
			return nullptr;
			break;
	
		
		case TAN:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case TAN_H:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case LN:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case LOG:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case RACINE:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case CUBE:
			throw Erreur(messageErreur);
			return nullptr;
			break;
		case CHS:
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		default:
			break;
	}
}
void OperationBinaire::modifierNombres(Nombre* premierTerme, Nombre* secondTerme){
	d_premierTerme = premierTerme;
	d_secondTerme = secondTerme;
}

 void OperationBinaire::modifierNombre(Nombre* uniqueTerme) {
 }