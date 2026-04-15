#include "Atencion.h"

Atencion::Atencion()
{
	this->codigo = "";
	this->descripcion = "";
	this->costo = 0;
	this->tipo = "";
}

Atencion::~Atencion()
{
}

void Atencion::leer()
{
	cout << "Ingrese el codigo: ";
	cin >> codigo;
	cout << "Ingrese la descripcion: ";
	cin.ignore();
	getline(cin, descripcion);
	cout << "Ingrese el costo: ";
	cin >> costo;
}

void Atencion::mostrar()
{
	cout << "Tipo: " << tipo << endl;
	cout << "Codigo: " << codigo << endl;
	cout << "Descripcion: " << descripcion << endl;
	cout << "Costo: " << costo << endl;
}

string Atencion::getCodigo()
{
	return codigo;
}

double Atencion::getCosto()
{
	return costo;
}
