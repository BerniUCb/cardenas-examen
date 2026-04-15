#include "SuperPet.h"

SuperPet::SuperPet()
{
}

SuperPet::~SuperPet()
{
}

void SuperPet::menu()
{
	int opcion;
	do {
		system("cls");
		cout << "Menu Principal" << endl;
		cout << "1. Registrar mascota" << endl;
		cout << "2. Mostrar mascotas" << endl;
		cout << "3. Buscar mascota por id" << endl;
		cout << "4. Registrar reserva" << endl;
		cout << "5. Agregar mascota a reserva" << endl;
		cout << "6. Mostrar reservas ordenadas por costo total" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			mascotas.registrar();
			break;
		case 2:
			mascotas.mostrar();
			break;
		case 3:
			buscarMascota();
			break;
		case 4:
			reservas.registrarReserva();
			break;
		case 5:
			agregarMascotaAReserva();
			break;
		case 6:
			reservas.ordenarReservasPorCostoTotal();
			reservas.mostrarReservas();
			break;
		default:
			break;
		}
		system("pause");
	} while (opcion != 0);
}

void SuperPet::buscarMascota()
{
	int id;
	cout << "Ingrese el id de la mascota a buscar: ";
	cin >> id;
	Mascota* mascota = mascotas.buscarPorId(id);
	if (mascota != nullptr)
	{
		mascota->mostrar();
	}
	else
	{
		cout << "Mascota no encontrada." << endl;
	}
}

void SuperPet::agregarMascotaAReserva()
{
	string codigo;
	cout << "Ingrese el codigo de la reserva: ";
	cin >> codigo;
	int id;
	cout << "Ingrese el id de la mascota a agregar: ";
	cin >> id;
	Mascota* mascota = mascotas.buscarPorId(id);
	if (mascota != nullptr)
	{
		reservas.agregarMascotaAReserva(codigo, mascota);
	}
	else
	{
		cout << "Mascota no encontrada." << endl;
	}
}
