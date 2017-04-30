#pragma once

#include <string.h>
class CProducto
{
private:
	char *Nombre;
	char * Marca;
	double Precio_Neto;
	double Precio_Bruto;


public:
	CProducto();
	CProducto(char *Nombre, char * Marca, double Precio_Neto, double Precio_Bruto);
	~CProducto();
	char*  GET_Nombre();
	char*  GET_Marca();
	double GET_Precio_Neto();
	double GET_Precio_Bruto();

	void SET_Nombre(char *Nombre);
	void SET_Marca(char * Marca);
	void SET_Precio_Neto(double Precio_Neto);
	void SET_Precio_Bruto(double Precio_Bruto);




};

CProducto::CProducto()
{
}
CProducto::CProducto(char *Nombre, char * Marca, double Precio_Neto, double Precio_Bruto)
{
	this->Nombre = new char[100];
	strcpy(this->Nombre, Nombre);
	this->Marca = new char[100];
	strcpy(this->Marca, Marca);
	this->Precio_Bruto = Precio_Bruto;
	this->Precio_Neto = Precio_Neto;
}
CProducto::~CProducto()
{
}


char*  CProducto::GET_Nombre() {
	return this->Nombre;
}
char*  CProducto::GET_Marca() {
	return this->Marca;
}
double CProducto::GET_Precio_Neto() {
	return this->Precio_Neto;
}
double CProducto::GET_Precio_Bruto() {
	return this->Precio_Bruto;
}



void CProducto::SET_Nombre(char *Nombre) {
	this->Nombre = new char[100];
	strcpy(this->Nombre, Nombre);
}
void CProducto::SET_Marca(char * Marca) {
	this->Marca = new char[100];
	strcpy(this->Marca, Marca);
}
void CProducto::SET_Precio_Neto(double Precio_Neto) {
	this->Precio_Neto = Precio_Neto;
}
void CProducto::SET_Precio_Bruto(double Precio_Bruto) {
	this->Precio_Bruto = Precio_Bruto;
}

