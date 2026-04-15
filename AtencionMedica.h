#pragma once
#include "Atencion.h"

class AtencionMedica : 
	public Atencion
{
private:
	string medicamento;
public:
	AtencionMedica();
	~AtencionMedica();
	void leer();
	void mostrar();
};

