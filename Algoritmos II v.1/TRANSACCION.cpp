#include "StdAfx.h"
#include "TRANSACCION.h"


TRANSACCION::TRANSACCION(void)
{
}
void TRANSACCION::Fecha_pago(int a, int b, int c, int d, int e)
{
	fecha_pago.FECHA::Minuto(a);
	fecha_pago.FECHA::Hora(b);
	fecha_pago.FECHA::Dia(c);
	fecha_pago.FECHA::Mes(d);
	fecha_pago.FECHA::Anio(e);
}
void TRANSACCION::Pago(double x)
{
	pago = x;
}
void TRANSACCION::Estudiante_transaccion(ESTUDIANTE x)
{
	estudiante_transaccion = x;
}
FECHA TRANSACCION::Fecha_pago()
{
	return fecha_pago;
}
double TRANSACCION::Pago()
{
	return pago;
}
ESTUDIANTE TRANSACCION::Estudiante_transaccion()
{
	return estudiante_transaccion;
}
