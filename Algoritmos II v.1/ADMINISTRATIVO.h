#pragma once
#include "PERSONA.h"

class ADMINISTRATIVO: public PERSONA
{
	string codigo_administrativo;
public:
	ADMINISTRATIVO(void);
	void Codigo_administrativo(string);
	string Codigo_administrativo();
	ADMINISTRATIVO Objeto();
	void Objeto(ADMINISTRATIVO);
};

