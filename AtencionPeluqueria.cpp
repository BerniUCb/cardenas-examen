#include "AtencionPeluqueria.h"

AtencionPeluqueria::AtencionPeluqueria()
{
	this->duracion = 0;
	this->tipo = "AtencionPeluqueria";
}

AtencionPeluqueria::~AtencionPeluqueria()
{
}

void AtencionPeluqueria::leer()
{
	Atencion::leer();
	cout << "Ingrese la duracion: ";
	cin >> duracion;
}

void AtencionPeluqueria::mostrar()
{
	Atencion::mostrar();
	cout << "Duracion: " << duracion << endl;
}
