#pragma once
#include "USOPARQUEO.h"
#include "ARREGLO.h"


class APLICACION
{
	ARREGLO<ESTUDIANTE> listEstudiante;
	ARREGLO<ADMINISTRATIVO> listAdministrativo;
	ARREGLO<DOCENTE> listDocente;
	ARREGLO<EXTERNO> listExterno;
public:
	APLICACION(void);
	void V_estudiante(ESTUDIANTE);
	int Tamanio_estudiante();
	ESTUDIANTE V_estudiante(int);
	void V_docente(DOCENTE);
	int Tamanio_docente();
	DOCENTE V_docente(int);
	void v_Administrativo(ADMINISTRATIVO);
	int Tamanio_administrativo();
	ADMINISTRATIVO V_administrativo(int);
	void V_externo(EXTERNO);
	int Tamanio_externo();
	EXTERNO V_externo(int);
};

