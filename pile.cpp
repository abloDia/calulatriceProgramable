#include "pile.h"
	#include "Erreur.h"
	#include "Reel.h"
	#include "Entier.h"
	/**Initialisation de l'unique instance de la pile
	*/
	pile* pile::pileUnique = 0;
	Memento* pile::pileMemento = new Memento();
	Nombre* pile::x = 0;
	Nombre* pile::y = 0;
	
	/**Constructeur par defaut de la pile avec la valeur 0.0 au debut de la pile
	*/
	pile::pile() :d_nombres{new Reel(0.0)}
	{
	}
	
	
	/**Retourne l'unique instance
	*/
	pile& pile::obtenirInstance()
	{
		if (pileUnique == 0)
		{
			pileUnique = new pile;
		}
		return *pileUnique;
	}
	
	void pile::libererInstance()
	{
		if (pileUnique != 0)
		{
			delete pileUnique;
			pileUnique = 0;
		}
	}
	
	/****************************************************************
				MEMENTO    DU    TURFU (début)
	****************************************************************/
	bool pile::estInstanciee()
	{
		return (pileUnique != 0);
	}
	
	void pile::libererMemento()
	{
		delete pileUnique->pileMemento;
	}
	
	bool pile::estSauvegardable()
	{
		return(pileUnique->estInstanciee() 
		       && !pileUnique->estCorrectementVide() 
			   && !pileUnique->estTotalementVide());
	}

	void pile::sauvegarderPileDansMemento()
	{
		if(pileUnique->estSauvegardable())
		{
			pileUnique->libererMemento();
			pileUnique->pileMemento = new Memento(pileUnique);
		}
		else
		{
			throw Erreur("", "La pile n'est pas sauvegardable.");
		}
	}
	
	void pile::restaurerMementoDansPile()
	{
		pileUnique->x = 0;
		pileUnique->y = 0;
		pileUnique->obtenirMemento().chargerPileMementoDepuisFichier();
		pileUnique->d_nombres = pileUnique->pileMemento->obtenirPileMemento();
	}
	
	Memento& pile::obtenirMemento()
	{
		return *pileMemento;
	}
	
	
	const std::vector<Nombre*> pile::obtenirNombres() const
	{
		return d_nombres;
	}
	
	/****************************************************************
				MEMENTO    DU    TURFU (fin)
	****************************************************************/
	
	
	Nombre* pile::obtenirX()
	{
		if(pileUnique->x != 0)
		{
			return pileUnique->x;	
		}
		else
		{
			throw Erreur("","Aucune valeur n'a ete depile et stocke dans x.");
			return 0;
		}
		
	}
	
	Nombre* pile::obtenirY()
	{
		if(pileUnique->y !=0)
		{
			return pileUnique->y;
		}
		else
		{
			throw Erreur("","Aucune valeur n'a ete depile et stocke dans y.");
			return 0;
		}
	}
	
	/** retourne le dernier elemnt de la pile
	*/
	Nombre* pile::dernierNombre() const
	{  
	    return pileUnique->d_nombres.back();
	}
	
	/** Ajout de x dans la derniere case du tableau
	si le tableau est vide la premiere case qui contient la valeur 0.0
	est remplacé par cet element
	
	*/
	void pile::ajouterNombre(Nombre* x)
	{
		if (pileUnique->estCorrectementVide())
		{
			pileUnique->d_nombres[0] = x;
		}
		else
		{
			pileUnique->d_nombres.push_back(x);
		}
	}

	//Enleve la dernier valeur de la pile et la stocke dans x

	void pile::enleveDernierNombre()
	{
		if (!pileUnique->estCorrectementVide() && !pileUnique->estTotalementVide())
		{
			
			Reel* dernierNombreEnReel = dernierNombreEnReel->traduireNombreEnReel(pileUnique->dernierNombre());
			pileUnique->x = new Reel(dernierNombreEnReel->obtenirValeur());
			pileUnique->d_nombres.pop_back();
			
			if (pileUnique->estTotalementVide())
			{
				pileUnique->viderCorrectementPile();
			}
		}
		else
		{
			throw Erreur("","La pile ne contient pas le nombre necessaire.");
		}	
	}
	
	
	void pile::enleveDeuxDerniersNombres()
	{
		int nombreVariableNecessaire = 2;
		
		if (pileUnique->taillePile() >= nombreVariableNecessaire)
		{			
			Reel* xEnReel = xEnReel->traduireNombreEnReel(pileUnique->dernierNombre());
			pileUnique->x = new Reel(xEnReel->obtenirValeur());
			pileUnique->supprimerDernier();
			//ici x est rempli et le nombre deleted
			
			Reel* yEnReel = yEnReel->traduireNombreEnReel(pileUnique->dernierNombre());
			pileUnique->y = new Reel(yEnReel->obtenirValeur());
			pileUnique->supprimerDernier();
			//ici y est rempli et le nombre deleted
			
			if (pileUnique->estTotalementVide())
			{
				pileUnique->viderCorrectementPile();
			}
		}
		else
		{
			throw Erreur("","La pile ne contient pas les deux nombres necessaires.");
		}
	}
	
	
	bool pile::estTotalementVide()
	{
		return(pileUnique->taillePile() == 0);
	
	}
	
	bool pile::estCorrectementVide()
	{    
		Reel* dernierNombreEnReel = dernierNombreEnReel->traduireNombreEnReel(pileUnique->dernierNombre());
	    if(!dernierNombreEnReel==0)
	    {
			return (pileUnique->taillePile() == 1 && dernierNombreEnReel->obtenirValeur()==0.0);	
		}
		return false;
	}
	
	/**
	*/
	void pile::viderCorrectementPile()
	{
		while (!pileUnique->estTotalementVide())
		{
			pileUnique->d_nombres.pop_back();

		}
		pileUnique->ajouterNombre(new Reel(0.0));    
	}
	
	
	//renvoie la taille de la pile
	int pile::taillePile() const
	{
		return pileUnique->d_nombres.size();
	}
	
	
	
	//
	void pile::afficher() const
	{
		for (int i = 0; i<pileUnique->taillePile(); i++)
		{
			pileUnique->d_nombres[i]->afficherValeur();
			cout<<endl;
		}
	}
	
	
	void pile::echanger()
	{
	    if (pileUnique->taillePile()>=2)
	    {
	        std::swap(pileUnique->d_nombres[pileUnique->taillePile()],pileUnique->d_nombres[pileUnique->taillePile()-1]) ;
	    }
	}
	
	void pile::supprimerDernier()
	{
	    pileUnique->d_nombres.pop_back();
	}

