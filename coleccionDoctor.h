#pragma once
#include "doctor.h"
#include <sstream>
using namespace std;
class coleccionDoctor
{
private:
	doctor** d;
	int tamanno;
	int cantidad;
public:
	coleccionDoctor();
	coleccionDoctor(doctor** aux, int tamanno, int cantidad);
	bool insertar(doctor* c, int pos);
	string toString();
	doctor* buscarDoctor(string id);
	void eliminar(string id);
	~coleccionDoctor();
};

