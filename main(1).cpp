	#include <iostream>
	#include <stdio.h>
	#include <string.h>
	#include "pile.h"
	#include "Entier.h"
	#include "Reel.h"
	#include "OperationBinaire.h"
	#include "OperationUnaire.h"
	#include "Calculatrice.h"
	#include "Enum.h"
	#include "Memento.h"
	#include "Erreur.h"
	using std::cout;
	using std::cin;
		
		
		
	
	void affichagePileDansConsole()
	{
					pile* maPile;
					maPile->obtenirInstance();
					cout<<"La pile contient:\n";
					cout<<"-----------\n";
					maPile->afficher();
					cout<<"-----------\n";
	}
	void propositionDesOperationsUnaires()
	{
			cout<<"Choisir l'operation a faire =>\n";
			cout<<"--------------\n";
			cout<<"=> 1. Cosinus"<<" |\n";
			cout<<"=> 2. Sinus"<<"   |\n";
			cout<<"=> 3. Tangente"<<"|\n";
			cout<<"--------------\n";
			
	}
	void propositionDesOperationsBinaires()
	{
			cout<<"choisir l'operation a faire =>\n";
			cout<<"-------------------------\n";
			cout<<"=> 1. Addition"<<"      |\n";
			cout<<"=> 2. Soustraction"<<"  |\n";
			cout<<"=> 3. Multiplication"<<"|\n";
			cout<<"=> 4. Division"<<"      |\n";
			cout<<"------------------------|\n";
			
	}
	/**méthode qui lance la calculatrice
	
	*/
	void lancerCalculatrice()
	{
		int choix=0;
		int action=0;
	//boucle qui affiche l'action à faire (entrer un entier ou reel ou faire une operation)
	do
	{
		do
		{
			cout<<"**********************************\n";
			cout<<"Choisir l'action a executer"<<"       *\n";
			cout<<"=> 1. entrer un Nombre"<<"            *\n";
			cout<<"=> 2. entrer une Operation Unaire"<<" *\n";
			cout<<"=> 3. entrer une Operation Binaire"<" *\n";
			cout<<"\n";
			cout<<"**********************************\n";
				
			cin>>choix;

		}while(choix<=0 && choix>=3);
		//on instancie la pile et la Calcutrice
		pile* maPile;
		maPile->obtenirInstance();
		Calculatrice* maCalculatrice;
		maCalculatrice->obtenirInstance();
	//	Memento *monMemo;
	//	monMemo = new Memento(maPile)
		
		
		//on instancie les objets de la pile
		Reel *monReel;
		OperationUnaire *monOperationUnaire;
		OperationBinaire *monOperationBinaire;
		float valeurReel;
		int operation;
	
			switch (choix)
			{
		
				case 1 ://entrer nombre
					cout<<"saisir le nombre\n";
					cin>>valeurReel;
					monReel = new Reel(valeurReel);
					maPile->ajouterNombre(monReel);
					
					affichagePileDansConsole();

					//monMemo->enregistrerPileMementoDansFichier();
					break;
				
				case 2 ://operation Unaire
				
						try
						{
							do 
							{
								propositionDesOperationsUnaires();
								cin>>operation;
							}
							while(operation<=0);
							
							switch(operation)
							{
								case 1: //calcul du cosinus
								//
									monOperationUnaire= new OperationUnaire(TypeOperation::COS);
									maCalculatrice->appliquerOperationSurPile(*monOperationUnaire);
									//on affiche voir la pile
									affichagePileDansConsole();
	
								break;
								case 2: 
								 //calcul du sinus
									monOperationUnaire= new OperationUnaire(TypeOperation::SIN);
									maCalculatrice->appliquerOperationSurPile(*monOperationUnaire);
									//on affiche voir la pile
									affichagePileDansConsole();
									
									break;
								
								case 3:
									//calcul de la tangente
									monOperationUnaire= new OperationUnaire(TypeOperation::TAN);
									maCalculatrice->appliquerOperationSurPile(*monOperationUnaire);
									//on affiche voir la pile
									affichagePileDansConsole();
									
									break;
							}
						}
						catch(const Erreur& e)
						{
							e.afficher();
						}
				break;	
				
				case 3://operation Binaire
						do 
						{
							propositionDesOperationsBinaires();
							cin>>operation;
						}while(operation<=0);
						switch(operation)
						{
							case 1: //addition
								monOperationBinaire= new OperationBinaire(TypeOperation::AJOUT);
								maCalculatrice->appliquerOperationSurPile(*monOperationBinaire);
								//on affiche voir la pile
								affichagePileDansConsole();
							
							break;

							case 2: //soustraction 
								monOperationBinaire= new OperationBinaire(TypeOperation::AJOUT);
								maCalculatrice->appliquerOperationSurPile(*monOperationBinaire);
								//on affiche voir la pile
								affichagePileDansConsole();
								
								break;
							case 3: //multiplication
								monOperationBinaire= new OperationBinaire(TypeOperation::MUL);
								maCalculatrice->appliquerOperationSurPile(*monOperationBinaire);
								//on affiche voir la pile
								affichagePileDansConsole();
								
								break;
							case 4: //division
								monOperationBinaire= new OperationBinaire(TypeOperation::DIV);
								maCalculatrice->appliquerOperationSurPile(*monOperationBinaire);
								//on affiche voir la pile
								affichagePileDansConsole();
								
								break;
						}
				break;	
			}
		}while (action<=1);
		
		
	}

	int main(int argc, char** argv) 
	{
	 	cout<<"CALCULATRICE HP PROGRAMMABLE\n";
		cout<<"-----------------------------\n";
		
		
		int choix;
		do
		{
			cout<<" 1. Lancer le programme\n";
			cout<<" 2. Quitter le programme\n";
			cin>>choix;
			
			if (choix==1)
			{
				system("cls");
				lancerCalculatrice();
			}
		}while (choix<=1);
		
	 
		
		
	
		return 0;
	}
