#pragma once
#include <iostream>
#include <string>

using namespace std;

// Las mascotas cuentan con un código de identificación, nombre, edad y nombre del dueño
class Mascota
{
private:
	int id;
	string nombre;
	int edad;
	string nombreDuenho;
public:
	Mascota();
	~Mascota();
	void leer();
	void mostrar();
	int getId();
};

