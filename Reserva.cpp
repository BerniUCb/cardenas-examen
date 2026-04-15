#include "Reserva.h"

Reserva::Reserva()
{
	this->codigo = "";
	this->atencion = nullptr;
	this->mascota = nullptr;
	this->tipo = "";
}

Reserva::~Reserva()
{
	if (atencion) 
	{
		delete atencion;
		atencion = nullptr;
	}
}

void Reserva::leer()
{
	cout << "Ingrese el codigo: ";
	cin >> codigo;
}

void Reserva::mostrar()
{
	cout << "Codigo: " << codigo << endl;
	if (mascota)
	{
		cout << "Datos de la mascota: " << endl;
		mascota->mostrar();
	}
	cout << "Costo total: " << calcularCostoTotal() << endl;
}

void Reserva::agregarMascota(Mascota* mascota)
{
	this->mascota = mascota;
}

string Reserva::getCodigo()
{
	return string();
}

Atencion* Reserva::crearAtencion()
{
	Atencion* nuevaAtencion = new AtencionMedica;
	int tipo;
	cout << "Ingrese el tipo de atencion (1: AtencionMedica(Por defecto), 2: AtencionPeluqueria): ";
	cin >> tipo;
	if (tipo == 1)
	{
		nuevaAtencion = new AtencionMedica;
	}
	else if (tipo == 2)
	{
		nuevaAtencion = new AtencionPeluqueria;
	}
	nuevaAtencion->leer();
	return nuevaAtencion;
}
