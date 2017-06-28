#pragma once
class FECHA
{
	int minuto;
	int hora;
	int dia;
	int mes;
	int anio;
public:
	FECHA(void);
	void Minuto(int);
	void Hora(int);
	void Dia(int);
	void Mes(int);
	void Anio(int);
	int Minuto();
	int Hora();
	int Dia();
	int Mes();
	int Anio();
	FECHA Objeto();
	void Objeto(FECHA);
};

