#pragma once
using namespace std;
#include <sstream>
#include <iostream>
#include "mascota.h"
class duenno
{
private:
	string nombre;
	string id;
	mascota** m;
	int cantidadM;
	int tamannoM;
public:
	duenno();
	duenno(string nombre, string id, mascota** masc, int cantidadM, int tamannoM);
	~duenno();
	void setNombre(string nombre);
	void setId(string id);
	bool insertarMascota(mascota aux);
	bool eliminarMascota();
	mascota* getMascota(string nombreM);
	mascota* getMascotas();
	string getNombre();
	string getId();
	int getcantidadM();
	int getTamannoM();
	string toString();


};

