#include "Nombre.h"
#include "Entier.h"
#include "Reel.h"
bool Nombre::estReel() {
	Reel* ptReel = dynamic_cast< Reel*>(this);
	return ptReel != 0;
}
bool Nombre::estEntier() {
	Entier* ptEntier = dynamic_cast< Entier*>(this);
	return ptEntier != 0;
}
