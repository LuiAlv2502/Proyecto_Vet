#pragma once
#include <sstream>
#define tamannoV 5
#include "duenno.h"
#include "coleccionDoctor.h"

using namespace std;

class AdminCitas
{
private:
	string espec[tamannoV];
	coleccionDoctor **v;
	int cantidadE;
	int tamannoE;
	AdminCitas();
public:
	bool ingresarEspecialidad(string);
	bool ingresarDoctor(string especialidad, string nombre);
	bool ingresarDuenno(string especialidad, string nombre);
	bool ingresarMascota(mascota mascota, string nombreD);
	void sacarCita();
	void cancelarCita();
	void calendarioCitasDoc(doctor);
	void citasPorDuenno(duenno duenno);
	void listadoDeEspecialidades();
	void doctoresPorEspecialidad(string especialidad);
	void duennosConMascotas();
	void pacientesPorDoctor(doctor);

};

