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
	vector<CProducto*>*Reporte1();
	vector<CProducto*>*Reporte2();

};

CVecProducto::CVecProducto()
{
}
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
vector<CProducto*>*CVecProducto::Reporte1()
{
	double total = 0.0;
	for (int i = 0;i < arrProducto->size();i++) 
	{
		total += arrProducto->at(i)->GET_Precio_Bruto;
	}
	return  total / arrProducto->size();

}
vector<CProducto*>*CVecProducto::Reporte2()
{


}
