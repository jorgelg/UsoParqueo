#pragma once

template<class T>
class ARREGLO
{
	T v[200];
	int n;
	int max;
public:
	ARREGLO(int);
	ARREGLO(void);
	int Max();
	int N();
	void V(T);
	T Vec(int);
	bool Existe(T);
	void Modificar(int, T);
	void Modificar(T);
	void Eliminar(int);
	void Eliminar(T);
	void objeto(ARREGLO<T> x){this=x;}
	ARREGLO<T> objeto(){return this;}
};

template <class T>
ARREGLO<T>::ARREGLO(int x)
{
	n = 0;
	max=x;
}

template <class T>
ARREGLO<T>::ARREGLO(void)
{
	n = 0;
	max=150;
}

template <class T>
int ARREGLO<T>::Max()
{
	return max;
}

template <class T>
int ARREGLO<T>::N()
{
	return n;
}

template <class T>
void ARREGLO<T>::V(T a)
{
	v[n] = a;
	n++;
}

template <class T>
T ARREGLO<T>::Vec(int i)
{
	return v[i];
}

template <class T>
void ARREGLO<T>::Modificar(int i, T a)
{
	v[i].Objeto(a);
}

template <class T>
void ARREGLO<T>::Modificar(T a)
{
	for(int i =0 ; i < n; i++)
	{
		if(v[i].TARJETA::Codigo_tarjeta() == a.TARJETA::Codigo_tarjeta())
		{	
			v[i] = a;
		}
	}
}

template <class T>
void ARREGLO<T>::Eliminar(int i)
{
	for(int j = i; j < n; j++)
	{
		v[j] = v[j+1];
	}
	n--;
}

template <class T>
void ARREGLO<T>::Eliminar(T a)
{
	for(int i =0 ; i < n; i++)
	{
		if(v[i].TARJETA::Codigo_tarjeta() == a.TARJETA::Codigo_tarjeta())
		{	
			n--;
			for(int j = i; j < n; j++)
			{
				v[j] = v[j+1];
			}
			i--;

		}
	}
}