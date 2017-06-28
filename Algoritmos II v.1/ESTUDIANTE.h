#pragma once
#include "PERSONA.h"
#include "UENTA.h"
class ESTUDIANTE: public PERSONA
{
	string registro_estudiante;
	int cuenta_estudiante;
public:
	ESTUDIANTE(void);
	void Registro_estudiante(string);
	void Cuenta_estudiante(int);
	string Registro_estudiante();
	int Cuenta_estudiante();
	ESTUDIANTE Objeto();
	void Objeto(ESTUDIANTE);
};

