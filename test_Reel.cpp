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
		SECTION ("Tests des Operations sur la classe Reel")
		{
			SECTION("Application des Operation Binaires sur la classe Reel")
			{
				SECTION("le reel est bien construit","constructeur")
				{
					Nombre* monNombreReel = new Reel(2.3);
				
					REQUIRE(monNombreReel->estReel());
				}
			
				SECTION("l'addition de deux reels est correcte")
				{
					int valeur1 = 3.1;
					int valeur2 = 12.3;
					int total = valeur1 + valeur2;
					
					Reel* monReel1 = new Reel(valeur1);
					Reel* monReel2 = new Reel(valeur2);
					
					Nombre* monReelTotal = monReel1->addition(monReel2);
					
					Reel* ptMonReel = dynamic_cast <Reel*> (monReelTotal);
					
					REQUIRE(ptMonReel->obtenirValeur() == total);
					
				}
				SECTION("la soustraction de deux reels est correcte")
				{
					int valeur1 = 13.1;
					int valeur2 = 12.3;
					int total = valeur1 - valeur2;
					
					Reel* monReel1 = new Reel(valeur1);
					Reel* monReel2 = new Reel(valeur2);
					
					Nombre* monReelTotal = monReel1->soustraction(monReel2);
					
					Reel* ptMonReel = dynamic_cast <Reel*> (monReelTotal);
					
					REQUIRE(ptMonReel->obtenirValeur() == total);
					
				}
				
				SECTION("la multiplication de deux reels est correcte")
				{
					int valeur1 = 13.1;
					int valeur2 = 1.3;
					int total = valeur1 * valeur2;
					
					Reel* monReel1 = new Reel(valeur1);
					Reel* monReel2 = new Reel(valeur2);
					
					Nombre* monReelTotal = monReel1->multiplication(monReel2);
					
					Reel* ptMonReel = dynamic_cast <Reel*> (monReelTotal);
					
					REQUIRE(ptMonReel->obtenirValeur() == total);
					
				}
				SECTION("la division de deux reels est correcte")
				{
					int valeur1 = 13.1;
					int valeur2 = 1.3;
					int total = valeur1 / valeur2;
					
					Reel* monReel1 = new Reel(valeur1);
					Reel* monReel2 = new Reel(valeur2);
					
					Nombre* monReelTotal = monReel1->division(monReel2);
					
					Reel* ptMonReel = dynamic_cast <Reel*> (monReelTotal);
					
					REQUIRE(ptMonReel->obtenirValeur() == total);	
				}
			
			}//Application des operations Binaires sur les Reels
			SECTION("Application des operations Unaires sur la classe Reel")
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
			}//fin application operation unaire sur reel
		}//fin Test Reel
		
	}
			
			
			
		
		
			

		
	

