#pragma once
#include <iostream>
#include <string>
using namespace std;
class Atencion
{
protected:
	string codigo;
	string descripcion;
	double costo;
	string tipo;
public:
	Atencion();
	~Atencion();
	virtual void leer();
	virtual void mostrar();
	string getCodigo();
	double getCosto();
};

