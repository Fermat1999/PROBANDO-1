#pragma once
#include <vector>
#include "Header.h"

using namespace std;

class CVecProducto
{
private:
	vector<CProducto*>*arrProducto;

public:
	CVecProducto();
	~CVecProducto();
	vector<CProducto*>*Get_arrProducto();
	void Registrar_Producto(char *Nombre, char * Marca, double Precio_Neto, double Precio_Bruto);
	void Eliminar_Producto(int pos);
	void Eliminar_todo_Productos();
	double Reporte1();
	vector<CProducto*>*Reporte2();

};

CVecProducto::CVecProducto()
{
	arrProducto = new vector<CProducto*>();
}

CVecProducto::~CVecProducto()
{
}

vector<CProducto*>* CVecProducto::Get_arrProducto()
{
	return this->arrProducto;
}
void CVecProducto::Registrar_Producto(char *Nombre, char * Marca, double Precio_Neto, double Precio_Bruto)
{
	CProducto*objProducto = new CProducto(Nombre, Marca, Precio_Neto, Precio_Bruto);
	arrProducto->push_back(objProducto);

}

void CVecProducto::Eliminar_Producto(int pos)
{
	arrProducto->erase(arrProducto->begin() + pos);
}
void CVecProducto::Eliminar_todo_Productos()
{
	int n = Get_arrProducto()->size();
	for ( int i = n-1;  i>=0; i-- )
	{
		Eliminar_Producto(i);
	}
}
double CVecProducto::Reporte1()
{
	double total = 0.0;
	for (int i = 0;i < arrProducto->size();i++) 
	{
		total += arrProducto->at(i)->GET_Precio_Bruto();
	}
	return  total / arrProducto->size();

}
vector<CProducto*>*CVecProducto::Reporte2()
{
	double resultado;
	double promedio = 0.0;
	for (int i = 0;i < arrProducto->size();i++)
	{
		promedio += arrProducto->at(i)->GET_Precio_Neto();
	}
	resultado = promedio / arrProducto->size();

	vector<CProducto*>* Aux = new vector<CProducto*>();
	for (int i = 0;i<arrProducto->size();i++)
	{
		if (arrProducto->at(i)->GET_Precio_Neto() > resultado);//CONDICION
		Aux->push_back(arrProducto->at(i));
	}
	return Aux;
}
