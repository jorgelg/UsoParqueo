#include "StdAfx.h"
#include "FECHA.h"


FECHA::FECHA(void)
{
}
void FECHA::Minuto(int x)
{
	minuto = x;
}
void FECHA::Hora(int x)
{
	hora = x;
}
void FECHA::Dia(int x)
{
	dia = x;
}
void FECHA::Mes(int x)
{
	mes = x;
}
void FECHA::Anio(int x)
{
	anio = x;
}
int FECHA::Minuto()
{
	return minuto;
}
int FECHA::Hora()
{
	return hora;
}
int FECHA::Dia()
{
	return dia;
}
int FECHA::Mes()
{
	return mes;
}
int FECHA::Anio()
{
	return anio;
}
FECHA FECHA::Objeto()
{
	return *this;
}
void FECHA::Objeto(FECHA x)
{
	*this = x;
}