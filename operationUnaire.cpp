#include "OperationUnaire.h"
#include "Erreur.h"

OperationUnaire::OperationUnaire( TypeOperation type) : Operation{ type }{

}
Nombre* OperationUnaire::appliqueOperation() {
	
	switch (d_type)
	{
	case AJOUT: 	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case SOUS: 	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case MUL: 	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case DIV: 	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case PUISS:	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case MOD: 	throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case SIN:
		return d_nombre->sinus();
		break;
	case SIN_H:
		return d_nombre->sinusHyperbolique();
		break;
	case COS:
		return d_nombre->cosinus();
		break;
	case COS_H:
		return d_nombre->cosinusHyperbolique();
		break;
	case TAN:
		return d_nombre->tangente();
		break;
	case TAN_H:
		return d_nombre->tangenteHyperbolique();
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
void OperationUnaire::setNombre(Nombre* nombre){
	d_nombre = nombre;
}
 void OperationUnaire::setNombres(Nombre* nombre1, Nombre* nombre2) {
 }

