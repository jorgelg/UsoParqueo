#include "StdAfx.h"
#include "USOPARQUEO.h"


USOPARQUEO::USOPARQUEO(void)
{
}

PUESTOESTACIONAMIENTO USOPARQUEO::Puesto_Estacionamiento()
{	return(puesto_estacionamiento);
}

void USOPARQUEO::Puesto_Estacionamiento(PUESTOESTACIONAMIENTO x)
{	puesto_estacionamiento=x;
}

FECHA USOPARQUEO::Fecha()
{	return(fecha);
}

void USOPARQUEO::Fecha(FECHA y)
{	fecha=y;
}

USOPARQUEO USOPARQUEO::Objeto()
{	return *this;
}

void USOPARQUEO::Objeto(USOPARQUEO z)
{	*this=z;
}