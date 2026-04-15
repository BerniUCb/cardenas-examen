#include "ModuloDeMascotas.h"

ModuloDeMascotas::ModuloDeMascotas()
{
	this->cantidad = 0;
	this->capacidad = 10;
	this->mascotas = new Mascota[this->capacidad];
}

ModuloDeMascotas::~ModuloDeMascotas()
{
	delete[] mascotas;
}

void ModuloDeMascotas::registrar()
{
	if (cantidad < capacidad)
	{
		mascotas[cantidad].leer();
		cantidad++;
	}
	else
	{
		cout << "No se pueden registrar mas mascotas, capacidad alcanzada." << endl;
	}
}

void ModuloDeMascotas::mostrar()
{
	for (int i = 0; i < cantidad; i++)
	{
		mascotas[i].mostrar();
		cout << "------------------------" << endl;
	}
}

Mascota* ModuloDeMascotas::buscarPorId(int id)
{
	for (int i = 0; i < cantidad; i++)
	{
		if (mascotas[i].getId() == id)
		{
			return &mascotas[i];
		}
	}
	return nullptr;
}
