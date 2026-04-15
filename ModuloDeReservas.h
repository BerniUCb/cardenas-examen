#pragma once
#include "Reserva.h"
#include "ReservaSimple.h"
#include "ReservaCombo.h"

class ModuloDeReservas
{
private:
	Reserva** reservas;
	int cantidad;
	int capacidad;
public:
	ModuloDeReservas();
	~ModuloDeReservas();
	void registrarReserva();
	void registrarReservaSimple();
	void registrarReservaCombo();
	void mostrarReservas();
	void ordenarReservasPorCostoTotal();
	Reserva* buscarPorCodigo(string codigo);
	void agregarMascotaAReserva(string codigo, Mascota* mascota);
};

