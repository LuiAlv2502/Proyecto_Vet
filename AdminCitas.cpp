#include "AdminCitas.h"
#include "AdminCitas.h"
AdminCitas::AdminCitas() {
	d = new doctor * [10];
	for (int i = 0; i < tamannoE; i++) {
		espec[i] = "";
	}
}
bool AdminCitas::ingresarEspecialidad(string especialidad) {
	if (cantidadE < tamannoE) {
		espec[cantidadE] = especialidad;
		cantidadE++;
		return true;
	}
	return false;
}
bool AdminCitas::ingresarDoctor(string especialidad, string nombre) {
	return true;
}
bool AdminCitas::ingresarDuenno(string id, string nombre) {
	return true;
}
bool AdminCitas::ingresarMascota(mascota mascota, string nombreD) {
	return true;
}

void AdminCitas::sacarCita() {}
void AdminCitas::cancelarCita() {}
void AdminCitas::calendarioCitasDoc(doctor) {}
void AdminCitas::citasPorDuenno(duenno duenno) {}
void AdminCitas::listadoDeEspecialidades() {}
void AdminCitas::doctoresPorEspecialidad(string especialidad) {}
void AdminCitas::duennosConMascotas() {}
void AdminCitas::pacientesPorDoctor(doctor) {}