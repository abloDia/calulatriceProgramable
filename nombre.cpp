#include "Nombre.h"
#include "Reel.h"

bool Nombre::estReel() {
	Reel* ptReel = dynamic_cast< Reel*>(this);
	return ptReel != 0;
}



