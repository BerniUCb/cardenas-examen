#pragma once
#include "Atencion.h"

class AtencionPeluqueria :
	public Atencion
{
private:
	int duracion;
public:
	AtencionPeluqueria();
	~AtencionPeluqueria();
	void leer();
	void mostrar();
};

