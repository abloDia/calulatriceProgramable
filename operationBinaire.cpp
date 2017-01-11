#include "OperationBinaire.h"
#include "Erreur.h"

OperationBinaire::OperationBinaire( TypeOperation type) : Operation{ type }
{

}

Nombre* OperationBinaire::appliqueOperation() {
	switch (d_type)
	{
	case AJOUT: return d_nombre1->addition(d_nombre2);
		break;
	case SOUS: return d_nombre1->soustraction(d_nombre2);
		break;
	case MUL: return d_nombre1->multiplication(d_nombre2);
		break;
	case DIV: return d_nombre1->division(d_nombre2);
		break;
	case PUISS: return nullptr;
		break;
	case MOD: return nullptr;
		break;
	case SIN: 
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case SIN_H:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case COS:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case COS_H:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
	case TAN:
		throw Erreur("", "parametre  d'operation non valide"); return nullptr;
		break;
	case TAN_H:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case LN:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case LOG:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	case RACINE:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;

		break;
	case CUBE:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;

		break;
	case CHS:
		throw Erreur("", "parametre d'operation non valide"); return nullptr;
		break;
	default:
		break;
	}
}
void OperationBinaire::setNombres(Nombre* nombre1, Nombre* nombre2){
	d_nombre1 = nombre1;
	d_nombre2 = nombre2;
}
 void OperationBinaire::setNombre(Nombre* nombre1) {
 }
