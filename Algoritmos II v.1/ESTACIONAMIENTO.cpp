#include "StdAfx.h"
#include "ESTACIONAMIENTO.h"


ESTACIONAMIENTO::ESTACIONAMIENTO(void)
{
}
void ESTACIONAMIENTO::Lugar(string x)
{
	lugar = x;
}
string ESTACIONAMIENTO::Lugar()
{
	return lugar;
}