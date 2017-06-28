#include "StdAfx.h"
#include "ESTUDIANTE.h"


ESTUDIANTE::ESTUDIANTE(void)
{
	cuenta_estudiante = 0;
}
void ESTUDIANTE::Registro_estudiante(string x)
{
	registro_estudiante = x;
}
void ESTUDIANTE::Cuenta_estudiante(int x)
{
	cuenta_estudiante += x;
}
string ESTUDIANTE::Registro_estudiante()
{
	return registro_estudiante;
}
int ESTUDIANTE::Cuenta_estudiante()
{
	cuenta_estudiante--;
	return cuenta_estudiante;
	//return 9;
}
ESTUDIANTE ESTUDIANTE::Objeto()
{
	return *this;
}
void ESTUDIANTE::Objeto(ESTUDIANTE x)
{
	*this = x;
}
