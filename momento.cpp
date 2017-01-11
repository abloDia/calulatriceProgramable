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
	
	
	std::vector<Nombre*>& Memento::modifierPileMemento(pile* maPile)
	{
		d_mementoNombres = maPile->obtenirNombres();
	}
	
	const std::vector<Nombre*> Memento::obtenirPileMemento() const
	{
		return d_mementoNombres;
	}
	
	const int Memento::taillePileMemento() const
	{
		return d_mementoNombres.size();
	}
	
	void Memento::viderPileMemento()
	{
		d_mementoNombres.clear();
	}
	
	bool Memento::pileMementoVide() const
	{
		return (taillePileMemento() == 0);
	}
	
	void Memento::afficherPileMemento()
	{
		if(!pileMementoVide())
		{
			for(int i=0; i<taillePileMemento();i++)
			{
				d_mementoNombres[i]->afficherValeur();
				cout<<endl;
			}
		}

	}
	

	void Memento::enregistrerPileMementoDansFichier()
	{
		std::string monFichier;
		monFichier = "C:/Users/Marc Knoblauch/Desktop/MIAGE/Semestre 5/S5 Qualité de prog/code/Memento.txt";
		std::ofstream f (monFichier.c_str());
		
		std::streambuf* buffer_sortie_fichier = f.rdbuf();
		std::streambuf* buffer_sortie_cout = cout.rdbuf();
		cout.rdbuf(buffer_sortie_fichier);
		

		for(int i=0; i<taillePileMemento(); i++)
		{
			d_mementoNombres[i]->afficherValeur();
			cout<<endl;
		}

		//etat initial
		cout.rdbuf(buffer_sortie_cout);
	}
	
	
	void Memento::chargerPileMementoDepuisFichier()
	{
		viderPileMemento();
		
		std::string monFichier;
		monFichier = "C:/Users/Marc Knoblauch/Desktop/MIAGE/Semestre 5/S5 Qualité de prog/code/Memento.txt";
		std::ifstream f(monFichier);
		
		if(f)
		{	
	        string nombre;
	        while(getline(f, nombre))  
	        {
	        	//cout<<"Je suis un reel : "<<nombre<<endl;
	        	std::stringstream flux;
	        	float val;
	        	flux.str(nombre);
	        	flux>>val;
	        	
	        	Nombre* nouveauReel = new Reel{val};
	        	d_mementoNombres.push_back(nouveauReel);

	        }
		}
		else
		{
			throw Erreur("","Le fichier n'existe pas!");
		}
		f.close();
	}