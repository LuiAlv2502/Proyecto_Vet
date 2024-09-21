#include  "interfaz.h"
#include <iostream>
#include <sstream>
using namespace std;

void interfaz::SubmenuAdmin() {
	int opc = 0; // variable de opcion para el menu
	cout << "\t Bienvenido al submen" << char(163) << " administraci" << char(162) << "n" << endl << endl;
	cout << "Ingrese el n" << char(163) << "mero de la opci" << char(162) << "n que desee:" << endl;
	cout << "1- Ingresar especialidades" << endl;
	cout << "2- Ingresar doctor (por especialidad)" << endl;
	cout << "3- Ingresar due" << char(164) << "o" << endl;
	cout << "4- Ingresar mascota (por due" << char(164) << "o)" << endl;
	cout << "0- Regresar al men" << char(163) << " principal" << endl;
	cin >> opc;

	switch (opc) {
	case 1:
		system("cls");
		break;
	case 2:
		system("cls");
		break;
	case 3:
		system("cls");
		break;
	case 4:
		system("cls");
		break;
	case 0:
		system("cls");
		InterfazMenu();
		break;
	}
}
void interfaz::SubmenuCitas() {
	int opc = 0;
	cout << "\t Bienvenido al submen" << char(163) << " de control de citas" << endl << endl;
	cout << "Ingrese el n" << char(163) << "mero de la opci" << char(162) << "n que desee:" << endl;
	cout << "1- Solicitud de cita" << endl;
	cout << "2- Cancelar una cita" << endl;
	cout << "3- Mostrar calendario de citas por doctor" << char(164) << "o" << endl;
	cout << "4- Mostrar citas (por due" << char(164) << "o)" << endl;
	cout << "0- Regresar al men" << char(163) << " principal" << endl;
	cin >> opc;

	switch (opc) {
	case 1:
		system("cls");
		break;
	case 2:
		system("cls");
		break;
	case 3:
		system("cls");
		break;
	case 4:
		system("cls");
		break;
	case 0:
		system("cls");
		InterfazMenu();
		break;
	}

}
void interfaz::SubmenuBusYList() {

	int opc = 0;
	cout << "\t Bienvenido al submen" << char(163) << " de b" << char(163) << "squedas y listados" << endl << endl;
	cout << "Ingrese el n" << char(163) << "mero de la opci" << char(162) << "n que desee:" << endl;
	cout << "1- Mostrar listado de especialidades" << endl;
	cout << "2- Mostrar listado de doctores por especialidad" << endl;
	cout << "3- Mostrar due" << char(164) << "s con sus mascotas" << endl;
	cout << "4- Mostrar pacientes por doctor" << endl;
	cout << "0- Regresar al men" << char(163) << " principal" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		system("cls");
		break;
	case 2:
		system("cls");
		break;
	case 3:
		system("cls");
		break;
	case 4:
		system("cls");
		break;
	case 0:
		system("cls");
		InterfazMenu();
		break;
	}
}
void interfaz::InterfazMenu() {
	int opc = 0;
	cout << "\t \t " << char(173) << "Bienvenido a la veterinaria Mittens!" << endl;
	cout << "\t\t\t" << "Men" << char(163) << " principal." << endl << endl;
	cout << "Ingrese el n" << char(163) << "mero de la opci" << char(162) << "n que desee:" << endl;
	cout << "1- Submen" << char(163) << " administraci" << char(162) << "n" << endl;
	cout << "2- Submen" << char(163) << " control de citas" << endl;
	cout << "3- Submen" << char(163) << " b" << char(163) << "squedas y listados" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		system("cls");
		SubmenuAdmin();
		break;

	case 2:
		system("cls");
		SubmenuCitas();
		break;

	case 3:
		system("cls");
		SubmenuBusYList();
		break;

	}
}
