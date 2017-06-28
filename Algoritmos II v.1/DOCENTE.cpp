#include "StdAfx.h"
#include "DOCENTE.h"


DOCENTE::DOCENTE(void)
{
}
void DOCENTE::Codigo_docente(string x)
{
	codigo_docente = x;
}
string DOCENTE::Codigo_docente()
{
	return codigo_docente;
}
DOCENTE DOCENTE::Objeto()
{
	return *this;
}
void DOCENTE::Objeto(DOCENTE x)
{
	*this = x;
}
