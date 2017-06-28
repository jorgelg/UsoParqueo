#include "StdAfx.h"
#include "TARJETA.h"


TARJETA::TARJETA(void)
{
}
void TARJETA::Nro_tarjeta(string x)
{
	nro_tarjeta = x;
}
void TARJETA::Tipo_tarjeta(string x)
{
	tipo_tarjeta = x;
}
void TARJETA::Codigo_tarjeta(string x)
{
	codigo_tarjeta = x;
}
string TARJETA::Nro_tarjeta()
{
	return nro_tarjeta;
}
string TARJETA::Tipo_tarjeta()
{
	return tipo_tarjeta;
}
string TARJETA::Codigo_tarjeta()
{
	return codigo_tarjeta;
}
void TARJETA::Objeto(TARJETA x)
{
	*this = x;
}
TARJETA TARJETA::Objeto()
{
	return *this;
}