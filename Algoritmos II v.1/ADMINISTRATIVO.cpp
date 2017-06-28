#include "StdAfx.h"
#include "ADMINISTRATIVO.h"


ADMINISTRATIVO::ADMINISTRATIVO(void)
{
}
void ADMINISTRATIVO::Codigo_administrativo(string x)
{
	codigo_administrativo = x;
}
string ADMINISTRATIVO::Codigo_administrativo()
{
	return codigo_administrativo;
}
ADMINISTRATIVO ADMINISTRATIVO::Objeto()
{
	return *this;
}
void ADMINISTRATIVO::Objeto(ADMINISTRATIVO x)
{ 
	*this = x;
}