#include "ModuloDeReservas.h"

ModuloDeReservas::ModuloDeReservas()
{
	this->cantidad = 0;
	this->capacidad = 10;
	this->reservas = new Reserva*[this->capacidad];
}

ModuloDeReservas::~ModuloDeReservas()
{
	for (int i = 0; i < cantidad; i++)
	{
		delete reservas[i];
	}
	delete[] reservas;
}

void ModuloDeReservas::registrarReserva()
{
	int opcion;
	cout << "Seleccione el tipo de reserva a registrar:" << endl;
	cout << "1. Reserva Simple" << endl;
	cout << "2. Reserva Combo" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		registrarReservaSimple();
		break;
	case 2:
		registrarReservaCombo();
		break;
	}
}

void ModuloDeReservas::registrarReservaSimple()
{
	if (cantidad < capacidad)
	{
		reservas[cantidad] = new ReservaSimple;
		reservas[cantidad]->leer();
		cantidad++;
	}
	else
	{
		cout << "No se pueden registrar mas reservas." << endl;
	}
}

void ModuloDeReservas::registrarReservaCombo()
{
	if (cantidad < capacidad)
	{
		reservas[cantidad] = new ReservaCombo;
		reservas[cantidad]->leer();
		cantidad++;
	}
	else
	{
		cout << "No se pueden registrar mas reservas." << endl;
	}
}

void ModuloDeReservas::mostrarReservas()
{
	for (int i = 0; i < cantidad; i++)
	{
		reservas[i]->mostrar();
		cout << "------------------------------------" << endl;
	}
}

void ModuloDeReservas::ordenarReservasPorCostoTotal()
{
	for (int i = 0; i < cantidad - 1; i++)
	{
		for (int j = 0; j < cantidad - i - 1; j++)
		{
			if (reservas[j]->calcularCostoTotal() > reservas[j + 1]->calcularCostoTotal())
			{
				Reserva* temp = reservas[j];
				reservas[j] = reservas[j + 1];
				reservas[j + 1] = temp;
			}
		}
	}
}

Reserva* ModuloDeReservas::buscarPorCodigo(string codigo)
{
	for (int i = 0; i < cantidad; i++)
	{
		if (reservas[i]->getCodigo() == codigo)
		{
			return reservas[i];
		}
	}
	return nullptr;
}

void ModuloDeReservas::agregarMascotaAReserva(string codigo, Mascota* mascota)
{
	Reserva* reserva = buscarPorCodigo(codigo);
	if (reserva != nullptr)
	{
		reserva->agregarMascota(mascota);
	}
	else
	{
		cout << "Reserva no encontrada." << endl;
	}
}
