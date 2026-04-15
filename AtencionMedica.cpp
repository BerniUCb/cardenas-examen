#include "AtencionMedica.h"

AtencionMedica::AtencionMedica()
{
	this->medicamento = "";
	this->tipo = "AtencionMedica";
}

AtencionMedica::~AtencionMedica()
{
}

void AtencionMedica::leer()
{
	Atencion::leer();
	cout << "Ingrese el medicamento: ";
	cin >> medicamento;
}

void AtencionMedica::mostrar()
{
	Atencion::mostrar();
	cout << "Medicamento: " << medicamento << endl;
}
