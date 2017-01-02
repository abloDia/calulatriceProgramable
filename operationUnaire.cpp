#include "OperationUnaire.h"
#include "Erreur.h"

OperationUnaire::OperationUnaire( TypeOperation type) : Operation{ type }{

}
Nombre* OperationUnaire::appliqueOperation()
{
	std::string messageErreur = "parametre d'operation non valide";	
	switch (d_type)
	{
		case AJOUT: 
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case SOUS: 	
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case MUL: 	
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case DIV: 	
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case PUISS:	
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case MOD: 	
			throw Erreur(messageErreur);
			return nullptr;
			break;
			
		case SIN:
			return d_uniqueTerme->sinus();
			break;
			
		case SIN_H:
			return d_uniqueTerme->sinusHyperbolique();
			break;
			
		case COS:
			return d_uniqueTerme->cosinus();
			break;
			
		case COS_H:
			return d_uniqueTerme->cosinusHyperbolique();
			break;
			
		case TAN:
			return d_uniqueTerme->tangente();
			break;
			
		case TAN_H:
			return d_uniqueTerme->tangenteHyperbolique();
			break;
			
		case LN:
			return nullptr;
			break;
			
		case LOG:
			return nullptr;
			break;
			
		case RACINE:
			return nullptr;
			break;
			
		case CUBE:
			return nullptr;
			break;
			
		case CHS:
			return nullptr;
			break;
			
		default:
			break;
		}

}
void OperationUnaire::modifierNombre(Nombre* uniqueTerme){
	d_uniqueTerme = uniqueTerme;
}

 void OperationUnaire::modifierNombres(Nombre* premierTerme, Nombre* secondTerme) {
 }

