#include "StdAfx.h"
#include "APLICACION.h"


APLICACION::APLICACION(void)
{
}
void APLICACION::V_estudiante(ESTUDIANTE x)
{
	listEstudiante.V(x);
}
int APLICACION::Tamanio_estudiante()
{
	return listEstudiante.N();
}
ESTUDIANTE APLICACION::V_estudiante(int i)
{
	return listEstudiante.Vec(i);
}
void APLICACION::V_docente(DOCENTE x)
{
	listDocente.V(x);
}
int APLICACION::Tamanio_docente()
{
	return listDocente.N();
}
DOCENTE APLICACION::V_docente(int i)
{
	return listDocente.Vec(i);
}
void APLICACION::v_Administrativo(ADMINISTRATIVO x)
{
	listAdministrativo.V(x);
}
int APLICACION::Tamanio_administrativo()
{
	return listAdministrativo.N();
}
ADMINISTRATIVO APLICACION::V_administrativo(int i)
{
	return listAdministrativo.Vec(i);
}
void APLICACION::V_externo(EXTERNO x)
{
	listExterno.V(x);
}
int APLICACION::Tamanio_externo()
{
	return listExterno.N();
}
EXTERNO APLICACION::V_externo(int i)
{
	return listExterno.Vec(i);
}