#include "doctor.h"
#include <sstream>
doctor::doctor() {
	this->especialidad = "";
	this->nombre = "";
	for (int i = 0; i < FIL; i++) {
		for (int j = 0; i < COL; i++) {
			//c[i][j].; Ximena
		}
	}
}
doctor::doctor(string nombre, string especialidad) {
	this->especialidad = especialidad;
	this->nombre = nombre;
}
void doctor::setNombre(string nombre) {
	this->nombre = nombre;
}
string doctor::getEspecialidad() {
	return especialidad;
}
string doctor::getNombre() {
	return nombre;
}
string doctor::toString() {
	stringstream s;
	s << "Especialidad: " << especialidad << endl;
	s << "Nombre: " << nombre << endl;
	return s.str();
}