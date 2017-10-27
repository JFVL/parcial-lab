#ifndef __UNIDADP_H
#define __UNIDADP_H

#include "proceso.h"

class UnidadProcesamiento {
	private:
		void sleep (unsigned int mseconds);

	public:
		void procesar (Proceso &p);
};
#endif

