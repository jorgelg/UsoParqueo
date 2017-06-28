#pragma once
#include "TARJETA.h"
#include "FECHA.h"
#include "PUESTOESTACIONAMIENTO.h"
#include "EXTERNO.h"

class USOPARQUEO: public TARJETA,public FECHA , public PUESTOESTACIONAMIENTO, public EXTERNO
{	PUESTOESTACIONAMIENTO puesto_estacionamiento;
	FECHA fecha;
public:
	USOPARQUEO(void);
	PUESTOESTACIONAMIENTO Puesto_Estacionamiento();
	void Puesto_Estacionamiento(PUESTOESTACIONAMIENTO);
	FECHA Fecha();
	void Fecha(FECHA);
	USOPARQUEO Objeto();
	void Objeto(USOPARQUEO);
	void Registrar_Entrada();
	void Registrar_Salida();
};

