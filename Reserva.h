#pragma once
#include "Mascota.h"
#include "Atencion.h"
#include "AtencionMedica.h"
#include "AtencionPeluqueria.h"

class Reserva
{
protected:
	string codigo;
	Mascota* mascota;
	Atencion* atencion;
	string tipo;
public:
	Reserva();
	~Reserva();
	virtual void leer();
	virtual void mostrar();
	void agregarMascota(Mascota* mascota);
	string getCodigo();
	virtual double calcularCostoTotal() = 0;
	// funcion auxiliar para crear atencion que sera usada por las hijas
	Atencion* crearAtencion();
};

