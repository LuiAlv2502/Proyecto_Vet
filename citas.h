#include "duenno.h"
#include <sstream>
#include <iostream>
using namespace std;

class citas
{
private:
	string estado;
	duenno duennoC;
	mascota mascotaC;
	int dia;
	int hora;

public:
	citas();
	citas(duenno duennoC, mascota mascotaC, string estado, int dia, int hora);
	void setDia(int dia);
	void setHora(int hora);
	void setEstado(string estado);
	void setDuennoCita(duenno d1);
	void setMascotaCita(mascota mascotaC);
	duenno getDuennoC();
	mascota getMascotaC();
	string getEstado();
	int getDia();
	int getHora();
	string toString();
};
