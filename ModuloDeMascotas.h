#pragma once
#include "Mascota.h"

class ModuloDeMascotas
{
private:
	Mascota* mascotas;
	int cantidad;
	int capacidad;
public:
	ModuloDeMascotas();
	~ModuloDeMascotas();
	void registrar();
	void mostrar();
	Mascota* buscarPorId(int id);
};

