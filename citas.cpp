#include "citas.h"

citas::citas() {
	this->dia = 0;
	this->hora = 0;
}
citas::citas(duenno duennoC, mascota mascotaC,string estado, int dia, int hora) {
	this->duennoC = duennoC;
	this->mascotaC = mascotaC;
	this->dia = dia;
	this->hora = hora;
	this->estado = estado;

}
void citas::setEstado(string estado) {
	this->estado = estado;
}
void citas::setDia(int dia) {
	this->dia = dia;
}
void citas::setHora(int hora) {
	this->hora = hora;
}
void citas::setDuennoCita(duenno d1) {
	this->duennoC = duennoC;
}
void citas::setMascotaCita(mascota mascotaC) {
	this->mascotaC = mascotaC;
}

duenno citas::getDuennoC() {
	return duennoC;
}
mascota citas::getMascotaC() {
	return mascotaC;
}
string citas::getEstado() {
	return estado;
}
int citas::getDia() {
	return dia;
}
int citas::getHora() {
	return hora;
}
string citas::toString() {
	stringstream s;
	s << "Due" << char(164) << "o de la mascota:" << duennoC.getNombre() << endl;
	s << "Nombre de la mascota:" << mascotaC.getNombre() << endl;
	s << "Dia de la cita: " << dia << endl;
	s << "Hora de la cita: " << hora << endl;
	//incluir estado de la cita
	return s.str();
}