	#define CATCH_CONFIG_MAIN
	#include "catch.hpp"
	#include<string>
	#include<iostream>
	#include"Entier.h"
	#include "Reel.h"
	#include "Enum.h"
	#include "operationUnaire.h"
	
	TEST_CASE("Programme de test des Operations Unaires et binaires")
	{	
		SECTION("Operaton binaires")
		{
			SECTION ("test de la construction d'une operation Adition", "AJOUT")
			{
				std::string op="AJOUT";
				
				OperationUnaire* operation = new OperationUnaire(TypeOperation::AJOUT);
				REQUIRE(operation->estOperation(op) == true); 
				
			}
		}
			
		
		
		
	}
