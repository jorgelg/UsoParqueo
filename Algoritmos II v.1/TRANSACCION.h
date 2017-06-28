#pragma once
#include "FECHA.h"
#include "ESTUDIANTE.h"

class TRANSACCION: public FECHA, public ESTUDIANTE
{
	FECHA fecha_pago;
	double pago;
	ESTUDIANTE estudiante_transaccion;
public:
	TRANSACCION(void);
	void Fecha_pago(int, int, int, int, int);
	void Pago(double);
	void Estudiante_transaccion(ESTUDIANTE);
	FECHA Fecha_pago();
	double Pago();
	ESTUDIANTE Estudiante_transaccion();
};


