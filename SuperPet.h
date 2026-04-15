#pragma once
#include "ModuloDeMascotas.h"
#include "ModuloDeReservas.h"

class SuperPet
{
private:
	ModuloDeMascotas mascotas;
	ModuloDeReservas reservas;
public:
	SuperPet();
	~SuperPet();
	void menu();
	void buscarMascota();
	void agregarMascotaAReserva();
};

