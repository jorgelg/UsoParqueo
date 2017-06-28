#pragma once
#include "PERSONA.h"
class DOCENTE: public PERSONA
{
	string codigo_docente;
public:
	DOCENTE(void);
	void Codigo_docente(string);
	string Codigo_docente();
	DOCENTE Objeto();
	void Objeto(DOCENTE);
};

