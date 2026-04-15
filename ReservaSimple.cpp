#include "ReservaSimple.h"

ReservaSimple::ReservaSimple()
{
	this->tipo = "ReservaSimple";
}

ReservaSimple::~ReservaSimple()
{
}

void ReservaSimple::leer()
{
	Reserva::leer();
	cout << "Registrar los datos de la atencion" << endl;
	atencion = crearAtencion();
}

void ReservaSimple::mostrar()
{
	Reserva::mostrar();
	if (atencion)
	{
		cout << "Datos de la atencion: " << endl;
		atencion->mostrar();
	}
}

double ReservaSimple::calcularCostoTotal()
{
	if (atencion)
	{
		double costo = atencion->getCosto();
		return costo - (costo * 0.05);
	}
	return 0.0;
}
