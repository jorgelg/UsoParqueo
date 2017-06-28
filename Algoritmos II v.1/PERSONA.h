#pragma once
#include <iostream>
#include <string>

using namespace std;
class PERSONA
{
	string nombre_persona;
	string apellido_persona;
	string ci_persona;
public:
	PERSONA(void);
	void Nombre_persona(string);
	void Apellido_persona(string);
	void Ci_persona(string);
	string Nombre_persona();
	string Apellido_persona();
	string Ci_persona();
	PERSONA Objeto();
	void Objeto(PERSONA);
};
