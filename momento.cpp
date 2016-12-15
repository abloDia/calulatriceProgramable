#include"Memento.h"
	#include"pile.h"
	#include"Erreur.h"
	#include"Reel.h"
	
	
	Memento::Memento():d_mementoNombres{}
	{
	}
	
	Memento::Memento(pile* maPile)
	{
		modifierPileMemento(maPile);
		enregistrerPileMementoDansFichier();
	}
	