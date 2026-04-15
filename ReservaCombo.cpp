#include "ReservaCombo.h"

ReservaCombo::ReservaCombo()
{
	this->atencionExtra = nullptr;
	this->tipo = "ReservaCombo";
}

ReservaCombo::~ReservaCombo()
{
	if (atencionExtra)
	{
		delete atencionExtra;
		atencionExtra = nullptr;
	}
}

void ReservaCombo::leer()
{
	Reserva::leer();
	cout << "Registrar los datos de la primera atencion" << endl;
	atencion = crearAtencion();
	cout << "Registrar los datos de la segunda atencion" << endl;
	atencionExtra = crearAtencion();
}

void ReservaCombo::mostrar()
{
	Reserva::mostrar();
	if (atencion)
	{
		cout << "Datos de la primera atencion: " << endl;
		atencion->mostrar();
	}
	if (atencionExtra)
	{
		cout << "Datos de la segunda atencion: " << endl;
		atencionExtra->mostrar();
	}
}

double ReservaCombo::calcularCostoTotal()
{
	if (atencion && atencionExtra)
	{
		double costo1 = atencion->getCosto();
		double costo2 = atencionExtra->getCosto();
		double total = costo1 + costo2;
		return total - (total * 0.15);
	}
	return 0.0;
}
