#ifndef PILE_H
	#define PILE_H
	#include <iostream>
	#include <vector>
	#include "Nombre.h"
	#include "Memento.h"
	
	class pile {
	public:
	   	//instanciation
		static pile& obtenirInstance();
		static void libererInstance();
		bool estInstanciee();			
		bool estSauvegardable();
				
		void sauvegarderPileDansMemento();
		void restaurerMementoDansPile();
		Memento& obtenirMemento();
		void libererMemento();
		
		//obtenir info
		Nombre* dernierNombre() const;
		static Nombre* obtenirX();
		static Nombre* obtenirY();

		void ajouterNombre(Nombre* x);
		void viderCorrectementPile();
		bool estCorrectementVide();
		bool estTotalementVide();
		
		void enleveDernierNombre();
		void enleveDeuxDerniersNombres();
		
		int taillePile() const;
		const std::vector<Nombre*> obtenirNombres() const;
		void afficher() const;
		
		void echanger();
    	void supprimerDernier();
		
	private:
	    pile();
		~pile() = default;
		pile(const pile&) = delete;
		pile& operator=(const pile&) = delete;
		
		
		std::vector<Nombre*> d_nombres;
		
		/**************************
			MEMENTO    DU    TURFU 
		**************************/
		static Memento* pileMemento;
		/**************************
			MEMENTO    DU    TURFU 
		**************************/
		
		static pile* pileUnique;
		static Nombre* x; //dernier x enleve
		static Nombre* y; //dernier y enleve
	};