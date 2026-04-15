#pragma once
#include "Reserva.h"
class ReservaCombo :
    public Reserva
{
private:
    Atencion* atencionExtra;
public:
    ReservaCombo();
	~ReservaCombo();
	void leer();
	void mostrar();
	double calcularCostoTotal();
};

