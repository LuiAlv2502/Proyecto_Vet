#include "mascota.h"
mascota::mascota() {
	this->especie = " ";
	this->nombre = " ";
}
mascota::mascota(string nombre, string especie) {
	this->nombre = nombre;
	this->especie = especie;
}
void mascota::setNombre(string nombre) {
	this->nombre = nombre;
}
void mascota::setEspecie(string especie) {
	this->especie = especie;
}
string mascota::getNombre() {
	return this->nombre;
}
string mascota::getEspecie() {
	return this->especie;
}
string mascota::toString() {
	stringstream s;
	s << "Nombre: " << getNombre() << endl;
	s << "Especie: " << getEspecie() << endl;
	return s.str();
}