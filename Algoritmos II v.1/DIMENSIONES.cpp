#include "StdAfx.h"
#include "DIMENSIONES.h"


DIMENSIONES::DIMENSIONES(void)
{
}
void DIMENSIONES::Altura(double x)
{ 
	altura = x;
}
void DIMENSIONES::Ancho(double x)
{
	ancho = x;
}
double DIMENSIONES::Altura()
{
	return altura;
}
double DIMENSIONES::Ancho()
{
	return ancho;
}
