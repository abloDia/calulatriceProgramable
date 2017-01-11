	#ifndef MEMENTO_H
	#define MEMENTO_H
	#include<vector>
	#include <stdio.h>
	#include <string.h>
	#include <sstream>
	#include<fstream>
	#include<iostream>
	#include"Nombre.h"
	class pile;

	class Memento{
		public:
			Memento();
			Memento(pile* maPile);
			
			void enregistrerPileMementoDansFichier();
			void chargerPileMementoDepuisFichier();
			
			void viderPileMemento();
			bool pileMementoVide() const;
			void afficherPileMemento();
			
			std::vector<Nombre*>& modifierPileMemento(pile* );
			const std::vector<Nombre*> obtenirPileMemento() const;
			const int taillePileMemento() const;
		private:
			std::vector<Nombre*> d_mementoNombres;
	};
	#endif
