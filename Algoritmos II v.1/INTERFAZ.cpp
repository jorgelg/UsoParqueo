#include "StdAfx.h"
#include "INTERFAZ.h"


INTERFAZ::INTERFAZ(void)
{
}

ESTUDIANTE INTERFAZ::Convertir_estudiante(TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d)
{	
	ESTUDIANTE x;
	x.ESTUDIANTE::PERSONA::Nombre_persona(marshal_as<std::string>(a->Text));
	x.ESTUDIANTE::PERSONA::Apellido_persona(marshal_as<std::string>(b->Text));
	x.ESTUDIANTE::PERSONA::Ci_persona(marshal_as<std::string>(c->Text));
	x.ESTUDIANTE::Registro_estudiante(marshal_as<std::string>(d->Text));

	return x;
}

void INTERFAZ::Devolver_estudiante_grilla(DataGridView^ Grilla, ESTUDIANTE x,int i)
{
	Grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(x.ESTUDIANTE::PERSONA::Nombre_persona());
	Grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(x.ESTUDIANTE::PERSONA::Apellido_persona());
	Grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(x.ESTUDIANTE::PERSONA::Ci_persona());
	Grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(x.ESTUDIANTE::Registro_estudiante());
}
DOCENTE INTERFAZ::Convertir_docente(TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d)
{
	DOCENTE x;
	x.DOCENTE::PERSONA::Nombre_persona(marshal_as<std::string>(a->Text));
	x.DOCENTE::PERSONA::Apellido_persona(marshal_as<std::string>(b->Text));
	x.DOCENTE::PERSONA::Ci_persona(marshal_as<std::string>(c->Text));
	x.DOCENTE::Codigo_docente(marshal_as<std::string>(d->Text));

	return x;
}
void INTERFAZ::Devolver_docente_grilla(DataGridView^ Grilla, DOCENTE x, int i)
{
	Grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(x.DOCENTE::PERSONA::Nombre_persona());
	Grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(x.DOCENTE::PERSONA::Apellido_persona());
	Grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(x.DOCENTE::PERSONA::Ci_persona());
	Grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(x.DOCENTE::Codigo_docente());
}
ADMINISTRATIVO INTERFAZ::Convertir_administrativo(TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d)
{
	ADMINISTRATIVO x;
	x.ADMINISTRATIVO::PERSONA::Nombre_persona(marshal_as<std::string>(a->Text));
	x.ADMINISTRATIVO::PERSONA::Apellido_persona(marshal_as<std::string>(b->Text));
	x.ADMINISTRATIVO::PERSONA::Ci_persona(marshal_as<std::string>(c->Text));
	x.ADMINISTRATIVO::Codigo_administrativo(marshal_as<std::string>(d->Text));

	return x;
}
void INTERFAZ::Devolver_administrativo_grilla(DataGridView^ Grilla, ADMINISTRATIVO x, int i)
{
	Grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(x.ADMINISTRATIVO::PERSONA::Nombre_persona());
	Grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(x.ADMINISTRATIVO::PERSONA::Apellido_persona());
	Grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(x.ADMINISTRATIVO::PERSONA::Ci_persona());
	Grilla->Rows[i]->Cells[3]->Value = marshal_as<System::String^>(x.ADMINISTRATIVO::Codigo_administrativo());
}
EXTERNO INTERFAZ::Convertir_externo(TextBox^ a, TextBox^ b, TextBox^ c)
{
	EXTERNO x;
	x.EXTERNO::PERSONA::Nombre_persona(marshal_as<std::string>(a->Text));
	x.EXTERNO::PERSONA::Apellido_persona(marshal_as<std::string>(b->Text));
	x.EXTERNO::PERSONA::Ci_persona(marshal_as<std::string>(c->Text));

	return x;
}
void INTERFAZ::Devolver_externo_grilla(DataGridView^ Grilla, EXTERNO x, int i)
{
	Grilla->Rows[i]->Cells[0]->Value = marshal_as<System::String^>(x.EXTERNO::PERSONA::Nombre_persona());
	Grilla->Rows[i]->Cells[1]->Value = marshal_as<System::String^>(x.EXTERNO::PERSONA::Apellido_persona());
	Grilla->Rows[i]->Cells[2]->Value = marshal_as<System::String^>(x.EXTERNO::PERSONA::Ci_persona());
}
