#pragma once
#include "USOPARQUEO.h"
#include "msclr\marshal_cppstd.h"
using namespace msclr::interop;
using namespace System::Windows::Forms;
class INTERFAZ: public USOPARQUEO
{
public:
	INTERFAZ(void);
	ESTUDIANTE Convertir_estudiante(TextBox^, TextBox^, TextBox^, TextBox^);
	void Devolver_estudiante_grilla(DataGridView^, ESTUDIANTE, int);
	DOCENTE Convertir_docente(TextBox^, TextBox^, TextBox^, TextBox^);
	void Devolver_docente_grilla(DataGridView^, DOCENTE, int);
	ADMINISTRATIVO Convertir_administrativo(TextBox^, TextBox^, TextBox^, TextBox^);
	void Devolver_administrativo_grilla(DataGridView^, ADMINISTRATIVO, int);
	EXTERNO Convertir_externo(TextBox^, TextBox^, TextBox^);
	void Devolver_externo_grilla(DataGridView^, EXTERNO, int);
};

