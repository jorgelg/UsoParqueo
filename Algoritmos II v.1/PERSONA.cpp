#include "StdAfx.h"
#include "PERSONA.h"


PERSONA::PERSONA(void)
{
}

void PERSONA::Nombre_persona(string x)
{
	nombre_persona = x;
}
void PERSONA::Apellido_persona(string x)
{
	apellido_persona = x;
}
void PERSONA::Ci_persona(string x)
{
	ci_persona = x;
}
string PERSONA::Nombre_persona()
{
	return nombre_persona;
}
string PERSONA::Apellido_persona()
{
	return apellido_persona;
}
string PERSONA::Ci_persona()
{
	return ci_persona;
}
PERSONA PERSONA::Objeto()
{
	return *this;
}
void PERSONA::Objeto(PERSONA x)
{
	*this = x;
}