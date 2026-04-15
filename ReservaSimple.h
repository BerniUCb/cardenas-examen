#pragma once
#include "Reserva.h"
class ReservaSimple :
    public Reserva
{
public:
	ReservaSimple();
	~ReservaSimple();
	void leer();
	void mostrar();
	double calcularCostoTotal();
};

