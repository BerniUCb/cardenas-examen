#include "Mascota.h"

Mascota::Mascota()
{
	this->id = 0;
	this->nombre = "";
	this->edad = 0;
	this->nombreDuenho = "";
}

Mascota::~Mascota()
{
}

void Mascota::leer()
{
	cout << "Ingrese el id de la mascota: ";
	cin >> id;
	cout << "Ingrese el nombre de la mascota: ";
	cin >> nombre;
	cout << "Ingrese la edad de la mascota: ";
	cin >> edad;
	cout << "Ingrese el nombre del duenho de la mascota: ";
	cin >> nombreDuenho;
}

void Mascota::mostrar()
{
	cout << "Id: " << id << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Nombre del duenho: " << nombreDuenho << endl;
}

int Mascota::getId()
{
	return id;
}
