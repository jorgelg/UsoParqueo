#pragma once
#include "PUESTO.h"
#include "ESTACIONAMIENTO.h"
class PUESTOESTACIONAMIENTO: public PUESTO, public ESTACIONAMIENTO
{
	PUESTO puesto;
	ESTACIONAMIENTO estacionamiento;
public:
	PUESTOESTACIONAMIENTO(void);
};


