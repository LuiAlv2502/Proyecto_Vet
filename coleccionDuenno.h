#pragma once
#include "duenno.h"
#include <sstream>
using namespace std;
class ColeccionDuenno
{
private:
	duenno** d;
	int tamanno;
	int cantidad;
public:
	ColeccionDuenno();
	ColeccionDuenno(duenno** aux, int tamanno, int cantidad);
	bool insertar(duenno* c, int pos);
	string toString();
	int buscarDuenno(string id);
	void eliminar(string id);
	~ColeccionDuenno();
};

