#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class mascota

{
private:
	string nombre;
	string especie;
public:
	mascota();
	mascota(string nombre, string especie);
	void setNombre(string nombre);
	void setEspecie(string especie);
	string getNombre();
	string getEspecie();
	string toString();
};


