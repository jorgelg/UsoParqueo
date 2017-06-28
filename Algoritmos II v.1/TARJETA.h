#pragma once
#include "ADMINISTRATIVO.h"
#include "DOCENTE.h"
#include "ESTUDIANTE.h"

class TARJETA: public ADMINISTRATIVO, public DOCENTE, public ESTUDIANTE
{
	string nro_tarjeta;
	string tipo_tarjeta;
	string codigo_tarjeta;
public:
	TARJETA(void);
	void Nro_tarjeta(string);
	void Tipo_tarjeta(string);
	void Codigo_tarjeta(string);
	string Nro_tarjeta();
	string Tipo_tarjeta();
	string Codigo_tarjeta();
	void Objeto(TARJETA);
	TARJETA Objeto();
};

