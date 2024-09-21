#include "duenno.h"
using namespace std;
#include <iostream>
#include <sstream>

/*Atributos
	string nombre;
	string id;
	//mascota **m;
	int cantidadM;
	int tamannoM;
*/

duenno::duenno() {
	m = new mascota * [3]; //DEFINIR TAMANNO DE VECTOR
	this->nombre = "";
	this->id = "";
	this->cantidadM = 0;
	this->tamannoM = 5;
}
duenno::duenno(string nombre, string id, mascota** masc, int cantidadM, int tamannoM) {
	m = new mascota * [tamannoM]; //DEFINIR TAMANNO DE VECTOR
	m = masc;
	this->nombre = nombre;
	this->id = id;
	this->cantidadM = cantidadM;
	this->tamannoM = tamannoM;
}
void duenno::setNombre(string nombre) {
	this->nombre = nombre;
}
void duenno::setId(string id) {
	this->id = id;
}
bool duenno::insertarMascota(mascota aux) {
	if (cantidadM < tamannoM) {
		*(*(m + cantidadM)) = aux;
		cantidadM++;
		return true;
	}
	else { return false; }
}
bool duenno::eliminarMascota() {
	if (cantidadM > 0) {
		(*(m + cantidadM))->setEspecie("");
		(*(m + cantidadM))->setNombre("");
		cantidadM--;
		return true;
	}
	return false;
}
mascota* duenno::getMascota(string nombreM) {
	for (int i = 0; i < cantidadM; i++) {
		if ((*(m + i))->getNombre() == nombreM) {

			return (*(m + i));
		}
	}
	return new mascota("", "");
}
mascota* duenno::getMascotas() {
	return *m;
}
string duenno::getNombre() {
	return nombre;
}
string duenno::getId() {
	return id;
}
int duenno::getcantidadM() {
	return cantidadM;
}
int duenno::getTamannoM() {
	return tamannoM;
}
string duenno::toString() {
	stringstream s;
	s << nombre << endl;
	s << id << endl;
	return s.str();
}
duenno::~duenno() {

}
