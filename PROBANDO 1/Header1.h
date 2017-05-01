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
	vector<CProducto*>*Reporte3();

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

}
