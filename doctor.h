#pragma once
using namespace std;
#include <iostream>
#include "citas.h"
#define COL 5
#define FIL 8
class doctor
{
private:
	string nombre;
	string especialidad;
	citas c[FIL][COL];
public:
	doctor();
	doctor(string, string);
	void setNombre(string);
	string getNombre();
	string getEspecialidad();
	string toString();

};
