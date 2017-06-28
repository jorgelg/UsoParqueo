#include "StdAfx.h"
#include "UENTA.h"


CUENTA::CUENTA(void)
{
	saldo_cuenta = 0;
}
void CUENTA::Saldo_cuenta(int x)
{
	saldo_cuenta += x;
}
int CUENTA::Saldo_cuenta()
{
	saldo_cuenta--;
	return saldo_cuenta;
}
CUENTA CUENTA::Objeto()
{
	return *this;
}
void CUENTA::Objeto(CUENTA x)
{
	*this = x;
}