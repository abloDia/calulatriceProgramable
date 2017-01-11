	#define CATCH_CONFIG_MAIN
	#include "catch.hpp"
	#include<string>
	#include<iostream>
	#include"Entier.h"	
	#include"Nombre.h"
	#include"Reel.h"
	#include "OperationUnaire.h"
	#include "OperationBinaire.h"
	#include <cmath>

	
	TEST_CASE("Programme de test ")
	{	
		SECTION ("Tests des Operations sur la classe entier")
		{
			SECTION("Application des Operation Binaires sur la classe Entier")
			{
				SECTION("l'entier est bien construit","constructeur et accesseur")
				{
					int valeur = 10;
					Entier* monEntier = new Entier(valeur);
					REQUIRE(monEntier->obtenirValeur() == valeur);
				}
				SECTION("addition sur les entiers s'est bien deroulee")
				{
					int valeur1 = 3;
					int valeur2 = 12;
					int total = valeur1 + valeur2;
					
					Entier* mon1Entier = new Entier(valeur1);
					Entier* mon2Entier = new Entier(valeur2);
					
					Nombre* monTotalEntier = mon1Entier->addition(mon2Entier);
					Entier* ptEntier = dynamic_cast<Entier*>(monTotalEntier);
					
					REQUIRE(ptEntier->obtenirValeur() == total);
				}
				SECTION("soustraction sur les entiers s'est bien deroulee")
				{
					int valeur1 = 16;
					int valeur2 = 12;
					int total = valeur1 - valeur2;
					
					Entier* mon1Entier = new Entier(valeur1);
					Entier* mon2Entier = new Entier(valeur2);
					
					Nombre* monTotalEntier = mon1Entier->soustraction(mon2Entier);
					Entier* ptEntier = dynamic_cast<Entier*>(monTotalEntier);
					
					REQUIRE(ptEntier->obtenirValeur() == total);
				}
				SECTION("multiplication sur les entiers s'est bien deroulee")
				{
					int valeur1 = 5;
					int valeur2 = 6;
					int total = valeur1 * valeur2;
					
					Entier* mon1Entier = new Entier(valeur1);
					Entier* mon2Entier = new Entier(valeur2);
					
					Nombre* monTotalEntier = mon1Entier->multiplication(mon2Entier);
					Entier* ptEntier = dynamic_cast<Entier*>(monTotalEntier);
					
					REQUIRE(ptEntier->obtenirValeur() == total);
				}
				SECTION("division sur les entiers s'est bien deroulee")
				{
					int valeur1 = 50;
					int valeur2 = 10;
					int total = valeur1 / valeur2;
					
					Entier* mon1Entier = new Entier(valeur1);
					Entier* mon2Entier = new Entier(valeur2);
					
					Nombre* monTotalEntier = mon1Entier->division(mon2Entier);
					Entier* ptEntier = dynamic_cast<Entier*>(monTotalEntier);
					
					REQUIRE(ptEntier->obtenirValeur() == total);
				}
			}//fin application Operation binaire sur entier
			SECTION("Application des operations Unaires sur les entiers")
			{
				SECTION("sinus")
				{
						float a=25;
						float resultat=sin(a);
						
						std::cout<<"le sinus de "<<a<<" est "<<resultat<<"\n";
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->sinus();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);
					
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
					
				SECTION("cosinus")
				{
						float a=27;
						float resultat=cos(a);
						
						std::cout<<"le cosinus de "<<a<<" est "<<resultat<<"\n";
						
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->cosinus();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);	
	
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
				SECTION("tangante")
				{
						float a=27;
						float resultat=tan(a);
						
						std::cout<<"la tangente de "<<a<<" est "<<resultat<<"\n";
					
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->tangente();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);
						
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
						
					SECTION("sinus Hyperbolyque")
				{
						float a=24;
						float resultat=sinh(a);
						
						std::cout<<"le sinus Hyperbolyque de "<<a<<" est "<<resultat<<"\n";
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->sinusHyperbolique();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);
					
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
					
				SECTION("cosinus hyperbolique")
				{
						float a=5;
						float resultat=cosh(a);
						
						std::cout<<"le cosinus Hyperbolyque de "<<a<<" est "<<resultat<<"\n";
						
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->cosinusHyperbolique();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);	
	
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
				SECTION("tangante hyperbolique")
				{
						float a=42;
						float resultat=tanh(a);
						
						std::cout<<"la tangente Hyperbolyque de "<<a<<" est "<<resultat<<"\n";
					
						Nombre* monNombreReel = new Reel(a);
						Nombre* monTotal2 = monNombreReel->tangenteHyperbolique();
						
						Reel* monTotal=dynamic_cast<Reel*>(monTotal2);
						
						REQUIRE(monTotal->obtenirValeur() == resultat);
				}	
			}//Application des operations Unaires sur les entiers
		}
		
	}
			
			
			
		
		
			

		
	

